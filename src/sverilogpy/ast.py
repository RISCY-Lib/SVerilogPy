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

import attr
import enum


class LifetimeEnum(enum.Enum):
  STATIC = enum.auto()
  AUTOMATIC = enum.auto()
  DEFAULT = enum.auto()


@attr.define(auto_attribs=True, kw_only=True)
class ASTNode:
  """The base class for all SV AST Nodes"""

  parent: ASTNode | None = None
  """The parent of this node"""
  attributes: list[AttributeInstance] = attr.field(factory=list)
  """The attributes of this node"""


@attr.define(auto_attribs=True)
class AttributeInstance(ASTNode):
  """The base class for all SV Attribute Instances"""

  specs: list[AttributeSpec] = attr.field(factory=list)
  """The specifications of this attribute"""


@attr.define(auto_attribs=True)
class AttributeSpec(ASTNode):
  """The base class for all SV Attribute Specifications"""

  name: str
  """The name of this attribute"""
  value: str
  """The value of this attribute"""
