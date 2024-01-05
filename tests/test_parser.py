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

import sverilogpy.parser as parser
import sverilogpy.ast as ast
import antlr4


def test_invalid_entry_point():
  source = """module foo; endmodule"""

  with pytest.raises(parser.InvalidEntryPointError):
    parser.parseString(source, "invalid_entry_point")


# def test_AttributeInstance_parser():
#   source = """(* foo = "bar" *)"""

#   assert isinstance(
#             parser.parseString(source, "attribute_instance"),
#             parser.SystemVerilogParser.Attribute_instanceContext
#          )
#   assert False  #TODO: Finish this test


# def test_AttributeSpec_parser():
#   source = """foo = "bar" """

#   assert isinstance(
#             parser.parseString(source, "attr_spec"),
#             parser.SystemVerilogParser.Attr_specContext
#          )
#   assert False  #TODO: Finish  this test


# def test_SourceText_parser():
#   source = """module foo; endmodule"""

#   assert isinstance(
#             parser.parseString(source, "source_text"),
#             parser.SystemVerilogParser.Source_textContext
#          )
#   assert False  #TODO: Finish  this test

@pytest.mark.parametrize("source,expected", [
  ("""timeunit 1ns/5ps;""", ast.TimeunitsDeclaration((1, ast.TimeunitEnum.NS), (5, ast.TimeunitEnum.PS))),
  ("""timeprecision 7ps;""", ast.TimeunitsDeclaration(None, (7, ast.TimeunitEnum.PS))),
  ("""timeunit 6us;""", ast.TimeunitsDeclaration((6, ast.TimeunitEnum.US), None)),
])
def test_TimeunitsDeclaration_parser(source: str, expected: ast.TimeunitsDeclaration):
  ctx = parser.parseString(source, "timeunits_declaration")

  assert isinstance(
            ctx,
            parser.SystemVerilogParser.Timeunits_declarationContext
         )

  val = ast.TimeunitsDeclaration.fromContext(ctx)
  assert isinstance(val, ast.TimeunitsDeclaration)
  assert val.timeunit == expected.timeunit
  assert val.timeprecision == expected.timeprecision


# def test_Description_parser():
#   source = """// foo"""

#   assert isinstance(
#             parser.parseString(source, "description"),
#             parser.SystemVerilogParser.DescriptionContext
#          )
#   assert False  #TODO: Finish  this test


# def test_ModuleDeclaration_parser():
#   source = """module foo; endmodule"""

#   assert isinstance(
#             parser.parseString(source, "module_declaration"),
#             parser.SystemVerilogParser.Module_declarationContext
#          )
#   assert False  #TODO: Finish  this test


# def test_ModuleItem_parser():
#   source = """module foo; endmodule"""

#   assert isinstance(
#             parser.parseString(source, "module_item"),
#             parser.SystemVerilogParser.Module_itemContext
#          )
#   assert False  #TODO: Finish  this test


# def test_PackageImportDeclaration_parser():
#   source = """package foo; endpackage"""

#   assert isinstance(
#             parser.parseString(source, "package_import_declaration"),
#             parser.SystemVerilogParser.Package_import_declarationContext
#          )
#   assert False  #TODO: Finish  this test


# def test_ParameterDeclaration_parser():
#   source = """parameter foo = 1;"""

#   assert isinstance(
#             parser.parseString(source, "parameter_declaration"),
#             parser.SystemVerilogParser.Parameter_declarationContext
#          )
#   assert False  #TODO: Finish  this test


# def test_PortDeclaration_parser():
#   source = """input foo;"""

#   assert isinstance(
#             parser.parseString(source, "port_declaration"),
#             parser.SystemVerilogParser.Port_declarationContext
#          )
#   assert False  #TODO: Finish  this test