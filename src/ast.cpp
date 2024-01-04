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

#include "ast.hpp"

//======================================================================================//
// ASTNode
//======================================================================================//
void ast::ASTNode::set_parent(ASTNode* parent) {
  this->_parent = parent;
}

ast::ASTNode* ast::ASTNode::get_parent() {
  return this->_parent;
}

void ast::ASTNode::add_attribute(AttributeInstance* attr) {
  this->_attributes.push_back(attr);
}

vector<ast::AttributeInstance*> ast::ASTNode::get_attributes() {
  return this->_attributes;
}

//======================================================================================//
// AttributeInstance
//======================================================================================//
void ast::AttributeInstance::add_spec(AttributeSpec* spec) {
  this->_specs.push_back(spec);
}

vector<ast::AttributeSpec*> ast::AttributeInstance::get_specs() {
  return this->_specs;
}

//======================================================================================//
// AttributeSpec
//======================================================================================//
string ast::AttributeSpec::get_name() {
  return this->_name;
}

string ast::AttributeSpec::get_value() {
  return this->_value;
}


//======================================================================================//
// Init AST Module
//======================================================================================//
void ast::init_ast(py::module &m) {
  py::enum_<ast::lifetime_e>(m, "LifetimeEnum")
    .value("STATIC", ast::STATIC_LIFETIME)
    .value("AUTOMATIC", ast::AUTOMATIC_LIFETIME)
    .value("DEFAULT", ast::DEFAULT_LIFETIME)
    .export_values();

  py::class_<ast::ASTNode>(m, "ASTNode")
    .def(py::init<>())
    .def("setParent", &ast::ASTNode::set_parent)
    .def("getParent", &ast::ASTNode::get_parent)
    .def("addAttribute", &ast::ASTNode::add_attribute)
    .def("getAttributes", &ast::ASTNode::get_attributes);

  py::class_<ast::AttributeInstance, ast::ASTNode>(m, "AttributeInstance")
    .def(py::init<>())
    .def("addSpec", &ast::AttributeInstance::add_spec)
    .def("getSpecs", &ast::AttributeInstance::get_specs);

  py::class_<ast::AttributeSpec, ast::ASTNode>(m, "AttributeSpec")
    .def(py::init<string, string>())
    .def("getName", &ast::AttributeSpec::get_name)
    .def("getValue", &ast::AttributeSpec::get_value);
}