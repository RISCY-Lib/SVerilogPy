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

from setuptools import setup

import importlib.util
import pathlib
import sys

_proj_root = pathlib.Path(__file__).parent
_sverilogpy_spec = importlib.util.spec_from_file_location("sverilogpy", _proj_root.joinpath("src/sverilogpy/__init__.py"))
sverilogpy = importlib.util.module_from_spec(_sverilogpy_spec)
sys.modules["sverilogpy"] = sverilogpy
_sverilogpy_spec.loader.exec_module(sverilogpy)

if __name__ == "__main__":
  setup(
    version=sverilogpy.__version__
  )
