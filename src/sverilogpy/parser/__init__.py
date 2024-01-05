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

from sverilogpy.parser.SystemVerilogLexer import SystemVerilogLexer                    # noqa: F401
from sverilogpy.parser.SystemVerilogParser import SystemVerilogParser                  # noqa: F401
from sverilogpy.parser.SystemVerilogParserVisitor import SystemVerilogParserVisitor    # noqa: F401
from sverilogpy.parser.SystemVerilogParserListener import SystemVerilogParserListener  # noqa: F401

import antlr4


def parseFile(filename: str, entry: str = "source_text") -> antlr4.ParserRuleContext:
    """Parse a System Verilog source file into a SystemVerilogParser

    Args:
        source (str): The source to parse

    Returns:
        SystemVerilogParser: The parsed source
    """
    input_stream = antlr4.FileStream(filename)
    return _parse(input_stream, entry)


def parseString(source: str, entry: str = "source_text") -> antlr4.ParserRuleContext:
    input_stream = antlr4.InputStream(source)
    return _parse(input_stream, entry)


def _parse(input_stream: antlr4.InputStream, entry: str) -> antlr4.ParserRuleContext:
    lexer = SystemVerilogLexer(input_stream)
    stream = antlr4.CommonTokenStream(lexer)
    parser = SystemVerilogParser(stream)
    parser_func = getattr(parser, entry)
    return parser_func()