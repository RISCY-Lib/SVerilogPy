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
import glob
from pybind11.setup_helpers import Pybind11Extension, build_ext

__version__ = "1.0.0a2"

ext_modules = [
  Pybind11Extension(
    "sverilogpy",
    sorted(glob.glob("src/*.cpp")),
    define_macros=[("VERSION_INFO", __version__)],
  )
]

if __name__ == "__main__":
  setup(
    version=__version__,
    ext_modules=ext_modules,
    cmdclass={"build_ext": build_ext}
  )
