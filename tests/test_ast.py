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

import sverilogpy.ast as ast


def test_lifetimeenum():
  assert ast.LifetimeEnum.STATIC is ast.LifetimeEnum.STATIC
  assert ast.LifetimeEnum.AUTOMATIC is ast.LifetimeEnum.AUTOMATIC
  assert ast.LifetimeEnum.DEFAULT is ast.LifetimeEnum.DEFAULT


def test_attributespec():
  spec = ast.AttributeSpec("name", "value")

  assert isinstance(spec, ast.AttributeSpec)
  assert spec.name == "name"
  assert spec.value == "value"


def test_attributeinstance():
  attr = ast.AttributeInstance()
  spec = ast.AttributeSpec("name", "value")

  assert isinstance(attr, ast.AttributeInstance)
  assert attr.parent is None
  assert attr.attributes == []
  assert attr.specs == []

  attr.specs.append(spec)
  assert attr.specs == [spec]


def test_astnode():
  node = ast.ASTNode()
  inst = ast.AttributeInstance()

  assert isinstance(node, ast.ASTNode)
  assert node.parent is None
  assert node.attributes == []

  node.parent = node
  assert node.parent is node

  node.attributes.append(inst)
  assert node.attributes == [inst]