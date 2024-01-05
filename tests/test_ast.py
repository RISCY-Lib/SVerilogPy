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

import pytest

import sverilogpy.ast as ast


def test_lifetimeenum():
  assert ast.LifetimeEnum.STATIC is ast.LifetimeEnum.STATIC
  assert ast.LifetimeEnum.AUTOMATIC is ast.LifetimeEnum.AUTOMATIC
  assert ast.LifetimeEnum.DEFAULT is ast.LifetimeEnum.DEFAULT


def test_attributespec():
  spec = ast.AttrSpec("name", "value")

  assert isinstance(spec, ast.AttrSpec)
  assert spec.name == "name"
  assert spec.value == "value"


def test_attributeinstance():
  attr = ast.AttributeInstance()
  spec = ast.AttrSpec("name", "value")

  assert isinstance(attr, ast.AttributeInstance)
  assert attr.parent is None
  assert attr.attributes == []
  assert attr.specs == []

  attr.specs.append(spec)
  assert attr.specs == [spec]

  attr.parent = attr
  assert attr.parent is attr

  attr.attributes.append(attr)
  assert attr.attributes == [attr]


def test_astnode():
  with pytest.raises(TypeError):
    node = ast.ASTNode()
