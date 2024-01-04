/***********************************************************************************
 * A python System Verilog Parser and AST
 * Copyright (C) 2024  RISCY-Lib Contributors
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; If not, see <https://www.gnu.org/licenses/>.
 ***********************************************************************************/

#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

#include <string>
#include <vector>

using namespace std;

namespace py = pybind11;

namespace ast {
  void init_ast(py::module &);

  typedef enum {
    STATIC_LIFETIME,
    AUTOMATIC_LIFETIME,
    DEFAULT_LIFETIME
  } lifetime_e;

  /***********************************************************************************************/
  /* AST Nodes                                                                                   */
  /***********************************************************************************************/
  class ASTNode;
  class AttributeInstance;
  class AttributeSpec;
  class Module;

  class ASTNode {
    protected:
      ASTNode* _parent;

      vector<AttributeInstance*> _attributes;

    public:
      ASTNode() : _parent(nullptr), _attributes(vector<AttributeInstance*>()) {};
      virtual ~ASTNode() = default;

      void set_parent(ASTNode*);
      ASTNode* get_parent();

      void add_attribute(AttributeInstance*);
      vector<AttributeInstance*> get_attributes();
  };

  class AttributeInstance : public ASTNode {
    protected:
      vector<AttributeSpec*> _specs;

    public:
      AttributeInstance() : ASTNode(), _specs(vector<AttributeSpec*>()) {};
      ~AttributeInstance() = default;

      void add_spec(AttributeSpec*);
      vector<AttributeSpec*> get_specs();
  };

  class AttributeSpec: public ASTNode {
    protected:
      string _name;
      string _value;

    public:
      AttributeSpec(string name, string value) : ASTNode(), _name(name), _value(value) {};
      ~AttributeSpec() = default;

      string get_name();
      string get_value();
  };

  class Module : public ASTNode {
    protected:
      string _name;
      lifetime_e _lifetime;

    public:
      Module(string name, lifetime_e lifetime = DEFAULT_LIFETIME) :
        ASTNode(), _name(name), _lifetime(lifetime) {};
      ~Module() = default;

      string get_name();
      lifetime_e get_lifetime();
  };

  // TODO: Library
}