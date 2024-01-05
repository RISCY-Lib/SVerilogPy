#####################################################################################
# A python System Verilog Parser and AST
# Copyright (C) 2024  RISCY-Lib Contributors
#
# This library is free software; you can redistribute it and/or
# modify it under the terms of the GNU Lesser General Public
# License as published by the Free Software Foundation; either
# version 2.1 of the License, or (at your option) any later version.
#
# This library is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
# Lesser General Public License for more details.
#
# You should have received a copy of the GNU Lesser General Public
# License along with this library; If not, see <https://www.gnu.org/licenses/>.
#####################################################################################

from __future__ import annotations

from typing import Tuple, TypeVar

import attr
import enum
import re

from abc import ABC, abstractmethod

import antlr4
from sverilogpy.parser import SystemVerilogParser


#####################################################################################
# Custom Errors
#####################################################################################
class InvalidContextError(Exception):
  """An exception raised when an invalid context is given to fromContext"""
  pass


#####################################################################################
# Useful Enums
#####################################################################################
class LifetimeEnum(enum.Enum):
  STATIC = enum.auto()
  AUTOMATIC = enum.auto()
  DEFAULT = enum.auto()


class TimeunitEnum(enum.StrEnum):
  """Enum for each time unit"""
  S = enum.auto()
  MS = enum.auto()
  US = enum.auto()
  NS = enum.auto()
  PS = enum.auto()
  FS = enum.auto()


#####################################################################################
# Type Variables
#####################################################################################
ASTNodeT = TypeVar("ASTNodeT", bound="ASTNode")


#####################################################################################
# AST Definitions
#####################################################################################
@attr.define(auto_attribs=True, kw_only=True)
class ASTNode(ABC):
  """The base class for all SV AST Nodes"""

  parent: ASTNode | None = None
  """The parent of this node"""
  attributes: list[AttributeInstance] = attr.field(factory=list)
  """The attributes of this node"""

  @classmethod
  @abstractmethod
  def fromContext(self, ctx: antlr4.ParserRuleContext) -> ASTNodeT:
    """Creates an AST Node from an ANTLR context"""
    raise NotImplementedError()


@attr.define(auto_attribs=True)
class AttributeInstance(ASTNode):
  """The base class for all SV Attribute Instances"""

  specs: list[AttrSpec] = attr.field(factory=list)
  """The specifications of this attribute"""

  @classmethod
  def fromContext(cls, ctx: antlr4.ParserRuleContext) -> AttributeInstance:
    """Creates an AttributeInstance from an ANTLR context"""
    if not isinstance(ctx, SystemVerilogParser.Attribute_instanceContext):
      raise InvalidContextError(f"Invalid context: {type(ctx).__name__}")

    # TODO
    raise NotImplementedError()

@attr.define(auto_attribs=True)
class AttrSpec(ASTNode):
  """The base class for all SV Attribute Specifications"""

  name: str
  """The name of this attribute"""
  value: str
  """The value of this attribute"""

  @classmethod
  def fromContext(cls, ctx: antlr4.ParserRuleContext) -> AttrSpec:
    """Creates an AttrSpec from an ANTLR context"""
    if not isinstance(ctx, SystemVerilogParser.Attr_specContext):
      raise InvalidContextError(f"Invalid context: {type(ctx).__name__}")

    # TODO
    raise NotImplementedError()


@attr.define(auto_attribs=True)
class SourceText(ASTNode):
  """The base class for all SV Source Text"""

  timeunits : TimeunitsDeclaration | None = None
  """The timeunits of this source text"""
  descriptions : list[Description] = attr.field(factory=list)
  """The descriptions of this source text"""

  @classmethod
  def fromContext(cls, ctx: antlr4.ParserRuleContext) -> SourceText:
    """Creates a SourceText from an ANTLR context"""
    if not isinstance(ctx, SystemVerilogParser.Source_textContext):
      raise InvalidContextError(f"Invalid context: {type(ctx).__name__}")

    # TODO
    raise NotImplementedError()


@attr.define(auto_attribs=True)
class TimeunitsDeclaration(ASTNode):
  """The base class for all SV Timeunits"""

  timeunit : Tuple[float, TimeunitEnum]
  """The timeunit of this TimeunitsDeclaration"""
  timeprecision : Tuple[float, TimeunitEnum]
  """The timeprecision of this TimeunitsDeclaration"""

  @classmethod
  def fromContext(cls, ctx: antlr4.ParserRuleContext) -> TimeunitsDeclaration:
    """Creates a TimeunitsDeclaration from an ANTLR context"""
    if (isinstance(ctx, SystemVerilogParser.TIME_UNIT_UNIFIEDContext) or
        isinstance(ctx, SystemVerilogParser.TIMEUNIT_FIRSTContext)):
      tunit = ctx.TIME_LITERAL(0)
      tprec = ctx.TIME_LITERAL(1)
    elif isinstance(ctx, SystemVerilogParser.TIMEPRECISION_FIRSTContext):
      tunit = ctx.TIME_LITERAL(1)
      tprec = ctx.TIME_LITERAL(0)
    else:
      raise InvalidContextError(f"Invalid context: {type(ctx).__name__}")

    if tunit is not None:
      tunit = re.match(r"(\d+)(\w+)", tunit.getText())
      tunit = (float(tunit.group(1)), TimeunitEnum[tunit.group(2).upper()])

    if tprec is not None:
      tprec = re.match(r"(\d+)(\w+)", tprec.getText())
      tprec = (float(tprec.group(1)), TimeunitEnum[tprec.group(2).upper()])

    return cls(
      timeunit=tunit,
      timeprecision=tprec
    )


@attr.define(auto_attribs=True)
class Description(ASTNode, ABC):
  """The base class for all SV Descriptions"""


@attr.define(auto_attribs=True)
class ModuleDeclaration(Description):
  """The base class for all SV Module Declarations"""

  name: str
  """The name of this module"""
  lifetime: LifetimeEnum = LifetimeEnum.DEFAULT
  """The lifetime of this module"""
  packages: list[PackageImportDeclaration] = attr.field(factory=list)
  """The packages of this module"""
  parameters: list[ParameterDeclaration] = attr.field(factory=list)
  """The parameters of this module"""
  ports: list[PortDeclaration] = attr.field(factory=list)
  """The ports of this module"""
  items: list[ModuleItem] = attr.field(factory=list)
  """The items of this module"""


@attr.define(auto_attribs=True)
class ModuleItem(ASTNode, ABC):
  """The base class for all SV Module Items"""

  #TODO


@attr.define(auto_attribs=True)
class PackageImportDeclaration(ModuleItem):
  """The base class for all SV Package Import Declarations"""

  # TODO


@attr.define(auto_attribs=True)
class ParameterDeclaration(ModuleItem):
  """The base class for all SV Parameter Declarations"""

  # TODO


@attr.define(auto_attribs=True)
class PortDeclaration(ModuleItem):
  """The base class for all SV Port Declarations"""

  # TODO
