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

import enum


class LifetimeEnum(enum.Enum):
  STATIC = enum.auto()
  AUTOMATIC = enum.auto()
  DEFAULT = enum.auto()


class ASTNode:
  def getParent(self) -> ASTNode: ...
  def setParent(self, parent: ASTNode) -> None: ...
  def addAttribute(self, attr: AttributeInstance) -> None: ...
  def getAttributes(self) -> list[AttributeInstance]: ...


class AttributeInstance(ASTNode):
  def addSpec(self, spec: AttributeSpec) -> None: ...
  def getSpecs(self) -> list[AttributeSpec]: ...


class AttributeSpec(ASTNode):
  def __init__(self, name: str, value: str): ...
  def getName(self) -> str: ...
  def getValue(self) -> str: ...
