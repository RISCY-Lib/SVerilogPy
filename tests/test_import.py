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

import sverilogpy

import importlib.util
import pathlib
import sys

_proj_root = pathlib.Path(__file__).parent.parent
_setup_spec = importlib.util.spec_from_file_location("setup", _proj_root.joinpath("setup.py"))
setup = importlib.util.module_from_spec(_setup_spec)
sys.modules["setup"] = setup
_setup_spec.loader.exec_module(setup)

def test_import():
    assert sverilogpy.__version__ == setup.__version__
