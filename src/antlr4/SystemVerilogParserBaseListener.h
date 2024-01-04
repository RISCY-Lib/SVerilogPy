
// Generated from SystemVerilogParser.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "SystemVerilogParserListener.h"


/**
 * This class provides an empty implementation of SystemVerilogParserListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  SystemVerilogParserBaseListener : public SystemVerilogParserListener {
public:

  virtual void enterLibrary_text(SystemVerilogParser::Library_textContext * /*ctx*/) override { }
  virtual void exitLibrary_text(SystemVerilogParser::Library_textContext * /*ctx*/) override { }

  virtual void enterLibrary_description(SystemVerilogParser::Library_descriptionContext * /*ctx*/) override { }
  virtual void exitLibrary_description(SystemVerilogParser::Library_descriptionContext * /*ctx*/) override { }

  virtual void enterLibrary_declaration(SystemVerilogParser::Library_declarationContext * /*ctx*/) override { }
  virtual void exitLibrary_declaration(SystemVerilogParser::Library_declarationContext * /*ctx*/) override { }

  virtual void enterInclude_statement(SystemVerilogParser::Include_statementContext * /*ctx*/) override { }
  virtual void exitInclude_statement(SystemVerilogParser::Include_statementContext * /*ctx*/) override { }

  virtual void enterSource_text(SystemVerilogParser::Source_textContext * /*ctx*/) override { }
  virtual void exitSource_text(SystemVerilogParser::Source_textContext * /*ctx*/) override { }

  virtual void enterDescription(SystemVerilogParser::DescriptionContext * /*ctx*/) override { }
  virtual void exitDescription(SystemVerilogParser::DescriptionContext * /*ctx*/) override { }

  virtual void enterModule_header(SystemVerilogParser::Module_headerContext * /*ctx*/) override { }
  virtual void exitModule_header(SystemVerilogParser::Module_headerContext * /*ctx*/) override { }

  virtual void enterModule_nonansi_header(SystemVerilogParser::Module_nonansi_headerContext * /*ctx*/) override { }
  virtual void exitModule_nonansi_header(SystemVerilogParser::Module_nonansi_headerContext * /*ctx*/) override { }

  virtual void enterModule_ansi_header(SystemVerilogParser::Module_ansi_headerContext * /*ctx*/) override { }
  virtual void exitModule_ansi_header(SystemVerilogParser::Module_ansi_headerContext * /*ctx*/) override { }

  virtual void enterModule_declaration(SystemVerilogParser::Module_declarationContext * /*ctx*/) override { }
  virtual void exitModule_declaration(SystemVerilogParser::Module_declarationContext * /*ctx*/) override { }

  virtual void enterModule_keyword(SystemVerilogParser::Module_keywordContext * /*ctx*/) override { }
  virtual void exitModule_keyword(SystemVerilogParser::Module_keywordContext * /*ctx*/) override { }

  virtual void enterInterface_header(SystemVerilogParser::Interface_headerContext * /*ctx*/) override { }
  virtual void exitInterface_header(SystemVerilogParser::Interface_headerContext * /*ctx*/) override { }

  virtual void enterInterface_nonansi_header(SystemVerilogParser::Interface_nonansi_headerContext * /*ctx*/) override { }
  virtual void exitInterface_nonansi_header(SystemVerilogParser::Interface_nonansi_headerContext * /*ctx*/) override { }

  virtual void enterInterface_ansi_header(SystemVerilogParser::Interface_ansi_headerContext * /*ctx*/) override { }
  virtual void exitInterface_ansi_header(SystemVerilogParser::Interface_ansi_headerContext * /*ctx*/) override { }

  virtual void enterInterface_declaration(SystemVerilogParser::Interface_declarationContext * /*ctx*/) override { }
  virtual void exitInterface_declaration(SystemVerilogParser::Interface_declarationContext * /*ctx*/) override { }

  virtual void enterProgram_header(SystemVerilogParser::Program_headerContext * /*ctx*/) override { }
  virtual void exitProgram_header(SystemVerilogParser::Program_headerContext * /*ctx*/) override { }

  virtual void enterProgram_nonansi_header(SystemVerilogParser::Program_nonansi_headerContext * /*ctx*/) override { }
  virtual void exitProgram_nonansi_header(SystemVerilogParser::Program_nonansi_headerContext * /*ctx*/) override { }

  virtual void enterProgram_ansi_header(SystemVerilogParser::Program_ansi_headerContext * /*ctx*/) override { }
  virtual void exitProgram_ansi_header(SystemVerilogParser::Program_ansi_headerContext * /*ctx*/) override { }

  virtual void enterProgram_declaration(SystemVerilogParser::Program_declarationContext * /*ctx*/) override { }
  virtual void exitProgram_declaration(SystemVerilogParser::Program_declarationContext * /*ctx*/) override { }

  virtual void enterChecker_declaration(SystemVerilogParser::Checker_declarationContext * /*ctx*/) override { }
  virtual void exitChecker_declaration(SystemVerilogParser::Checker_declarationContext * /*ctx*/) override { }

  virtual void enterClass_declaration(SystemVerilogParser::Class_declarationContext * /*ctx*/) override { }
  virtual void exitClass_declaration(SystemVerilogParser::Class_declarationContext * /*ctx*/) override { }

  virtual void enterInterface_class_type(SystemVerilogParser::Interface_class_typeContext * /*ctx*/) override { }
  virtual void exitInterface_class_type(SystemVerilogParser::Interface_class_typeContext * /*ctx*/) override { }

  virtual void enterInterface_class_declaration(SystemVerilogParser::Interface_class_declarationContext * /*ctx*/) override { }
  virtual void exitInterface_class_declaration(SystemVerilogParser::Interface_class_declarationContext * /*ctx*/) override { }

  virtual void enterInterface_class_item(SystemVerilogParser::Interface_class_itemContext * /*ctx*/) override { }
  virtual void exitInterface_class_item(SystemVerilogParser::Interface_class_itemContext * /*ctx*/) override { }

  virtual void enterInterface_class_method(SystemVerilogParser::Interface_class_methodContext * /*ctx*/) override { }
  virtual void exitInterface_class_method(SystemVerilogParser::Interface_class_methodContext * /*ctx*/) override { }

  virtual void enterPackage_declaration(SystemVerilogParser::Package_declarationContext * /*ctx*/) override { }
  virtual void exitPackage_declaration(SystemVerilogParser::Package_declarationContext * /*ctx*/) override { }

  virtual void enterTimeunits_declaration(SystemVerilogParser::Timeunits_declarationContext * /*ctx*/) override { }
  virtual void exitTimeunits_declaration(SystemVerilogParser::Timeunits_declarationContext * /*ctx*/) override { }

  virtual void enterParameter_port_list(SystemVerilogParser::Parameter_port_listContext * /*ctx*/) override { }
  virtual void exitParameter_port_list(SystemVerilogParser::Parameter_port_listContext * /*ctx*/) override { }

  virtual void enterParameter_port_declaration(SystemVerilogParser::Parameter_port_declarationContext * /*ctx*/) override { }
  virtual void exitParameter_port_declaration(SystemVerilogParser::Parameter_port_declarationContext * /*ctx*/) override { }

  virtual void enterList_of_ports(SystemVerilogParser::List_of_portsContext * /*ctx*/) override { }
  virtual void exitList_of_ports(SystemVerilogParser::List_of_portsContext * /*ctx*/) override { }

  virtual void enterList_of_port_declarations(SystemVerilogParser::List_of_port_declarationsContext * /*ctx*/) override { }
  virtual void exitList_of_port_declarations(SystemVerilogParser::List_of_port_declarationsContext * /*ctx*/) override { }

  virtual void enterPort_declaration(SystemVerilogParser::Port_declarationContext * /*ctx*/) override { }
  virtual void exitPort_declaration(SystemVerilogParser::Port_declarationContext * /*ctx*/) override { }

  virtual void enterPort(SystemVerilogParser::PortContext * /*ctx*/) override { }
  virtual void exitPort(SystemVerilogParser::PortContext * /*ctx*/) override { }

  virtual void enterPort_expression(SystemVerilogParser::Port_expressionContext * /*ctx*/) override { }
  virtual void exitPort_expression(SystemVerilogParser::Port_expressionContext * /*ctx*/) override { }

  virtual void enterPort_reference(SystemVerilogParser::Port_referenceContext * /*ctx*/) override { }
  virtual void exitPort_reference(SystemVerilogParser::Port_referenceContext * /*ctx*/) override { }

  virtual void enterPort_direction(SystemVerilogParser::Port_directionContext * /*ctx*/) override { }
  virtual void exitPort_direction(SystemVerilogParser::Port_directionContext * /*ctx*/) override { }

  virtual void enterNet_port_header(SystemVerilogParser::Net_port_headerContext * /*ctx*/) override { }
  virtual void exitNet_port_header(SystemVerilogParser::Net_port_headerContext * /*ctx*/) override { }

  virtual void enterVariable_port_header(SystemVerilogParser::Variable_port_headerContext * /*ctx*/) override { }
  virtual void exitVariable_port_header(SystemVerilogParser::Variable_port_headerContext * /*ctx*/) override { }

  virtual void enterInterface_port_header(SystemVerilogParser::Interface_port_headerContext * /*ctx*/) override { }
  virtual void exitInterface_port_header(SystemVerilogParser::Interface_port_headerContext * /*ctx*/) override { }

  virtual void enterAnsi_port_declaration(SystemVerilogParser::Ansi_port_declarationContext * /*ctx*/) override { }
  virtual void exitAnsi_port_declaration(SystemVerilogParser::Ansi_port_declarationContext * /*ctx*/) override { }

  virtual void enterElaboration_system_task(SystemVerilogParser::Elaboration_system_taskContext * /*ctx*/) override { }
  virtual void exitElaboration_system_task(SystemVerilogParser::Elaboration_system_taskContext * /*ctx*/) override { }

  virtual void enterFinish_number(SystemVerilogParser::Finish_numberContext * /*ctx*/) override { }
  virtual void exitFinish_number(SystemVerilogParser::Finish_numberContext * /*ctx*/) override { }

  virtual void enterModule_common_item(SystemVerilogParser::Module_common_itemContext * /*ctx*/) override { }
  virtual void exitModule_common_item(SystemVerilogParser::Module_common_itemContext * /*ctx*/) override { }

  virtual void enterModule_item(SystemVerilogParser::Module_itemContext * /*ctx*/) override { }
  virtual void exitModule_item(SystemVerilogParser::Module_itemContext * /*ctx*/) override { }

  virtual void enterModule_or_generate_item(SystemVerilogParser::Module_or_generate_itemContext * /*ctx*/) override { }
  virtual void exitModule_or_generate_item(SystemVerilogParser::Module_or_generate_itemContext * /*ctx*/) override { }

  virtual void enterModule_or_generate_item_declaration(SystemVerilogParser::Module_or_generate_item_declarationContext * /*ctx*/) override { }
  virtual void exitModule_or_generate_item_declaration(SystemVerilogParser::Module_or_generate_item_declarationContext * /*ctx*/) override { }

  virtual void enterNon_port_module_item(SystemVerilogParser::Non_port_module_itemContext * /*ctx*/) override { }
  virtual void exitNon_port_module_item(SystemVerilogParser::Non_port_module_itemContext * /*ctx*/) override { }

  virtual void enterParameter_override(SystemVerilogParser::Parameter_overrideContext * /*ctx*/) override { }
  virtual void exitParameter_override(SystemVerilogParser::Parameter_overrideContext * /*ctx*/) override { }

  virtual void enterBind_directive(SystemVerilogParser::Bind_directiveContext * /*ctx*/) override { }
  virtual void exitBind_directive(SystemVerilogParser::Bind_directiveContext * /*ctx*/) override { }

  virtual void enterBind_target_scope(SystemVerilogParser::Bind_target_scopeContext * /*ctx*/) override { }
  virtual void exitBind_target_scope(SystemVerilogParser::Bind_target_scopeContext * /*ctx*/) override { }

  virtual void enterBind_target_instance(SystemVerilogParser::Bind_target_instanceContext * /*ctx*/) override { }
  virtual void exitBind_target_instance(SystemVerilogParser::Bind_target_instanceContext * /*ctx*/) override { }

  virtual void enterBind_target_instance_list(SystemVerilogParser::Bind_target_instance_listContext * /*ctx*/) override { }
  virtual void exitBind_target_instance_list(SystemVerilogParser::Bind_target_instance_listContext * /*ctx*/) override { }

  virtual void enterBind_instantiation(SystemVerilogParser::Bind_instantiationContext * /*ctx*/) override { }
  virtual void exitBind_instantiation(SystemVerilogParser::Bind_instantiationContext * /*ctx*/) override { }

  virtual void enterConfig_declaration(SystemVerilogParser::Config_declarationContext * /*ctx*/) override { }
  virtual void exitConfig_declaration(SystemVerilogParser::Config_declarationContext * /*ctx*/) override { }

  virtual void enterDesign_statement(SystemVerilogParser::Design_statementContext * /*ctx*/) override { }
  virtual void exitDesign_statement(SystemVerilogParser::Design_statementContext * /*ctx*/) override { }

  virtual void enterConfig_rule_statement(SystemVerilogParser::Config_rule_statementContext * /*ctx*/) override { }
  virtual void exitConfig_rule_statement(SystemVerilogParser::Config_rule_statementContext * /*ctx*/) override { }

  virtual void enterDefault_clause(SystemVerilogParser::Default_clauseContext * /*ctx*/) override { }
  virtual void exitDefault_clause(SystemVerilogParser::Default_clauseContext * /*ctx*/) override { }

  virtual void enterInst_clause(SystemVerilogParser::Inst_clauseContext * /*ctx*/) override { }
  virtual void exitInst_clause(SystemVerilogParser::Inst_clauseContext * /*ctx*/) override { }

  virtual void enterInst_name(SystemVerilogParser::Inst_nameContext * /*ctx*/) override { }
  virtual void exitInst_name(SystemVerilogParser::Inst_nameContext * /*ctx*/) override { }

  virtual void enterCell_clause(SystemVerilogParser::Cell_clauseContext * /*ctx*/) override { }
  virtual void exitCell_clause(SystemVerilogParser::Cell_clauseContext * /*ctx*/) override { }

  virtual void enterLiblist_clause(SystemVerilogParser::Liblist_clauseContext * /*ctx*/) override { }
  virtual void exitLiblist_clause(SystemVerilogParser::Liblist_clauseContext * /*ctx*/) override { }

  virtual void enterUse_clause(SystemVerilogParser::Use_clauseContext * /*ctx*/) override { }
  virtual void exitUse_clause(SystemVerilogParser::Use_clauseContext * /*ctx*/) override { }

  virtual void enterInterface_or_generate_item(SystemVerilogParser::Interface_or_generate_itemContext * /*ctx*/) override { }
  virtual void exitInterface_or_generate_item(SystemVerilogParser::Interface_or_generate_itemContext * /*ctx*/) override { }

  virtual void enterExtern_tf_declaration(SystemVerilogParser::Extern_tf_declarationContext * /*ctx*/) override { }
  virtual void exitExtern_tf_declaration(SystemVerilogParser::Extern_tf_declarationContext * /*ctx*/) override { }

  virtual void enterInterface_item(SystemVerilogParser::Interface_itemContext * /*ctx*/) override { }
  virtual void exitInterface_item(SystemVerilogParser::Interface_itemContext * /*ctx*/) override { }

  virtual void enterNon_port_interface_item(SystemVerilogParser::Non_port_interface_itemContext * /*ctx*/) override { }
  virtual void exitNon_port_interface_item(SystemVerilogParser::Non_port_interface_itemContext * /*ctx*/) override { }

  virtual void enterProgram_item(SystemVerilogParser::Program_itemContext * /*ctx*/) override { }
  virtual void exitProgram_item(SystemVerilogParser::Program_itemContext * /*ctx*/) override { }

  virtual void enterNon_port_program_item(SystemVerilogParser::Non_port_program_itemContext * /*ctx*/) override { }
  virtual void exitNon_port_program_item(SystemVerilogParser::Non_port_program_itemContext * /*ctx*/) override { }

  virtual void enterProgram_generate_item(SystemVerilogParser::Program_generate_itemContext * /*ctx*/) override { }
  virtual void exitProgram_generate_item(SystemVerilogParser::Program_generate_itemContext * /*ctx*/) override { }

  virtual void enterChecker_port_list(SystemVerilogParser::Checker_port_listContext * /*ctx*/) override { }
  virtual void exitChecker_port_list(SystemVerilogParser::Checker_port_listContext * /*ctx*/) override { }

  virtual void enterChecker_port_item(SystemVerilogParser::Checker_port_itemContext * /*ctx*/) override { }
  virtual void exitChecker_port_item(SystemVerilogParser::Checker_port_itemContext * /*ctx*/) override { }

  virtual void enterChecker_port_direction(SystemVerilogParser::Checker_port_directionContext * /*ctx*/) override { }
  virtual void exitChecker_port_direction(SystemVerilogParser::Checker_port_directionContext * /*ctx*/) override { }

  virtual void enterChecker_or_generate_item(SystemVerilogParser::Checker_or_generate_itemContext * /*ctx*/) override { }
  virtual void exitChecker_or_generate_item(SystemVerilogParser::Checker_or_generate_itemContext * /*ctx*/) override { }

  virtual void enterChecker_or_generate_item_declaration(SystemVerilogParser::Checker_or_generate_item_declarationContext * /*ctx*/) override { }
  virtual void exitChecker_or_generate_item_declaration(SystemVerilogParser::Checker_or_generate_item_declarationContext * /*ctx*/) override { }

  virtual void enterChecker_generate_item(SystemVerilogParser::Checker_generate_itemContext * /*ctx*/) override { }
  virtual void exitChecker_generate_item(SystemVerilogParser::Checker_generate_itemContext * /*ctx*/) override { }

  virtual void enterClass_item(SystemVerilogParser::Class_itemContext * /*ctx*/) override { }
  virtual void exitClass_item(SystemVerilogParser::Class_itemContext * /*ctx*/) override { }

  virtual void enterClass_property(SystemVerilogParser::Class_propertyContext * /*ctx*/) override { }
  virtual void exitClass_property(SystemVerilogParser::Class_propertyContext * /*ctx*/) override { }

  virtual void enterClass_method(SystemVerilogParser::Class_methodContext * /*ctx*/) override { }
  virtual void exitClass_method(SystemVerilogParser::Class_methodContext * /*ctx*/) override { }

  virtual void enterClass_constructor_prototype(SystemVerilogParser::Class_constructor_prototypeContext * /*ctx*/) override { }
  virtual void exitClass_constructor_prototype(SystemVerilogParser::Class_constructor_prototypeContext * /*ctx*/) override { }

  virtual void enterClass_constraint(SystemVerilogParser::Class_constraintContext * /*ctx*/) override { }
  virtual void exitClass_constraint(SystemVerilogParser::Class_constraintContext * /*ctx*/) override { }

  virtual void enterClass_item_qualifier(SystemVerilogParser::Class_item_qualifierContext * /*ctx*/) override { }
  virtual void exitClass_item_qualifier(SystemVerilogParser::Class_item_qualifierContext * /*ctx*/) override { }

  virtual void enterProperty_qualifier(SystemVerilogParser::Property_qualifierContext * /*ctx*/) override { }
  virtual void exitProperty_qualifier(SystemVerilogParser::Property_qualifierContext * /*ctx*/) override { }

  virtual void enterRandom_qualifier(SystemVerilogParser::Random_qualifierContext * /*ctx*/) override { }
  virtual void exitRandom_qualifier(SystemVerilogParser::Random_qualifierContext * /*ctx*/) override { }

  virtual void enterMethod_qualifier(SystemVerilogParser::Method_qualifierContext * /*ctx*/) override { }
  virtual void exitMethod_qualifier(SystemVerilogParser::Method_qualifierContext * /*ctx*/) override { }

  virtual void enterMethod_prototype(SystemVerilogParser::Method_prototypeContext * /*ctx*/) override { }
  virtual void exitMethod_prototype(SystemVerilogParser::Method_prototypeContext * /*ctx*/) override { }

  virtual void enterClass_constructor_declaration(SystemVerilogParser::Class_constructor_declarationContext * /*ctx*/) override { }
  virtual void exitClass_constructor_declaration(SystemVerilogParser::Class_constructor_declarationContext * /*ctx*/) override { }

  virtual void enterConstraint_declaration(SystemVerilogParser::Constraint_declarationContext * /*ctx*/) override { }
  virtual void exitConstraint_declaration(SystemVerilogParser::Constraint_declarationContext * /*ctx*/) override { }

  virtual void enterConstraint_block(SystemVerilogParser::Constraint_blockContext * /*ctx*/) override { }
  virtual void exitConstraint_block(SystemVerilogParser::Constraint_blockContext * /*ctx*/) override { }

  virtual void enterConstraint_block_item(SystemVerilogParser::Constraint_block_itemContext * /*ctx*/) override { }
  virtual void exitConstraint_block_item(SystemVerilogParser::Constraint_block_itemContext * /*ctx*/) override { }

  virtual void enterSolve_before_list(SystemVerilogParser::Solve_before_listContext * /*ctx*/) override { }
  virtual void exitSolve_before_list(SystemVerilogParser::Solve_before_listContext * /*ctx*/) override { }

  virtual void enterConstraint_primary(SystemVerilogParser::Constraint_primaryContext * /*ctx*/) override { }
  virtual void exitConstraint_primary(SystemVerilogParser::Constraint_primaryContext * /*ctx*/) override { }

  virtual void enterConstraint_expression(SystemVerilogParser::Constraint_expressionContext * /*ctx*/) override { }
  virtual void exitConstraint_expression(SystemVerilogParser::Constraint_expressionContext * /*ctx*/) override { }

  virtual void enterUniqueness_constraint(SystemVerilogParser::Uniqueness_constraintContext * /*ctx*/) override { }
  virtual void exitUniqueness_constraint(SystemVerilogParser::Uniqueness_constraintContext * /*ctx*/) override { }

  virtual void enterConstraint_set(SystemVerilogParser::Constraint_setContext * /*ctx*/) override { }
  virtual void exitConstraint_set(SystemVerilogParser::Constraint_setContext * /*ctx*/) override { }

  virtual void enterDist_list(SystemVerilogParser::Dist_listContext * /*ctx*/) override { }
  virtual void exitDist_list(SystemVerilogParser::Dist_listContext * /*ctx*/) override { }

  virtual void enterDist_item(SystemVerilogParser::Dist_itemContext * /*ctx*/) override { }
  virtual void exitDist_item(SystemVerilogParser::Dist_itemContext * /*ctx*/) override { }

  virtual void enterDist_weight(SystemVerilogParser::Dist_weightContext * /*ctx*/) override { }
  virtual void exitDist_weight(SystemVerilogParser::Dist_weightContext * /*ctx*/) override { }

  virtual void enterConstraint_prototype(SystemVerilogParser::Constraint_prototypeContext * /*ctx*/) override { }
  virtual void exitConstraint_prototype(SystemVerilogParser::Constraint_prototypeContext * /*ctx*/) override { }

  virtual void enterConstraint_prototype_qualifier(SystemVerilogParser::Constraint_prototype_qualifierContext * /*ctx*/) override { }
  virtual void exitConstraint_prototype_qualifier(SystemVerilogParser::Constraint_prototype_qualifierContext * /*ctx*/) override { }

  virtual void enterExtern_constraint_declaration(SystemVerilogParser::Extern_constraint_declarationContext * /*ctx*/) override { }
  virtual void exitExtern_constraint_declaration(SystemVerilogParser::Extern_constraint_declarationContext * /*ctx*/) override { }

  virtual void enterIdentifier_list(SystemVerilogParser::Identifier_listContext * /*ctx*/) override { }
  virtual void exitIdentifier_list(SystemVerilogParser::Identifier_listContext * /*ctx*/) override { }

  virtual void enterPackage_item(SystemVerilogParser::Package_itemContext * /*ctx*/) override { }
  virtual void exitPackage_item(SystemVerilogParser::Package_itemContext * /*ctx*/) override { }

  virtual void enterPackage_or_generate_item_declaration(SystemVerilogParser::Package_or_generate_item_declarationContext * /*ctx*/) override { }
  virtual void exitPackage_or_generate_item_declaration(SystemVerilogParser::Package_or_generate_item_declarationContext * /*ctx*/) override { }

  virtual void enterAnonymous_program(SystemVerilogParser::Anonymous_programContext * /*ctx*/) override { }
  virtual void exitAnonymous_program(SystemVerilogParser::Anonymous_programContext * /*ctx*/) override { }

  virtual void enterAnonymous_program_item(SystemVerilogParser::Anonymous_program_itemContext * /*ctx*/) override { }
  virtual void exitAnonymous_program_item(SystemVerilogParser::Anonymous_program_itemContext * /*ctx*/) override { }

  virtual void enterLocal_parameter_declaration(SystemVerilogParser::Local_parameter_declarationContext * /*ctx*/) override { }
  virtual void exitLocal_parameter_declaration(SystemVerilogParser::Local_parameter_declarationContext * /*ctx*/) override { }

  virtual void enterParameter_declaration(SystemVerilogParser::Parameter_declarationContext * /*ctx*/) override { }
  virtual void exitParameter_declaration(SystemVerilogParser::Parameter_declarationContext * /*ctx*/) override { }

  virtual void enterSpecparam_declaration(SystemVerilogParser::Specparam_declarationContext * /*ctx*/) override { }
  virtual void exitSpecparam_declaration(SystemVerilogParser::Specparam_declarationContext * /*ctx*/) override { }

  virtual void enterInout_declaration(SystemVerilogParser::Inout_declarationContext * /*ctx*/) override { }
  virtual void exitInout_declaration(SystemVerilogParser::Inout_declarationContext * /*ctx*/) override { }

  virtual void enterInput_declaration(SystemVerilogParser::Input_declarationContext * /*ctx*/) override { }
  virtual void exitInput_declaration(SystemVerilogParser::Input_declarationContext * /*ctx*/) override { }

  virtual void enterOutput_declaration(SystemVerilogParser::Output_declarationContext * /*ctx*/) override { }
  virtual void exitOutput_declaration(SystemVerilogParser::Output_declarationContext * /*ctx*/) override { }

  virtual void enterInterface_port_declaration(SystemVerilogParser::Interface_port_declarationContext * /*ctx*/) override { }
  virtual void exitInterface_port_declaration(SystemVerilogParser::Interface_port_declarationContext * /*ctx*/) override { }

  virtual void enterRef_declaration(SystemVerilogParser::Ref_declarationContext * /*ctx*/) override { }
  virtual void exitRef_declaration(SystemVerilogParser::Ref_declarationContext * /*ctx*/) override { }

  virtual void enterData_declaration(SystemVerilogParser::Data_declarationContext * /*ctx*/) override { }
  virtual void exitData_declaration(SystemVerilogParser::Data_declarationContext * /*ctx*/) override { }

  virtual void enterPackage_import_declaration(SystemVerilogParser::Package_import_declarationContext * /*ctx*/) override { }
  virtual void exitPackage_import_declaration(SystemVerilogParser::Package_import_declarationContext * /*ctx*/) override { }

  virtual void enterPackage_import_item(SystemVerilogParser::Package_import_itemContext * /*ctx*/) override { }
  virtual void exitPackage_import_item(SystemVerilogParser::Package_import_itemContext * /*ctx*/) override { }

  virtual void enterPackage_export_declaration(SystemVerilogParser::Package_export_declarationContext * /*ctx*/) override { }
  virtual void exitPackage_export_declaration(SystemVerilogParser::Package_export_declarationContext * /*ctx*/) override { }

  virtual void enterGenvar_declaration(SystemVerilogParser::Genvar_declarationContext * /*ctx*/) override { }
  virtual void exitGenvar_declaration(SystemVerilogParser::Genvar_declarationContext * /*ctx*/) override { }

  virtual void enterNet_declaration(SystemVerilogParser::Net_declarationContext * /*ctx*/) override { }
  virtual void exitNet_declaration(SystemVerilogParser::Net_declarationContext * /*ctx*/) override { }

  virtual void enterType_declaration(SystemVerilogParser::Type_declarationContext * /*ctx*/) override { }
  virtual void exitType_declaration(SystemVerilogParser::Type_declarationContext * /*ctx*/) override { }

  virtual void enterNet_type_declaration(SystemVerilogParser::Net_type_declarationContext * /*ctx*/) override { }
  virtual void exitNet_type_declaration(SystemVerilogParser::Net_type_declarationContext * /*ctx*/) override { }

  virtual void enterLifetime(SystemVerilogParser::LifetimeContext * /*ctx*/) override { }
  virtual void exitLifetime(SystemVerilogParser::LifetimeContext * /*ctx*/) override { }

  virtual void enterData_type(SystemVerilogParser::Data_typeContext * /*ctx*/) override { }
  virtual void exitData_type(SystemVerilogParser::Data_typeContext * /*ctx*/) override { }

  virtual void enterData_type_or_implicit(SystemVerilogParser::Data_type_or_implicitContext * /*ctx*/) override { }
  virtual void exitData_type_or_implicit(SystemVerilogParser::Data_type_or_implicitContext * /*ctx*/) override { }

  virtual void enterImplicit_data_type(SystemVerilogParser::Implicit_data_typeContext * /*ctx*/) override { }
  virtual void exitImplicit_data_type(SystemVerilogParser::Implicit_data_typeContext * /*ctx*/) override { }

  virtual void enterEnum_base_type(SystemVerilogParser::Enum_base_typeContext * /*ctx*/) override { }
  virtual void exitEnum_base_type(SystemVerilogParser::Enum_base_typeContext * /*ctx*/) override { }

  virtual void enterEnum_name_declaration(SystemVerilogParser::Enum_name_declarationContext * /*ctx*/) override { }
  virtual void exitEnum_name_declaration(SystemVerilogParser::Enum_name_declarationContext * /*ctx*/) override { }

  virtual void enterClass_scope(SystemVerilogParser::Class_scopeContext * /*ctx*/) override { }
  virtual void exitClass_scope(SystemVerilogParser::Class_scopeContext * /*ctx*/) override { }

  virtual void enterClass_type(SystemVerilogParser::Class_typeContext * /*ctx*/) override { }
  virtual void exitClass_type(SystemVerilogParser::Class_typeContext * /*ctx*/) override { }

  virtual void enterInteger_type(SystemVerilogParser::Integer_typeContext * /*ctx*/) override { }
  virtual void exitInteger_type(SystemVerilogParser::Integer_typeContext * /*ctx*/) override { }

  virtual void enterInteger_atom_type(SystemVerilogParser::Integer_atom_typeContext * /*ctx*/) override { }
  virtual void exitInteger_atom_type(SystemVerilogParser::Integer_atom_typeContext * /*ctx*/) override { }

  virtual void enterInteger_vector_type(SystemVerilogParser::Integer_vector_typeContext * /*ctx*/) override { }
  virtual void exitInteger_vector_type(SystemVerilogParser::Integer_vector_typeContext * /*ctx*/) override { }

  virtual void enterNon_integer_type(SystemVerilogParser::Non_integer_typeContext * /*ctx*/) override { }
  virtual void exitNon_integer_type(SystemVerilogParser::Non_integer_typeContext * /*ctx*/) override { }

  virtual void enterNet_type(SystemVerilogParser::Net_typeContext * /*ctx*/) override { }
  virtual void exitNet_type(SystemVerilogParser::Net_typeContext * /*ctx*/) override { }

  virtual void enterNet_port_type(SystemVerilogParser::Net_port_typeContext * /*ctx*/) override { }
  virtual void exitNet_port_type(SystemVerilogParser::Net_port_typeContext * /*ctx*/) override { }

  virtual void enterVariable_port_type(SystemVerilogParser::Variable_port_typeContext * /*ctx*/) override { }
  virtual void exitVariable_port_type(SystemVerilogParser::Variable_port_typeContext * /*ctx*/) override { }

  virtual void enterVar_data_type(SystemVerilogParser::Var_data_typeContext * /*ctx*/) override { }
  virtual void exitVar_data_type(SystemVerilogParser::Var_data_typeContext * /*ctx*/) override { }

  virtual void enterSigning(SystemVerilogParser::SigningContext * /*ctx*/) override { }
  virtual void exitSigning(SystemVerilogParser::SigningContext * /*ctx*/) override { }

  virtual void enterSimple_type(SystemVerilogParser::Simple_typeContext * /*ctx*/) override { }
  virtual void exitSimple_type(SystemVerilogParser::Simple_typeContext * /*ctx*/) override { }

  virtual void enterStruct_union_member(SystemVerilogParser::Struct_union_memberContext * /*ctx*/) override { }
  virtual void exitStruct_union_member(SystemVerilogParser::Struct_union_memberContext * /*ctx*/) override { }

  virtual void enterData_type_or_void(SystemVerilogParser::Data_type_or_voidContext * /*ctx*/) override { }
  virtual void exitData_type_or_void(SystemVerilogParser::Data_type_or_voidContext * /*ctx*/) override { }

  virtual void enterStruct_union(SystemVerilogParser::Struct_unionContext * /*ctx*/) override { }
  virtual void exitStruct_union(SystemVerilogParser::Struct_unionContext * /*ctx*/) override { }

  virtual void enterType_reference(SystemVerilogParser::Type_referenceContext * /*ctx*/) override { }
  virtual void exitType_reference(SystemVerilogParser::Type_referenceContext * /*ctx*/) override { }

  virtual void enterDrive_strength(SystemVerilogParser::Drive_strengthContext * /*ctx*/) override { }
  virtual void exitDrive_strength(SystemVerilogParser::Drive_strengthContext * /*ctx*/) override { }

  virtual void enterStrength0(SystemVerilogParser::Strength0Context * /*ctx*/) override { }
  virtual void exitStrength0(SystemVerilogParser::Strength0Context * /*ctx*/) override { }

  virtual void enterStrength1(SystemVerilogParser::Strength1Context * /*ctx*/) override { }
  virtual void exitStrength1(SystemVerilogParser::Strength1Context * /*ctx*/) override { }

  virtual void enterCharge_strength(SystemVerilogParser::Charge_strengthContext * /*ctx*/) override { }
  virtual void exitCharge_strength(SystemVerilogParser::Charge_strengthContext * /*ctx*/) override { }

  virtual void enterDelay3(SystemVerilogParser::Delay3Context * /*ctx*/) override { }
  virtual void exitDelay3(SystemVerilogParser::Delay3Context * /*ctx*/) override { }

  virtual void enterDelay2(SystemVerilogParser::Delay2Context * /*ctx*/) override { }
  virtual void exitDelay2(SystemVerilogParser::Delay2Context * /*ctx*/) override { }

  virtual void enterDelay_value(SystemVerilogParser::Delay_valueContext * /*ctx*/) override { }
  virtual void exitDelay_value(SystemVerilogParser::Delay_valueContext * /*ctx*/) override { }

  virtual void enterList_of_defparam_assignments(SystemVerilogParser::List_of_defparam_assignmentsContext * /*ctx*/) override { }
  virtual void exitList_of_defparam_assignments(SystemVerilogParser::List_of_defparam_assignmentsContext * /*ctx*/) override { }

  virtual void enterList_of_genvar_identifiers(SystemVerilogParser::List_of_genvar_identifiersContext * /*ctx*/) override { }
  virtual void exitList_of_genvar_identifiers(SystemVerilogParser::List_of_genvar_identifiersContext * /*ctx*/) override { }

  virtual void enterList_of_interface_identifiers(SystemVerilogParser::List_of_interface_identifiersContext * /*ctx*/) override { }
  virtual void exitList_of_interface_identifiers(SystemVerilogParser::List_of_interface_identifiersContext * /*ctx*/) override { }

  virtual void enterList_of_net_decl_assignments(SystemVerilogParser::List_of_net_decl_assignmentsContext * /*ctx*/) override { }
  virtual void exitList_of_net_decl_assignments(SystemVerilogParser::List_of_net_decl_assignmentsContext * /*ctx*/) override { }

  virtual void enterList_of_param_assignments(SystemVerilogParser::List_of_param_assignmentsContext * /*ctx*/) override { }
  virtual void exitList_of_param_assignments(SystemVerilogParser::List_of_param_assignmentsContext * /*ctx*/) override { }

  virtual void enterList_of_port_identifiers(SystemVerilogParser::List_of_port_identifiersContext * /*ctx*/) override { }
  virtual void exitList_of_port_identifiers(SystemVerilogParser::List_of_port_identifiersContext * /*ctx*/) override { }

  virtual void enterList_of_udp_port_identifiers(SystemVerilogParser::List_of_udp_port_identifiersContext * /*ctx*/) override { }
  virtual void exitList_of_udp_port_identifiers(SystemVerilogParser::List_of_udp_port_identifiersContext * /*ctx*/) override { }

  virtual void enterList_of_specparam_assignments(SystemVerilogParser::List_of_specparam_assignmentsContext * /*ctx*/) override { }
  virtual void exitList_of_specparam_assignments(SystemVerilogParser::List_of_specparam_assignmentsContext * /*ctx*/) override { }

  virtual void enterList_of_tf_variable_identifiers(SystemVerilogParser::List_of_tf_variable_identifiersContext * /*ctx*/) override { }
  virtual void exitList_of_tf_variable_identifiers(SystemVerilogParser::List_of_tf_variable_identifiersContext * /*ctx*/) override { }

  virtual void enterList_of_type_assignments(SystemVerilogParser::List_of_type_assignmentsContext * /*ctx*/) override { }
  virtual void exitList_of_type_assignments(SystemVerilogParser::List_of_type_assignmentsContext * /*ctx*/) override { }

  virtual void enterList_of_variable_decl_assignments(SystemVerilogParser::List_of_variable_decl_assignmentsContext * /*ctx*/) override { }
  virtual void exitList_of_variable_decl_assignments(SystemVerilogParser::List_of_variable_decl_assignmentsContext * /*ctx*/) override { }

  virtual void enterList_of_variable_identifiers(SystemVerilogParser::List_of_variable_identifiersContext * /*ctx*/) override { }
  virtual void exitList_of_variable_identifiers(SystemVerilogParser::List_of_variable_identifiersContext * /*ctx*/) override { }

  virtual void enterList_of_variable_port_identifiers(SystemVerilogParser::List_of_variable_port_identifiersContext * /*ctx*/) override { }
  virtual void exitList_of_variable_port_identifiers(SystemVerilogParser::List_of_variable_port_identifiersContext * /*ctx*/) override { }

  virtual void enterDefparam_assignment(SystemVerilogParser::Defparam_assignmentContext * /*ctx*/) override { }
  virtual void exitDefparam_assignment(SystemVerilogParser::Defparam_assignmentContext * /*ctx*/) override { }

  virtual void enterNet_decl_assignment(SystemVerilogParser::Net_decl_assignmentContext * /*ctx*/) override { }
  virtual void exitNet_decl_assignment(SystemVerilogParser::Net_decl_assignmentContext * /*ctx*/) override { }

  virtual void enterParam_assignment(SystemVerilogParser::Param_assignmentContext * /*ctx*/) override { }
  virtual void exitParam_assignment(SystemVerilogParser::Param_assignmentContext * /*ctx*/) override { }

  virtual void enterSpecparam_assignment(SystemVerilogParser::Specparam_assignmentContext * /*ctx*/) override { }
  virtual void exitSpecparam_assignment(SystemVerilogParser::Specparam_assignmentContext * /*ctx*/) override { }

  virtual void enterType_assignment(SystemVerilogParser::Type_assignmentContext * /*ctx*/) override { }
  virtual void exitType_assignment(SystemVerilogParser::Type_assignmentContext * /*ctx*/) override { }

  virtual void enterPulse_control_specparam(SystemVerilogParser::Pulse_control_specparamContext * /*ctx*/) override { }
  virtual void exitPulse_control_specparam(SystemVerilogParser::Pulse_control_specparamContext * /*ctx*/) override { }

  virtual void enterError_limit_value(SystemVerilogParser::Error_limit_valueContext * /*ctx*/) override { }
  virtual void exitError_limit_value(SystemVerilogParser::Error_limit_valueContext * /*ctx*/) override { }

  virtual void enterReject_limit_value(SystemVerilogParser::Reject_limit_valueContext * /*ctx*/) override { }
  virtual void exitReject_limit_value(SystemVerilogParser::Reject_limit_valueContext * /*ctx*/) override { }

  virtual void enterLimit_value(SystemVerilogParser::Limit_valueContext * /*ctx*/) override { }
  virtual void exitLimit_value(SystemVerilogParser::Limit_valueContext * /*ctx*/) override { }

  virtual void enterVariable_decl_assignment(SystemVerilogParser::Variable_decl_assignmentContext * /*ctx*/) override { }
  virtual void exitVariable_decl_assignment(SystemVerilogParser::Variable_decl_assignmentContext * /*ctx*/) override { }

  virtual void enterClass_new(SystemVerilogParser::Class_newContext * /*ctx*/) override { }
  virtual void exitClass_new(SystemVerilogParser::Class_newContext * /*ctx*/) override { }

  virtual void enterDynamic_array_new(SystemVerilogParser::Dynamic_array_newContext * /*ctx*/) override { }
  virtual void exitDynamic_array_new(SystemVerilogParser::Dynamic_array_newContext * /*ctx*/) override { }

  virtual void enterUnpacked_dimension(SystemVerilogParser::Unpacked_dimensionContext * /*ctx*/) override { }
  virtual void exitUnpacked_dimension(SystemVerilogParser::Unpacked_dimensionContext * /*ctx*/) override { }

  virtual void enterPacked_dimension(SystemVerilogParser::Packed_dimensionContext * /*ctx*/) override { }
  virtual void exitPacked_dimension(SystemVerilogParser::Packed_dimensionContext * /*ctx*/) override { }

  virtual void enterAssociative_dimension(SystemVerilogParser::Associative_dimensionContext * /*ctx*/) override { }
  virtual void exitAssociative_dimension(SystemVerilogParser::Associative_dimensionContext * /*ctx*/) override { }

  virtual void enterVariable_dimension(SystemVerilogParser::Variable_dimensionContext * /*ctx*/) override { }
  virtual void exitVariable_dimension(SystemVerilogParser::Variable_dimensionContext * /*ctx*/) override { }

  virtual void enterQueue_dimension(SystemVerilogParser::Queue_dimensionContext * /*ctx*/) override { }
  virtual void exitQueue_dimension(SystemVerilogParser::Queue_dimensionContext * /*ctx*/) override { }

  virtual void enterUnsized_dimension(SystemVerilogParser::Unsized_dimensionContext * /*ctx*/) override { }
  virtual void exitUnsized_dimension(SystemVerilogParser::Unsized_dimensionContext * /*ctx*/) override { }

  virtual void enterFunction_data_type_or_implicit(SystemVerilogParser::Function_data_type_or_implicitContext * /*ctx*/) override { }
  virtual void exitFunction_data_type_or_implicit(SystemVerilogParser::Function_data_type_or_implicitContext * /*ctx*/) override { }

  virtual void enterFunction_declaration(SystemVerilogParser::Function_declarationContext * /*ctx*/) override { }
  virtual void exitFunction_declaration(SystemVerilogParser::Function_declarationContext * /*ctx*/) override { }

  virtual void enterFunction_body_declaration(SystemVerilogParser::Function_body_declarationContext * /*ctx*/) override { }
  virtual void exitFunction_body_declaration(SystemVerilogParser::Function_body_declarationContext * /*ctx*/) override { }

  virtual void enterFunction_prototype(SystemVerilogParser::Function_prototypeContext * /*ctx*/) override { }
  virtual void exitFunction_prototype(SystemVerilogParser::Function_prototypeContext * /*ctx*/) override { }

  virtual void enterDpi_import_export(SystemVerilogParser::Dpi_import_exportContext * /*ctx*/) override { }
  virtual void exitDpi_import_export(SystemVerilogParser::Dpi_import_exportContext * /*ctx*/) override { }

  virtual void enterDpi_spec_string(SystemVerilogParser::Dpi_spec_stringContext * /*ctx*/) override { }
  virtual void exitDpi_spec_string(SystemVerilogParser::Dpi_spec_stringContext * /*ctx*/) override { }

  virtual void enterDpi_function_import_property(SystemVerilogParser::Dpi_function_import_propertyContext * /*ctx*/) override { }
  virtual void exitDpi_function_import_property(SystemVerilogParser::Dpi_function_import_propertyContext * /*ctx*/) override { }

  virtual void enterDpi_task_import_property(SystemVerilogParser::Dpi_task_import_propertyContext * /*ctx*/) override { }
  virtual void exitDpi_task_import_property(SystemVerilogParser::Dpi_task_import_propertyContext * /*ctx*/) override { }

  virtual void enterDpi_function_proto(SystemVerilogParser::Dpi_function_protoContext * /*ctx*/) override { }
  virtual void exitDpi_function_proto(SystemVerilogParser::Dpi_function_protoContext * /*ctx*/) override { }

  virtual void enterDpi_task_proto(SystemVerilogParser::Dpi_task_protoContext * /*ctx*/) override { }
  virtual void exitDpi_task_proto(SystemVerilogParser::Dpi_task_protoContext * /*ctx*/) override { }

  virtual void enterTask_declaration(SystemVerilogParser::Task_declarationContext * /*ctx*/) override { }
  virtual void exitTask_declaration(SystemVerilogParser::Task_declarationContext * /*ctx*/) override { }

  virtual void enterTask_body_declaration(SystemVerilogParser::Task_body_declarationContext * /*ctx*/) override { }
  virtual void exitTask_body_declaration(SystemVerilogParser::Task_body_declarationContext * /*ctx*/) override { }

  virtual void enterTf_item_declaration(SystemVerilogParser::Tf_item_declarationContext * /*ctx*/) override { }
  virtual void exitTf_item_declaration(SystemVerilogParser::Tf_item_declarationContext * /*ctx*/) override { }

  virtual void enterTf_port_list(SystemVerilogParser::Tf_port_listContext * /*ctx*/) override { }
  virtual void exitTf_port_list(SystemVerilogParser::Tf_port_listContext * /*ctx*/) override { }

  virtual void enterTf_port_item(SystemVerilogParser::Tf_port_itemContext * /*ctx*/) override { }
  virtual void exitTf_port_item(SystemVerilogParser::Tf_port_itemContext * /*ctx*/) override { }

  virtual void enterTf_port_direction(SystemVerilogParser::Tf_port_directionContext * /*ctx*/) override { }
  virtual void exitTf_port_direction(SystemVerilogParser::Tf_port_directionContext * /*ctx*/) override { }

  virtual void enterTf_port_declaration(SystemVerilogParser::Tf_port_declarationContext * /*ctx*/) override { }
  virtual void exitTf_port_declaration(SystemVerilogParser::Tf_port_declarationContext * /*ctx*/) override { }

  virtual void enterTask_prototype(SystemVerilogParser::Task_prototypeContext * /*ctx*/) override { }
  virtual void exitTask_prototype(SystemVerilogParser::Task_prototypeContext * /*ctx*/) override { }

  virtual void enterBlock_item_declaration(SystemVerilogParser::Block_item_declarationContext * /*ctx*/) override { }
  virtual void exitBlock_item_declaration(SystemVerilogParser::Block_item_declarationContext * /*ctx*/) override { }

  virtual void enterModport_declaration(SystemVerilogParser::Modport_declarationContext * /*ctx*/) override { }
  virtual void exitModport_declaration(SystemVerilogParser::Modport_declarationContext * /*ctx*/) override { }

  virtual void enterModport_item(SystemVerilogParser::Modport_itemContext * /*ctx*/) override { }
  virtual void exitModport_item(SystemVerilogParser::Modport_itemContext * /*ctx*/) override { }

  virtual void enterModport_ports_declaration(SystemVerilogParser::Modport_ports_declarationContext * /*ctx*/) override { }
  virtual void exitModport_ports_declaration(SystemVerilogParser::Modport_ports_declarationContext * /*ctx*/) override { }

  virtual void enterModport_clocking_declaration(SystemVerilogParser::Modport_clocking_declarationContext * /*ctx*/) override { }
  virtual void exitModport_clocking_declaration(SystemVerilogParser::Modport_clocking_declarationContext * /*ctx*/) override { }

  virtual void enterModport_simple_ports_declaration(SystemVerilogParser::Modport_simple_ports_declarationContext * /*ctx*/) override { }
  virtual void exitModport_simple_ports_declaration(SystemVerilogParser::Modport_simple_ports_declarationContext * /*ctx*/) override { }

  virtual void enterModport_simple_port(SystemVerilogParser::Modport_simple_portContext * /*ctx*/) override { }
  virtual void exitModport_simple_port(SystemVerilogParser::Modport_simple_portContext * /*ctx*/) override { }

  virtual void enterModport_tf_ports_declaration(SystemVerilogParser::Modport_tf_ports_declarationContext * /*ctx*/) override { }
  virtual void exitModport_tf_ports_declaration(SystemVerilogParser::Modport_tf_ports_declarationContext * /*ctx*/) override { }

  virtual void enterModport_tf_port(SystemVerilogParser::Modport_tf_portContext * /*ctx*/) override { }
  virtual void exitModport_tf_port(SystemVerilogParser::Modport_tf_portContext * /*ctx*/) override { }

  virtual void enterImport_export(SystemVerilogParser::Import_exportContext * /*ctx*/) override { }
  virtual void exitImport_export(SystemVerilogParser::Import_exportContext * /*ctx*/) override { }

  virtual void enterConcurrent_assertion_item(SystemVerilogParser::Concurrent_assertion_itemContext * /*ctx*/) override { }
  virtual void exitConcurrent_assertion_item(SystemVerilogParser::Concurrent_assertion_itemContext * /*ctx*/) override { }

  virtual void enterConcurrent_assertion_statement(SystemVerilogParser::Concurrent_assertion_statementContext * /*ctx*/) override { }
  virtual void exitConcurrent_assertion_statement(SystemVerilogParser::Concurrent_assertion_statementContext * /*ctx*/) override { }

  virtual void enterAssert_property_statement(SystemVerilogParser::Assert_property_statementContext * /*ctx*/) override { }
  virtual void exitAssert_property_statement(SystemVerilogParser::Assert_property_statementContext * /*ctx*/) override { }

  virtual void enterAssume_property_statement(SystemVerilogParser::Assume_property_statementContext * /*ctx*/) override { }
  virtual void exitAssume_property_statement(SystemVerilogParser::Assume_property_statementContext * /*ctx*/) override { }

  virtual void enterCover_property_statement(SystemVerilogParser::Cover_property_statementContext * /*ctx*/) override { }
  virtual void exitCover_property_statement(SystemVerilogParser::Cover_property_statementContext * /*ctx*/) override { }

  virtual void enterExpect_property_statement(SystemVerilogParser::Expect_property_statementContext * /*ctx*/) override { }
  virtual void exitExpect_property_statement(SystemVerilogParser::Expect_property_statementContext * /*ctx*/) override { }

  virtual void enterCover_sequence_statement(SystemVerilogParser::Cover_sequence_statementContext * /*ctx*/) override { }
  virtual void exitCover_sequence_statement(SystemVerilogParser::Cover_sequence_statementContext * /*ctx*/) override { }

  virtual void enterRestrict_property_statement(SystemVerilogParser::Restrict_property_statementContext * /*ctx*/) override { }
  virtual void exitRestrict_property_statement(SystemVerilogParser::Restrict_property_statementContext * /*ctx*/) override { }

  virtual void enterProperty_instance(SystemVerilogParser::Property_instanceContext * /*ctx*/) override { }
  virtual void exitProperty_instance(SystemVerilogParser::Property_instanceContext * /*ctx*/) override { }

  virtual void enterProperty_list_of_arguments(SystemVerilogParser::Property_list_of_argumentsContext * /*ctx*/) override { }
  virtual void exitProperty_list_of_arguments(SystemVerilogParser::Property_list_of_argumentsContext * /*ctx*/) override { }

  virtual void enterProperty_actual_arg(SystemVerilogParser::Property_actual_argContext * /*ctx*/) override { }
  virtual void exitProperty_actual_arg(SystemVerilogParser::Property_actual_argContext * /*ctx*/) override { }

  virtual void enterAssertion_item_declaration(SystemVerilogParser::Assertion_item_declarationContext * /*ctx*/) override { }
  virtual void exitAssertion_item_declaration(SystemVerilogParser::Assertion_item_declarationContext * /*ctx*/) override { }

  virtual void enterProperty_declaration(SystemVerilogParser::Property_declarationContext * /*ctx*/) override { }
  virtual void exitProperty_declaration(SystemVerilogParser::Property_declarationContext * /*ctx*/) override { }

  virtual void enterProperty_port_list(SystemVerilogParser::Property_port_listContext * /*ctx*/) override { }
  virtual void exitProperty_port_list(SystemVerilogParser::Property_port_listContext * /*ctx*/) override { }

  virtual void enterProperty_port_item(SystemVerilogParser::Property_port_itemContext * /*ctx*/) override { }
  virtual void exitProperty_port_item(SystemVerilogParser::Property_port_itemContext * /*ctx*/) override { }

  virtual void enterProperty_formal_type(SystemVerilogParser::Property_formal_typeContext * /*ctx*/) override { }
  virtual void exitProperty_formal_type(SystemVerilogParser::Property_formal_typeContext * /*ctx*/) override { }

  virtual void enterProperty_spec(SystemVerilogParser::Property_specContext * /*ctx*/) override { }
  virtual void exitProperty_spec(SystemVerilogParser::Property_specContext * /*ctx*/) override { }

  virtual void enterProperty_expr(SystemVerilogParser::Property_exprContext * /*ctx*/) override { }
  virtual void exitProperty_expr(SystemVerilogParser::Property_exprContext * /*ctx*/) override { }

  virtual void enterProperty_case_item(SystemVerilogParser::Property_case_itemContext * /*ctx*/) override { }
  virtual void exitProperty_case_item(SystemVerilogParser::Property_case_itemContext * /*ctx*/) override { }

  virtual void enterSequence_declaration(SystemVerilogParser::Sequence_declarationContext * /*ctx*/) override { }
  virtual void exitSequence_declaration(SystemVerilogParser::Sequence_declarationContext * /*ctx*/) override { }

  virtual void enterSequence_port_list(SystemVerilogParser::Sequence_port_listContext * /*ctx*/) override { }
  virtual void exitSequence_port_list(SystemVerilogParser::Sequence_port_listContext * /*ctx*/) override { }

  virtual void enterSequence_port_item(SystemVerilogParser::Sequence_port_itemContext * /*ctx*/) override { }
  virtual void exitSequence_port_item(SystemVerilogParser::Sequence_port_itemContext * /*ctx*/) override { }

  virtual void enterSequence_lvar_port_direction(SystemVerilogParser::Sequence_lvar_port_directionContext * /*ctx*/) override { }
  virtual void exitSequence_lvar_port_direction(SystemVerilogParser::Sequence_lvar_port_directionContext * /*ctx*/) override { }

  virtual void enterSequence_formal_type(SystemVerilogParser::Sequence_formal_typeContext * /*ctx*/) override { }
  virtual void exitSequence_formal_type(SystemVerilogParser::Sequence_formal_typeContext * /*ctx*/) override { }

  virtual void enterSequence_expr(SystemVerilogParser::Sequence_exprContext * /*ctx*/) override { }
  virtual void exitSequence_expr(SystemVerilogParser::Sequence_exprContext * /*ctx*/) override { }

  virtual void enterCycle_delay_range(SystemVerilogParser::Cycle_delay_rangeContext * /*ctx*/) override { }
  virtual void exitCycle_delay_range(SystemVerilogParser::Cycle_delay_rangeContext * /*ctx*/) override { }

  virtual void enterSequence_method_call(SystemVerilogParser::Sequence_method_callContext * /*ctx*/) override { }
  virtual void exitSequence_method_call(SystemVerilogParser::Sequence_method_callContext * /*ctx*/) override { }

  virtual void enterSequence_match_item(SystemVerilogParser::Sequence_match_itemContext * /*ctx*/) override { }
  virtual void exitSequence_match_item(SystemVerilogParser::Sequence_match_itemContext * /*ctx*/) override { }

  virtual void enterSequence_instance(SystemVerilogParser::Sequence_instanceContext * /*ctx*/) override { }
  virtual void exitSequence_instance(SystemVerilogParser::Sequence_instanceContext * /*ctx*/) override { }

  virtual void enterSequence_list_of_arguments(SystemVerilogParser::Sequence_list_of_argumentsContext * /*ctx*/) override { }
  virtual void exitSequence_list_of_arguments(SystemVerilogParser::Sequence_list_of_argumentsContext * /*ctx*/) override { }

  virtual void enterSequence_actual_arg(SystemVerilogParser::Sequence_actual_argContext * /*ctx*/) override { }
  virtual void exitSequence_actual_arg(SystemVerilogParser::Sequence_actual_argContext * /*ctx*/) override { }

  virtual void enterBoolean_abbrev(SystemVerilogParser::Boolean_abbrevContext * /*ctx*/) override { }
  virtual void exitBoolean_abbrev(SystemVerilogParser::Boolean_abbrevContext * /*ctx*/) override { }

  virtual void enterSequence_abbrev(SystemVerilogParser::Sequence_abbrevContext * /*ctx*/) override { }
  virtual void exitSequence_abbrev(SystemVerilogParser::Sequence_abbrevContext * /*ctx*/) override { }

  virtual void enterConsecutive_repetition(SystemVerilogParser::Consecutive_repetitionContext * /*ctx*/) override { }
  virtual void exitConsecutive_repetition(SystemVerilogParser::Consecutive_repetitionContext * /*ctx*/) override { }

  virtual void enterNon_consecutive_repetition(SystemVerilogParser::Non_consecutive_repetitionContext * /*ctx*/) override { }
  virtual void exitNon_consecutive_repetition(SystemVerilogParser::Non_consecutive_repetitionContext * /*ctx*/) override { }

  virtual void enterGoto_repetition(SystemVerilogParser::Goto_repetitionContext * /*ctx*/) override { }
  virtual void exitGoto_repetition(SystemVerilogParser::Goto_repetitionContext * /*ctx*/) override { }

  virtual void enterConst_or_range_expression(SystemVerilogParser::Const_or_range_expressionContext * /*ctx*/) override { }
  virtual void exitConst_or_range_expression(SystemVerilogParser::Const_or_range_expressionContext * /*ctx*/) override { }

  virtual void enterCycle_delay_const_range_expression(SystemVerilogParser::Cycle_delay_const_range_expressionContext * /*ctx*/) override { }
  virtual void exitCycle_delay_const_range_expression(SystemVerilogParser::Cycle_delay_const_range_expressionContext * /*ctx*/) override { }

  virtual void enterExpression_or_dist(SystemVerilogParser::Expression_or_distContext * /*ctx*/) override { }
  virtual void exitExpression_or_dist(SystemVerilogParser::Expression_or_distContext * /*ctx*/) override { }

  virtual void enterAssertion_variable_declaration(SystemVerilogParser::Assertion_variable_declarationContext * /*ctx*/) override { }
  virtual void exitAssertion_variable_declaration(SystemVerilogParser::Assertion_variable_declarationContext * /*ctx*/) override { }

  virtual void enterCovergroup_declaration(SystemVerilogParser::Covergroup_declarationContext * /*ctx*/) override { }
  virtual void exitCovergroup_declaration(SystemVerilogParser::Covergroup_declarationContext * /*ctx*/) override { }

  virtual void enterCoverage_spec_or_option(SystemVerilogParser::Coverage_spec_or_optionContext * /*ctx*/) override { }
  virtual void exitCoverage_spec_or_option(SystemVerilogParser::Coverage_spec_or_optionContext * /*ctx*/) override { }

  virtual void enterCoverage_option(SystemVerilogParser::Coverage_optionContext * /*ctx*/) override { }
  virtual void exitCoverage_option(SystemVerilogParser::Coverage_optionContext * /*ctx*/) override { }

  virtual void enterCoverage_spec(SystemVerilogParser::Coverage_specContext * /*ctx*/) override { }
  virtual void exitCoverage_spec(SystemVerilogParser::Coverage_specContext * /*ctx*/) override { }

  virtual void enterCoverage_event(SystemVerilogParser::Coverage_eventContext * /*ctx*/) override { }
  virtual void exitCoverage_event(SystemVerilogParser::Coverage_eventContext * /*ctx*/) override { }

  virtual void enterBlock_event_expression(SystemVerilogParser::Block_event_expressionContext * /*ctx*/) override { }
  virtual void exitBlock_event_expression(SystemVerilogParser::Block_event_expressionContext * /*ctx*/) override { }

  virtual void enterHierarchical_btf_identifier(SystemVerilogParser::Hierarchical_btf_identifierContext * /*ctx*/) override { }
  virtual void exitHierarchical_btf_identifier(SystemVerilogParser::Hierarchical_btf_identifierContext * /*ctx*/) override { }

  virtual void enterCover_point(SystemVerilogParser::Cover_pointContext * /*ctx*/) override { }
  virtual void exitCover_point(SystemVerilogParser::Cover_pointContext * /*ctx*/) override { }

  virtual void enterBins_or_empty(SystemVerilogParser::Bins_or_emptyContext * /*ctx*/) override { }
  virtual void exitBins_or_empty(SystemVerilogParser::Bins_or_emptyContext * /*ctx*/) override { }

  virtual void enterBins_or_options(SystemVerilogParser::Bins_or_optionsContext * /*ctx*/) override { }
  virtual void exitBins_or_options(SystemVerilogParser::Bins_or_optionsContext * /*ctx*/) override { }

  virtual void enterBins_keyword(SystemVerilogParser::Bins_keywordContext * /*ctx*/) override { }
  virtual void exitBins_keyword(SystemVerilogParser::Bins_keywordContext * /*ctx*/) override { }

  virtual void enterTrans_list(SystemVerilogParser::Trans_listContext * /*ctx*/) override { }
  virtual void exitTrans_list(SystemVerilogParser::Trans_listContext * /*ctx*/) override { }

  virtual void enterTrans_set(SystemVerilogParser::Trans_setContext * /*ctx*/) override { }
  virtual void exitTrans_set(SystemVerilogParser::Trans_setContext * /*ctx*/) override { }

  virtual void enterTrans_range_list(SystemVerilogParser::Trans_range_listContext * /*ctx*/) override { }
  virtual void exitTrans_range_list(SystemVerilogParser::Trans_range_listContext * /*ctx*/) override { }

  virtual void enterTrans_item(SystemVerilogParser::Trans_itemContext * /*ctx*/) override { }
  virtual void exitTrans_item(SystemVerilogParser::Trans_itemContext * /*ctx*/) override { }

  virtual void enterRepeat_range(SystemVerilogParser::Repeat_rangeContext * /*ctx*/) override { }
  virtual void exitRepeat_range(SystemVerilogParser::Repeat_rangeContext * /*ctx*/) override { }

  virtual void enterCover_cross(SystemVerilogParser::Cover_crossContext * /*ctx*/) override { }
  virtual void exitCover_cross(SystemVerilogParser::Cover_crossContext * /*ctx*/) override { }

  virtual void enterList_of_cross_items(SystemVerilogParser::List_of_cross_itemsContext * /*ctx*/) override { }
  virtual void exitList_of_cross_items(SystemVerilogParser::List_of_cross_itemsContext * /*ctx*/) override { }

  virtual void enterCross_item(SystemVerilogParser::Cross_itemContext * /*ctx*/) override { }
  virtual void exitCross_item(SystemVerilogParser::Cross_itemContext * /*ctx*/) override { }

  virtual void enterCross_body(SystemVerilogParser::Cross_bodyContext * /*ctx*/) override { }
  virtual void exitCross_body(SystemVerilogParser::Cross_bodyContext * /*ctx*/) override { }

  virtual void enterCross_body_item(SystemVerilogParser::Cross_body_itemContext * /*ctx*/) override { }
  virtual void exitCross_body_item(SystemVerilogParser::Cross_body_itemContext * /*ctx*/) override { }

  virtual void enterBins_selection_or_option(SystemVerilogParser::Bins_selection_or_optionContext * /*ctx*/) override { }
  virtual void exitBins_selection_or_option(SystemVerilogParser::Bins_selection_or_optionContext * /*ctx*/) override { }

  virtual void enterBins_selection(SystemVerilogParser::Bins_selectionContext * /*ctx*/) override { }
  virtual void exitBins_selection(SystemVerilogParser::Bins_selectionContext * /*ctx*/) override { }

  virtual void enterSelect_expression(SystemVerilogParser::Select_expressionContext * /*ctx*/) override { }
  virtual void exitSelect_expression(SystemVerilogParser::Select_expressionContext * /*ctx*/) override { }

  virtual void enterSelect_condition(SystemVerilogParser::Select_conditionContext * /*ctx*/) override { }
  virtual void exitSelect_condition(SystemVerilogParser::Select_conditionContext * /*ctx*/) override { }

  virtual void enterBins_expression(SystemVerilogParser::Bins_expressionContext * /*ctx*/) override { }
  virtual void exitBins_expression(SystemVerilogParser::Bins_expressionContext * /*ctx*/) override { }

  virtual void enterCovergroup_range_list(SystemVerilogParser::Covergroup_range_listContext * /*ctx*/) override { }
  virtual void exitCovergroup_range_list(SystemVerilogParser::Covergroup_range_listContext * /*ctx*/) override { }

  virtual void enterCovergroup_value_range(SystemVerilogParser::Covergroup_value_rangeContext * /*ctx*/) override { }
  virtual void exitCovergroup_value_range(SystemVerilogParser::Covergroup_value_rangeContext * /*ctx*/) override { }

  virtual void enterWith_covergroup_expression(SystemVerilogParser::With_covergroup_expressionContext * /*ctx*/) override { }
  virtual void exitWith_covergroup_expression(SystemVerilogParser::With_covergroup_expressionContext * /*ctx*/) override { }

  virtual void enterSet_covergroup_expression(SystemVerilogParser::Set_covergroup_expressionContext * /*ctx*/) override { }
  virtual void exitSet_covergroup_expression(SystemVerilogParser::Set_covergroup_expressionContext * /*ctx*/) override { }

  virtual void enterInteger_covergroup_expression(SystemVerilogParser::Integer_covergroup_expressionContext * /*ctx*/) override { }
  virtual void exitInteger_covergroup_expression(SystemVerilogParser::Integer_covergroup_expressionContext * /*ctx*/) override { }

  virtual void enterCross_set_expression(SystemVerilogParser::Cross_set_expressionContext * /*ctx*/) override { }
  virtual void exitCross_set_expression(SystemVerilogParser::Cross_set_expressionContext * /*ctx*/) override { }

  virtual void enterCovergroup_expression(SystemVerilogParser::Covergroup_expressionContext * /*ctx*/) override { }
  virtual void exitCovergroup_expression(SystemVerilogParser::Covergroup_expressionContext * /*ctx*/) override { }

  virtual void enterLet_declaration(SystemVerilogParser::Let_declarationContext * /*ctx*/) override { }
  virtual void exitLet_declaration(SystemVerilogParser::Let_declarationContext * /*ctx*/) override { }

  virtual void enterLet_identifier(SystemVerilogParser::Let_identifierContext * /*ctx*/) override { }
  virtual void exitLet_identifier(SystemVerilogParser::Let_identifierContext * /*ctx*/) override { }

  virtual void enterLet_port_list(SystemVerilogParser::Let_port_listContext * /*ctx*/) override { }
  virtual void exitLet_port_list(SystemVerilogParser::Let_port_listContext * /*ctx*/) override { }

  virtual void enterLet_port_item(SystemVerilogParser::Let_port_itemContext * /*ctx*/) override { }
  virtual void exitLet_port_item(SystemVerilogParser::Let_port_itemContext * /*ctx*/) override { }

  virtual void enterLet_formal_type(SystemVerilogParser::Let_formal_typeContext * /*ctx*/) override { }
  virtual void exitLet_formal_type(SystemVerilogParser::Let_formal_typeContext * /*ctx*/) override { }

  virtual void enterLet_expression(SystemVerilogParser::Let_expressionContext * /*ctx*/) override { }
  virtual void exitLet_expression(SystemVerilogParser::Let_expressionContext * /*ctx*/) override { }

  virtual void enterLet_list_of_arguments(SystemVerilogParser::Let_list_of_argumentsContext * /*ctx*/) override { }
  virtual void exitLet_list_of_arguments(SystemVerilogParser::Let_list_of_argumentsContext * /*ctx*/) override { }

  virtual void enterLet_actual_arg(SystemVerilogParser::Let_actual_argContext * /*ctx*/) override { }
  virtual void exitLet_actual_arg(SystemVerilogParser::Let_actual_argContext * /*ctx*/) override { }

  virtual void enterGate_instantiation(SystemVerilogParser::Gate_instantiationContext * /*ctx*/) override { }
  virtual void exitGate_instantiation(SystemVerilogParser::Gate_instantiationContext * /*ctx*/) override { }

  virtual void enterCmos_switch_instance(SystemVerilogParser::Cmos_switch_instanceContext * /*ctx*/) override { }
  virtual void exitCmos_switch_instance(SystemVerilogParser::Cmos_switch_instanceContext * /*ctx*/) override { }

  virtual void enterEnable_gate_instance(SystemVerilogParser::Enable_gate_instanceContext * /*ctx*/) override { }
  virtual void exitEnable_gate_instance(SystemVerilogParser::Enable_gate_instanceContext * /*ctx*/) override { }

  virtual void enterMos_switch_instance(SystemVerilogParser::Mos_switch_instanceContext * /*ctx*/) override { }
  virtual void exitMos_switch_instance(SystemVerilogParser::Mos_switch_instanceContext * /*ctx*/) override { }

  virtual void enterN_input_gate_instance(SystemVerilogParser::N_input_gate_instanceContext * /*ctx*/) override { }
  virtual void exitN_input_gate_instance(SystemVerilogParser::N_input_gate_instanceContext * /*ctx*/) override { }

  virtual void enterN_output_gate_instance(SystemVerilogParser::N_output_gate_instanceContext * /*ctx*/) override { }
  virtual void exitN_output_gate_instance(SystemVerilogParser::N_output_gate_instanceContext * /*ctx*/) override { }

  virtual void enterPass_switch_instance(SystemVerilogParser::Pass_switch_instanceContext * /*ctx*/) override { }
  virtual void exitPass_switch_instance(SystemVerilogParser::Pass_switch_instanceContext * /*ctx*/) override { }

  virtual void enterPass_enable_switch_instance(SystemVerilogParser::Pass_enable_switch_instanceContext * /*ctx*/) override { }
  virtual void exitPass_enable_switch_instance(SystemVerilogParser::Pass_enable_switch_instanceContext * /*ctx*/) override { }

  virtual void enterPull_gate_instance(SystemVerilogParser::Pull_gate_instanceContext * /*ctx*/) override { }
  virtual void exitPull_gate_instance(SystemVerilogParser::Pull_gate_instanceContext * /*ctx*/) override { }

  virtual void enterPulldown_strength(SystemVerilogParser::Pulldown_strengthContext * /*ctx*/) override { }
  virtual void exitPulldown_strength(SystemVerilogParser::Pulldown_strengthContext * /*ctx*/) override { }

  virtual void enterPullup_strength(SystemVerilogParser::Pullup_strengthContext * /*ctx*/) override { }
  virtual void exitPullup_strength(SystemVerilogParser::Pullup_strengthContext * /*ctx*/) override { }

  virtual void enterEnable_terminal(SystemVerilogParser::Enable_terminalContext * /*ctx*/) override { }
  virtual void exitEnable_terminal(SystemVerilogParser::Enable_terminalContext * /*ctx*/) override { }

  virtual void enterInout_terminal(SystemVerilogParser::Inout_terminalContext * /*ctx*/) override { }
  virtual void exitInout_terminal(SystemVerilogParser::Inout_terminalContext * /*ctx*/) override { }

  virtual void enterInput_terminal(SystemVerilogParser::Input_terminalContext * /*ctx*/) override { }
  virtual void exitInput_terminal(SystemVerilogParser::Input_terminalContext * /*ctx*/) override { }

  virtual void enterNcontrol_terminal(SystemVerilogParser::Ncontrol_terminalContext * /*ctx*/) override { }
  virtual void exitNcontrol_terminal(SystemVerilogParser::Ncontrol_terminalContext * /*ctx*/) override { }

  virtual void enterOutput_terminal(SystemVerilogParser::Output_terminalContext * /*ctx*/) override { }
  virtual void exitOutput_terminal(SystemVerilogParser::Output_terminalContext * /*ctx*/) override { }

  virtual void enterPcontrol_terminal(SystemVerilogParser::Pcontrol_terminalContext * /*ctx*/) override { }
  virtual void exitPcontrol_terminal(SystemVerilogParser::Pcontrol_terminalContext * /*ctx*/) override { }

  virtual void enterCmos_switchtype(SystemVerilogParser::Cmos_switchtypeContext * /*ctx*/) override { }
  virtual void exitCmos_switchtype(SystemVerilogParser::Cmos_switchtypeContext * /*ctx*/) override { }

  virtual void enterEnable_gatetype(SystemVerilogParser::Enable_gatetypeContext * /*ctx*/) override { }
  virtual void exitEnable_gatetype(SystemVerilogParser::Enable_gatetypeContext * /*ctx*/) override { }

  virtual void enterMos_switchtype(SystemVerilogParser::Mos_switchtypeContext * /*ctx*/) override { }
  virtual void exitMos_switchtype(SystemVerilogParser::Mos_switchtypeContext * /*ctx*/) override { }

  virtual void enterN_input_gatetype(SystemVerilogParser::N_input_gatetypeContext * /*ctx*/) override { }
  virtual void exitN_input_gatetype(SystemVerilogParser::N_input_gatetypeContext * /*ctx*/) override { }

  virtual void enterN_output_gatetype(SystemVerilogParser::N_output_gatetypeContext * /*ctx*/) override { }
  virtual void exitN_output_gatetype(SystemVerilogParser::N_output_gatetypeContext * /*ctx*/) override { }

  virtual void enterPass_en_switchtype(SystemVerilogParser::Pass_en_switchtypeContext * /*ctx*/) override { }
  virtual void exitPass_en_switchtype(SystemVerilogParser::Pass_en_switchtypeContext * /*ctx*/) override { }

  virtual void enterPass_switchtype(SystemVerilogParser::Pass_switchtypeContext * /*ctx*/) override { }
  virtual void exitPass_switchtype(SystemVerilogParser::Pass_switchtypeContext * /*ctx*/) override { }

  virtual void enterModule_instantiation(SystemVerilogParser::Module_instantiationContext * /*ctx*/) override { }
  virtual void exitModule_instantiation(SystemVerilogParser::Module_instantiationContext * /*ctx*/) override { }

  virtual void enterParameter_value_assignment(SystemVerilogParser::Parameter_value_assignmentContext * /*ctx*/) override { }
  virtual void exitParameter_value_assignment(SystemVerilogParser::Parameter_value_assignmentContext * /*ctx*/) override { }

  virtual void enterList_of_parameter_assignments(SystemVerilogParser::List_of_parameter_assignmentsContext * /*ctx*/) override { }
  virtual void exitList_of_parameter_assignments(SystemVerilogParser::List_of_parameter_assignmentsContext * /*ctx*/) override { }

  virtual void enterOrdered_parameter_assignment(SystemVerilogParser::Ordered_parameter_assignmentContext * /*ctx*/) override { }
  virtual void exitOrdered_parameter_assignment(SystemVerilogParser::Ordered_parameter_assignmentContext * /*ctx*/) override { }

  virtual void enterNamed_parameter_assignment(SystemVerilogParser::Named_parameter_assignmentContext * /*ctx*/) override { }
  virtual void exitNamed_parameter_assignment(SystemVerilogParser::Named_parameter_assignmentContext * /*ctx*/) override { }

  virtual void enterHierarchical_instance(SystemVerilogParser::Hierarchical_instanceContext * /*ctx*/) override { }
  virtual void exitHierarchical_instance(SystemVerilogParser::Hierarchical_instanceContext * /*ctx*/) override { }

  virtual void enterName_of_instance(SystemVerilogParser::Name_of_instanceContext * /*ctx*/) override { }
  virtual void exitName_of_instance(SystemVerilogParser::Name_of_instanceContext * /*ctx*/) override { }

  virtual void enterList_of_port_connections(SystemVerilogParser::List_of_port_connectionsContext * /*ctx*/) override { }
  virtual void exitList_of_port_connections(SystemVerilogParser::List_of_port_connectionsContext * /*ctx*/) override { }

  virtual void enterOrdered_port_connection(SystemVerilogParser::Ordered_port_connectionContext * /*ctx*/) override { }
  virtual void exitOrdered_port_connection(SystemVerilogParser::Ordered_port_connectionContext * /*ctx*/) override { }

  virtual void enterNamed_port_connection(SystemVerilogParser::Named_port_connectionContext * /*ctx*/) override { }
  virtual void exitNamed_port_connection(SystemVerilogParser::Named_port_connectionContext * /*ctx*/) override { }

  virtual void enterInterface_instantiation(SystemVerilogParser::Interface_instantiationContext * /*ctx*/) override { }
  virtual void exitInterface_instantiation(SystemVerilogParser::Interface_instantiationContext * /*ctx*/) override { }

  virtual void enterProgram_instantiation(SystemVerilogParser::Program_instantiationContext * /*ctx*/) override { }
  virtual void exitProgram_instantiation(SystemVerilogParser::Program_instantiationContext * /*ctx*/) override { }

  virtual void enterChecker_instantiation(SystemVerilogParser::Checker_instantiationContext * /*ctx*/) override { }
  virtual void exitChecker_instantiation(SystemVerilogParser::Checker_instantiationContext * /*ctx*/) override { }

  virtual void enterList_of_checker_port_connections(SystemVerilogParser::List_of_checker_port_connectionsContext * /*ctx*/) override { }
  virtual void exitList_of_checker_port_connections(SystemVerilogParser::List_of_checker_port_connectionsContext * /*ctx*/) override { }

  virtual void enterOrdered_checker_port_connection(SystemVerilogParser::Ordered_checker_port_connectionContext * /*ctx*/) override { }
  virtual void exitOrdered_checker_port_connection(SystemVerilogParser::Ordered_checker_port_connectionContext * /*ctx*/) override { }

  virtual void enterNamed_checker_port_connection(SystemVerilogParser::Named_checker_port_connectionContext * /*ctx*/) override { }
  virtual void exitNamed_checker_port_connection(SystemVerilogParser::Named_checker_port_connectionContext * /*ctx*/) override { }

  virtual void enterGenerate_region(SystemVerilogParser::Generate_regionContext * /*ctx*/) override { }
  virtual void exitGenerate_region(SystemVerilogParser::Generate_regionContext * /*ctx*/) override { }

  virtual void enterLoop_generate_construct(SystemVerilogParser::Loop_generate_constructContext * /*ctx*/) override { }
  virtual void exitLoop_generate_construct(SystemVerilogParser::Loop_generate_constructContext * /*ctx*/) override { }

  virtual void enterGenvar_initialization(SystemVerilogParser::Genvar_initializationContext * /*ctx*/) override { }
  virtual void exitGenvar_initialization(SystemVerilogParser::Genvar_initializationContext * /*ctx*/) override { }

  virtual void enterGenvar_iteration(SystemVerilogParser::Genvar_iterationContext * /*ctx*/) override { }
  virtual void exitGenvar_iteration(SystemVerilogParser::Genvar_iterationContext * /*ctx*/) override { }

  virtual void enterConditional_generate_construct(SystemVerilogParser::Conditional_generate_constructContext * /*ctx*/) override { }
  virtual void exitConditional_generate_construct(SystemVerilogParser::Conditional_generate_constructContext * /*ctx*/) override { }

  virtual void enterIf_generate_construct(SystemVerilogParser::If_generate_constructContext * /*ctx*/) override { }
  virtual void exitIf_generate_construct(SystemVerilogParser::If_generate_constructContext * /*ctx*/) override { }

  virtual void enterCase_generate_construct(SystemVerilogParser::Case_generate_constructContext * /*ctx*/) override { }
  virtual void exitCase_generate_construct(SystemVerilogParser::Case_generate_constructContext * /*ctx*/) override { }

  virtual void enterCase_generate_item(SystemVerilogParser::Case_generate_itemContext * /*ctx*/) override { }
  virtual void exitCase_generate_item(SystemVerilogParser::Case_generate_itemContext * /*ctx*/) override { }

  virtual void enterGenerate_block(SystemVerilogParser::Generate_blockContext * /*ctx*/) override { }
  virtual void exitGenerate_block(SystemVerilogParser::Generate_blockContext * /*ctx*/) override { }

  virtual void enterGenerate_item(SystemVerilogParser::Generate_itemContext * /*ctx*/) override { }
  virtual void exitGenerate_item(SystemVerilogParser::Generate_itemContext * /*ctx*/) override { }

  virtual void enterUdp_declaration_common(SystemVerilogParser::Udp_declaration_commonContext * /*ctx*/) override { }
  virtual void exitUdp_declaration_common(SystemVerilogParser::Udp_declaration_commonContext * /*ctx*/) override { }

  virtual void enterUdp_nonansi_ports(SystemVerilogParser::Udp_nonansi_portsContext * /*ctx*/) override { }
  virtual void exitUdp_nonansi_ports(SystemVerilogParser::Udp_nonansi_portsContext * /*ctx*/) override { }

  virtual void enterUdp_ansi_ports(SystemVerilogParser::Udp_ansi_portsContext * /*ctx*/) override { }
  virtual void exitUdp_ansi_ports(SystemVerilogParser::Udp_ansi_portsContext * /*ctx*/) override { }

  virtual void enterUdp_declaration(SystemVerilogParser::Udp_declarationContext * /*ctx*/) override { }
  virtual void exitUdp_declaration(SystemVerilogParser::Udp_declarationContext * /*ctx*/) override { }

  virtual void enterUdp_port_list(SystemVerilogParser::Udp_port_listContext * /*ctx*/) override { }
  virtual void exitUdp_port_list(SystemVerilogParser::Udp_port_listContext * /*ctx*/) override { }

  virtual void enterUdp_declaration_port_list(SystemVerilogParser::Udp_declaration_port_listContext * /*ctx*/) override { }
  virtual void exitUdp_declaration_port_list(SystemVerilogParser::Udp_declaration_port_listContext * /*ctx*/) override { }

  virtual void enterUdp_port_declaration(SystemVerilogParser::Udp_port_declarationContext * /*ctx*/) override { }
  virtual void exitUdp_port_declaration(SystemVerilogParser::Udp_port_declarationContext * /*ctx*/) override { }

  virtual void enterUdp_output_declaration(SystemVerilogParser::Udp_output_declarationContext * /*ctx*/) override { }
  virtual void exitUdp_output_declaration(SystemVerilogParser::Udp_output_declarationContext * /*ctx*/) override { }

  virtual void enterUdp_input_declaration(SystemVerilogParser::Udp_input_declarationContext * /*ctx*/) override { }
  virtual void exitUdp_input_declaration(SystemVerilogParser::Udp_input_declarationContext * /*ctx*/) override { }

  virtual void enterUdp_reg_declaration(SystemVerilogParser::Udp_reg_declarationContext * /*ctx*/) override { }
  virtual void exitUdp_reg_declaration(SystemVerilogParser::Udp_reg_declarationContext * /*ctx*/) override { }

  virtual void enterUdp_body(SystemVerilogParser::Udp_bodyContext * /*ctx*/) override { }
  virtual void exitUdp_body(SystemVerilogParser::Udp_bodyContext * /*ctx*/) override { }

  virtual void enterCombinational_body(SystemVerilogParser::Combinational_bodyContext * /*ctx*/) override { }
  virtual void exitCombinational_body(SystemVerilogParser::Combinational_bodyContext * /*ctx*/) override { }

  virtual void enterCombinational_entry(SystemVerilogParser::Combinational_entryContext * /*ctx*/) override { }
  virtual void exitCombinational_entry(SystemVerilogParser::Combinational_entryContext * /*ctx*/) override { }

  virtual void enterSequential_body(SystemVerilogParser::Sequential_bodyContext * /*ctx*/) override { }
  virtual void exitSequential_body(SystemVerilogParser::Sequential_bodyContext * /*ctx*/) override { }

  virtual void enterUdp_initial_statement(SystemVerilogParser::Udp_initial_statementContext * /*ctx*/) override { }
  virtual void exitUdp_initial_statement(SystemVerilogParser::Udp_initial_statementContext * /*ctx*/) override { }

  virtual void enterInit_val(SystemVerilogParser::Init_valContext * /*ctx*/) override { }
  virtual void exitInit_val(SystemVerilogParser::Init_valContext * /*ctx*/) override { }

  virtual void enterSequential_entry(SystemVerilogParser::Sequential_entryContext * /*ctx*/) override { }
  virtual void exitSequential_entry(SystemVerilogParser::Sequential_entryContext * /*ctx*/) override { }

  virtual void enterSeq_input_list(SystemVerilogParser::Seq_input_listContext * /*ctx*/) override { }
  virtual void exitSeq_input_list(SystemVerilogParser::Seq_input_listContext * /*ctx*/) override { }

  virtual void enterLevel_input_list(SystemVerilogParser::Level_input_listContext * /*ctx*/) override { }
  virtual void exitLevel_input_list(SystemVerilogParser::Level_input_listContext * /*ctx*/) override { }

  virtual void enterEdge_input_list(SystemVerilogParser::Edge_input_listContext * /*ctx*/) override { }
  virtual void exitEdge_input_list(SystemVerilogParser::Edge_input_listContext * /*ctx*/) override { }

  virtual void enterEdge_indicator(SystemVerilogParser::Edge_indicatorContext * /*ctx*/) override { }
  virtual void exitEdge_indicator(SystemVerilogParser::Edge_indicatorContext * /*ctx*/) override { }

  virtual void enterCurrent_state(SystemVerilogParser::Current_stateContext * /*ctx*/) override { }
  virtual void exitCurrent_state(SystemVerilogParser::Current_stateContext * /*ctx*/) override { }

  virtual void enterNext_state(SystemVerilogParser::Next_stateContext * /*ctx*/) override { }
  virtual void exitNext_state(SystemVerilogParser::Next_stateContext * /*ctx*/) override { }

  virtual void enterLevel_symbol(SystemVerilogParser::Level_symbolContext * /*ctx*/) override { }
  virtual void exitLevel_symbol(SystemVerilogParser::Level_symbolContext * /*ctx*/) override { }

  virtual void enterUdp_instantiation(SystemVerilogParser::Udp_instantiationContext * /*ctx*/) override { }
  virtual void exitUdp_instantiation(SystemVerilogParser::Udp_instantiationContext * /*ctx*/) override { }

  virtual void enterUdp_instance(SystemVerilogParser::Udp_instanceContext * /*ctx*/) override { }
  virtual void exitUdp_instance(SystemVerilogParser::Udp_instanceContext * /*ctx*/) override { }

  virtual void enterContinuous_assign(SystemVerilogParser::Continuous_assignContext * /*ctx*/) override { }
  virtual void exitContinuous_assign(SystemVerilogParser::Continuous_assignContext * /*ctx*/) override { }

  virtual void enterList_of_net_assignments(SystemVerilogParser::List_of_net_assignmentsContext * /*ctx*/) override { }
  virtual void exitList_of_net_assignments(SystemVerilogParser::List_of_net_assignmentsContext * /*ctx*/) override { }

  virtual void enterList_of_variable_assignments(SystemVerilogParser::List_of_variable_assignmentsContext * /*ctx*/) override { }
  virtual void exitList_of_variable_assignments(SystemVerilogParser::List_of_variable_assignmentsContext * /*ctx*/) override { }

  virtual void enterNet_alias(SystemVerilogParser::Net_aliasContext * /*ctx*/) override { }
  virtual void exitNet_alias(SystemVerilogParser::Net_aliasContext * /*ctx*/) override { }

  virtual void enterNet_assignment(SystemVerilogParser::Net_assignmentContext * /*ctx*/) override { }
  virtual void exitNet_assignment(SystemVerilogParser::Net_assignmentContext * /*ctx*/) override { }

  virtual void enterInitial_construct(SystemVerilogParser::Initial_constructContext * /*ctx*/) override { }
  virtual void exitInitial_construct(SystemVerilogParser::Initial_constructContext * /*ctx*/) override { }

  virtual void enterAlways_construct(SystemVerilogParser::Always_constructContext * /*ctx*/) override { }
  virtual void exitAlways_construct(SystemVerilogParser::Always_constructContext * /*ctx*/) override { }

  virtual void enterAlways_keyword(SystemVerilogParser::Always_keywordContext * /*ctx*/) override { }
  virtual void exitAlways_keyword(SystemVerilogParser::Always_keywordContext * /*ctx*/) override { }

  virtual void enterFinal_construct(SystemVerilogParser::Final_constructContext * /*ctx*/) override { }
  virtual void exitFinal_construct(SystemVerilogParser::Final_constructContext * /*ctx*/) override { }

  virtual void enterBlocking_assignment(SystemVerilogParser::Blocking_assignmentContext * /*ctx*/) override { }
  virtual void exitBlocking_assignment(SystemVerilogParser::Blocking_assignmentContext * /*ctx*/) override { }

  virtual void enterOperator_assignment(SystemVerilogParser::Operator_assignmentContext * /*ctx*/) override { }
  virtual void exitOperator_assignment(SystemVerilogParser::Operator_assignmentContext * /*ctx*/) override { }

  virtual void enterAssignment_operator(SystemVerilogParser::Assignment_operatorContext * /*ctx*/) override { }
  virtual void exitAssignment_operator(SystemVerilogParser::Assignment_operatorContext * /*ctx*/) override { }

  virtual void enterNonblocking_assignment(SystemVerilogParser::Nonblocking_assignmentContext * /*ctx*/) override { }
  virtual void exitNonblocking_assignment(SystemVerilogParser::Nonblocking_assignmentContext * /*ctx*/) override { }

  virtual void enterProcedural_continuous_assignment(SystemVerilogParser::Procedural_continuous_assignmentContext * /*ctx*/) override { }
  virtual void exitProcedural_continuous_assignment(SystemVerilogParser::Procedural_continuous_assignmentContext * /*ctx*/) override { }

  virtual void enterVariable_assignment(SystemVerilogParser::Variable_assignmentContext * /*ctx*/) override { }
  virtual void exitVariable_assignment(SystemVerilogParser::Variable_assignmentContext * /*ctx*/) override { }

  virtual void enterAction_block(SystemVerilogParser::Action_blockContext * /*ctx*/) override { }
  virtual void exitAction_block(SystemVerilogParser::Action_blockContext * /*ctx*/) override { }

  virtual void enterSeq_block(SystemVerilogParser::Seq_blockContext * /*ctx*/) override { }
  virtual void exitSeq_block(SystemVerilogParser::Seq_blockContext * /*ctx*/) override { }

  virtual void enterPar_block(SystemVerilogParser::Par_blockContext * /*ctx*/) override { }
  virtual void exitPar_block(SystemVerilogParser::Par_blockContext * /*ctx*/) override { }

  virtual void enterJoin_keyword(SystemVerilogParser::Join_keywordContext * /*ctx*/) override { }
  virtual void exitJoin_keyword(SystemVerilogParser::Join_keywordContext * /*ctx*/) override { }

  virtual void enterStatement_or_null(SystemVerilogParser::Statement_or_nullContext * /*ctx*/) override { }
  virtual void exitStatement_or_null(SystemVerilogParser::Statement_or_nullContext * /*ctx*/) override { }

  virtual void enterStatement(SystemVerilogParser::StatementContext * /*ctx*/) override { }
  virtual void exitStatement(SystemVerilogParser::StatementContext * /*ctx*/) override { }

  virtual void enterStatement_item(SystemVerilogParser::Statement_itemContext * /*ctx*/) override { }
  virtual void exitStatement_item(SystemVerilogParser::Statement_itemContext * /*ctx*/) override { }

  virtual void enterFunction_statement(SystemVerilogParser::Function_statementContext * /*ctx*/) override { }
  virtual void exitFunction_statement(SystemVerilogParser::Function_statementContext * /*ctx*/) override { }

  virtual void enterFunction_statement_or_null(SystemVerilogParser::Function_statement_or_nullContext * /*ctx*/) override { }
  virtual void exitFunction_statement_or_null(SystemVerilogParser::Function_statement_or_nullContext * /*ctx*/) override { }

  virtual void enterVariable_identifier_list(SystemVerilogParser::Variable_identifier_listContext * /*ctx*/) override { }
  virtual void exitVariable_identifier_list(SystemVerilogParser::Variable_identifier_listContext * /*ctx*/) override { }

  virtual void enterProcedural_timing_control_statement(SystemVerilogParser::Procedural_timing_control_statementContext * /*ctx*/) override { }
  virtual void exitProcedural_timing_control_statement(SystemVerilogParser::Procedural_timing_control_statementContext * /*ctx*/) override { }

  virtual void enterDelay_or_event_control(SystemVerilogParser::Delay_or_event_controlContext * /*ctx*/) override { }
  virtual void exitDelay_or_event_control(SystemVerilogParser::Delay_or_event_controlContext * /*ctx*/) override { }

  virtual void enterDelay_control(SystemVerilogParser::Delay_controlContext * /*ctx*/) override { }
  virtual void exitDelay_control(SystemVerilogParser::Delay_controlContext * /*ctx*/) override { }

  virtual void enterEvent_control(SystemVerilogParser::Event_controlContext * /*ctx*/) override { }
  virtual void exitEvent_control(SystemVerilogParser::Event_controlContext * /*ctx*/) override { }

  virtual void enterEvent_expression(SystemVerilogParser::Event_expressionContext * /*ctx*/) override { }
  virtual void exitEvent_expression(SystemVerilogParser::Event_expressionContext * /*ctx*/) override { }

  virtual void enterProcedural_timing_control(SystemVerilogParser::Procedural_timing_controlContext * /*ctx*/) override { }
  virtual void exitProcedural_timing_control(SystemVerilogParser::Procedural_timing_controlContext * /*ctx*/) override { }

  virtual void enterJump_statement(SystemVerilogParser::Jump_statementContext * /*ctx*/) override { }
  virtual void exitJump_statement(SystemVerilogParser::Jump_statementContext * /*ctx*/) override { }

  virtual void enterWait_statement(SystemVerilogParser::Wait_statementContext * /*ctx*/) override { }
  virtual void exitWait_statement(SystemVerilogParser::Wait_statementContext * /*ctx*/) override { }

  virtual void enterEvent_trigger(SystemVerilogParser::Event_triggerContext * /*ctx*/) override { }
  virtual void exitEvent_trigger(SystemVerilogParser::Event_triggerContext * /*ctx*/) override { }

  virtual void enterDisable_statement(SystemVerilogParser::Disable_statementContext * /*ctx*/) override { }
  virtual void exitDisable_statement(SystemVerilogParser::Disable_statementContext * /*ctx*/) override { }

  virtual void enterConditional_statement(SystemVerilogParser::Conditional_statementContext * /*ctx*/) override { }
  virtual void exitConditional_statement(SystemVerilogParser::Conditional_statementContext * /*ctx*/) override { }

  virtual void enterUnique_priority(SystemVerilogParser::Unique_priorityContext * /*ctx*/) override { }
  virtual void exitUnique_priority(SystemVerilogParser::Unique_priorityContext * /*ctx*/) override { }

  virtual void enterCond_predicate(SystemVerilogParser::Cond_predicateContext * /*ctx*/) override { }
  virtual void exitCond_predicate(SystemVerilogParser::Cond_predicateContext * /*ctx*/) override { }

  virtual void enterExpression_or_cond_pattern(SystemVerilogParser::Expression_or_cond_patternContext * /*ctx*/) override { }
  virtual void exitExpression_or_cond_pattern(SystemVerilogParser::Expression_or_cond_patternContext * /*ctx*/) override { }

  virtual void enterCond_pattern(SystemVerilogParser::Cond_patternContext * /*ctx*/) override { }
  virtual void exitCond_pattern(SystemVerilogParser::Cond_patternContext * /*ctx*/) override { }

  virtual void enterCase_statement(SystemVerilogParser::Case_statementContext * /*ctx*/) override { }
  virtual void exitCase_statement(SystemVerilogParser::Case_statementContext * /*ctx*/) override { }

  virtual void enterCase_keyword(SystemVerilogParser::Case_keywordContext * /*ctx*/) override { }
  virtual void exitCase_keyword(SystemVerilogParser::Case_keywordContext * /*ctx*/) override { }

  virtual void enterCase_expression(SystemVerilogParser::Case_expressionContext * /*ctx*/) override { }
  virtual void exitCase_expression(SystemVerilogParser::Case_expressionContext * /*ctx*/) override { }

  virtual void enterCase_item(SystemVerilogParser::Case_itemContext * /*ctx*/) override { }
  virtual void exitCase_item(SystemVerilogParser::Case_itemContext * /*ctx*/) override { }

  virtual void enterCase_pattern_item(SystemVerilogParser::Case_pattern_itemContext * /*ctx*/) override { }
  virtual void exitCase_pattern_item(SystemVerilogParser::Case_pattern_itemContext * /*ctx*/) override { }

  virtual void enterCase_inside_item(SystemVerilogParser::Case_inside_itemContext * /*ctx*/) override { }
  virtual void exitCase_inside_item(SystemVerilogParser::Case_inside_itemContext * /*ctx*/) override { }

  virtual void enterCase_item_expression(SystemVerilogParser::Case_item_expressionContext * /*ctx*/) override { }
  virtual void exitCase_item_expression(SystemVerilogParser::Case_item_expressionContext * /*ctx*/) override { }

  virtual void enterRandcase_statement(SystemVerilogParser::Randcase_statementContext * /*ctx*/) override { }
  virtual void exitRandcase_statement(SystemVerilogParser::Randcase_statementContext * /*ctx*/) override { }

  virtual void enterRandcase_item(SystemVerilogParser::Randcase_itemContext * /*ctx*/) override { }
  virtual void exitRandcase_item(SystemVerilogParser::Randcase_itemContext * /*ctx*/) override { }

  virtual void enterOpen_range_list(SystemVerilogParser::Open_range_listContext * /*ctx*/) override { }
  virtual void exitOpen_range_list(SystemVerilogParser::Open_range_listContext * /*ctx*/) override { }

  virtual void enterOpen_value_range(SystemVerilogParser::Open_value_rangeContext * /*ctx*/) override { }
  virtual void exitOpen_value_range(SystemVerilogParser::Open_value_rangeContext * /*ctx*/) override { }

  virtual void enterPattern(SystemVerilogParser::PatternContext * /*ctx*/) override { }
  virtual void exitPattern(SystemVerilogParser::PatternContext * /*ctx*/) override { }

  virtual void enterAssignment_pattern(SystemVerilogParser::Assignment_patternContext * /*ctx*/) override { }
  virtual void exitAssignment_pattern(SystemVerilogParser::Assignment_patternContext * /*ctx*/) override { }

  virtual void enterStructure_pattern_key(SystemVerilogParser::Structure_pattern_keyContext * /*ctx*/) override { }
  virtual void exitStructure_pattern_key(SystemVerilogParser::Structure_pattern_keyContext * /*ctx*/) override { }

  virtual void enterArray_pattern_key(SystemVerilogParser::Array_pattern_keyContext * /*ctx*/) override { }
  virtual void exitArray_pattern_key(SystemVerilogParser::Array_pattern_keyContext * /*ctx*/) override { }

  virtual void enterAssignment_pattern_key(SystemVerilogParser::Assignment_pattern_keyContext * /*ctx*/) override { }
  virtual void exitAssignment_pattern_key(SystemVerilogParser::Assignment_pattern_keyContext * /*ctx*/) override { }

  virtual void enterAssignment_pattern_expression(SystemVerilogParser::Assignment_pattern_expressionContext * /*ctx*/) override { }
  virtual void exitAssignment_pattern_expression(SystemVerilogParser::Assignment_pattern_expressionContext * /*ctx*/) override { }

  virtual void enterAssignment_pattern_expression_type(SystemVerilogParser::Assignment_pattern_expression_typeContext * /*ctx*/) override { }
  virtual void exitAssignment_pattern_expression_type(SystemVerilogParser::Assignment_pattern_expression_typeContext * /*ctx*/) override { }

  virtual void enterConstant_assignment_pattern_expression(SystemVerilogParser::Constant_assignment_pattern_expressionContext * /*ctx*/) override { }
  virtual void exitConstant_assignment_pattern_expression(SystemVerilogParser::Constant_assignment_pattern_expressionContext * /*ctx*/) override { }

  virtual void enterAssignment_pattern_net_lvalue(SystemVerilogParser::Assignment_pattern_net_lvalueContext * /*ctx*/) override { }
  virtual void exitAssignment_pattern_net_lvalue(SystemVerilogParser::Assignment_pattern_net_lvalueContext * /*ctx*/) override { }

  virtual void enterAssignment_pattern_variable_lvalue(SystemVerilogParser::Assignment_pattern_variable_lvalueContext * /*ctx*/) override { }
  virtual void exitAssignment_pattern_variable_lvalue(SystemVerilogParser::Assignment_pattern_variable_lvalueContext * /*ctx*/) override { }

  virtual void enterLoop_statement(SystemVerilogParser::Loop_statementContext * /*ctx*/) override { }
  virtual void exitLoop_statement(SystemVerilogParser::Loop_statementContext * /*ctx*/) override { }

  virtual void enterFor_initialization(SystemVerilogParser::For_initializationContext * /*ctx*/) override { }
  virtual void exitFor_initialization(SystemVerilogParser::For_initializationContext * /*ctx*/) override { }

  virtual void enterFor_variable_declaration(SystemVerilogParser::For_variable_declarationContext * /*ctx*/) override { }
  virtual void exitFor_variable_declaration(SystemVerilogParser::For_variable_declarationContext * /*ctx*/) override { }

  virtual void enterFor_step(SystemVerilogParser::For_stepContext * /*ctx*/) override { }
  virtual void exitFor_step(SystemVerilogParser::For_stepContext * /*ctx*/) override { }

  virtual void enterFor_step_assignment(SystemVerilogParser::For_step_assignmentContext * /*ctx*/) override { }
  virtual void exitFor_step_assignment(SystemVerilogParser::For_step_assignmentContext * /*ctx*/) override { }

  virtual void enterLoop_variables(SystemVerilogParser::Loop_variablesContext * /*ctx*/) override { }
  virtual void exitLoop_variables(SystemVerilogParser::Loop_variablesContext * /*ctx*/) override { }

  virtual void enterSubroutine_call_statement(SystemVerilogParser::Subroutine_call_statementContext * /*ctx*/) override { }
  virtual void exitSubroutine_call_statement(SystemVerilogParser::Subroutine_call_statementContext * /*ctx*/) override { }

  virtual void enterAssertion_item(SystemVerilogParser::Assertion_itemContext * /*ctx*/) override { }
  virtual void exitAssertion_item(SystemVerilogParser::Assertion_itemContext * /*ctx*/) override { }

  virtual void enterDeferred_immediate_assertion_item(SystemVerilogParser::Deferred_immediate_assertion_itemContext * /*ctx*/) override { }
  virtual void exitDeferred_immediate_assertion_item(SystemVerilogParser::Deferred_immediate_assertion_itemContext * /*ctx*/) override { }

  virtual void enterProcedural_assertion_statement(SystemVerilogParser::Procedural_assertion_statementContext * /*ctx*/) override { }
  virtual void exitProcedural_assertion_statement(SystemVerilogParser::Procedural_assertion_statementContext * /*ctx*/) override { }

  virtual void enterImmediate_assertion_statement(SystemVerilogParser::Immediate_assertion_statementContext * /*ctx*/) override { }
  virtual void exitImmediate_assertion_statement(SystemVerilogParser::Immediate_assertion_statementContext * /*ctx*/) override { }

  virtual void enterSimple_immediate_assertion_statement(SystemVerilogParser::Simple_immediate_assertion_statementContext * /*ctx*/) override { }
  virtual void exitSimple_immediate_assertion_statement(SystemVerilogParser::Simple_immediate_assertion_statementContext * /*ctx*/) override { }

  virtual void enterSimple_immediate_assert_statement(SystemVerilogParser::Simple_immediate_assert_statementContext * /*ctx*/) override { }
  virtual void exitSimple_immediate_assert_statement(SystemVerilogParser::Simple_immediate_assert_statementContext * /*ctx*/) override { }

  virtual void enterSimple_immediate_assume_statement(SystemVerilogParser::Simple_immediate_assume_statementContext * /*ctx*/) override { }
  virtual void exitSimple_immediate_assume_statement(SystemVerilogParser::Simple_immediate_assume_statementContext * /*ctx*/) override { }

  virtual void enterSimple_immediate_cover_statement(SystemVerilogParser::Simple_immediate_cover_statementContext * /*ctx*/) override { }
  virtual void exitSimple_immediate_cover_statement(SystemVerilogParser::Simple_immediate_cover_statementContext * /*ctx*/) override { }

  virtual void enterDeferred_immediate_assertion_statement(SystemVerilogParser::Deferred_immediate_assertion_statementContext * /*ctx*/) override { }
  virtual void exitDeferred_immediate_assertion_statement(SystemVerilogParser::Deferred_immediate_assertion_statementContext * /*ctx*/) override { }

  virtual void enterDeferred_immediate_assert_statement(SystemVerilogParser::Deferred_immediate_assert_statementContext * /*ctx*/) override { }
  virtual void exitDeferred_immediate_assert_statement(SystemVerilogParser::Deferred_immediate_assert_statementContext * /*ctx*/) override { }

  virtual void enterDeferred_immediate_assume_statement(SystemVerilogParser::Deferred_immediate_assume_statementContext * /*ctx*/) override { }
  virtual void exitDeferred_immediate_assume_statement(SystemVerilogParser::Deferred_immediate_assume_statementContext * /*ctx*/) override { }

  virtual void enterDeferred_immediate_cover_statement(SystemVerilogParser::Deferred_immediate_cover_statementContext * /*ctx*/) override { }
  virtual void exitDeferred_immediate_cover_statement(SystemVerilogParser::Deferred_immediate_cover_statementContext * /*ctx*/) override { }

  virtual void enterClocking_declaration(SystemVerilogParser::Clocking_declarationContext * /*ctx*/) override { }
  virtual void exitClocking_declaration(SystemVerilogParser::Clocking_declarationContext * /*ctx*/) override { }

  virtual void enterClocking_event(SystemVerilogParser::Clocking_eventContext * /*ctx*/) override { }
  virtual void exitClocking_event(SystemVerilogParser::Clocking_eventContext * /*ctx*/) override { }

  virtual void enterClocking_item(SystemVerilogParser::Clocking_itemContext * /*ctx*/) override { }
  virtual void exitClocking_item(SystemVerilogParser::Clocking_itemContext * /*ctx*/) override { }

  virtual void enterDefault_skew(SystemVerilogParser::Default_skewContext * /*ctx*/) override { }
  virtual void exitDefault_skew(SystemVerilogParser::Default_skewContext * /*ctx*/) override { }

  virtual void enterClocking_direction(SystemVerilogParser::Clocking_directionContext * /*ctx*/) override { }
  virtual void exitClocking_direction(SystemVerilogParser::Clocking_directionContext * /*ctx*/) override { }

  virtual void enterList_of_clocking_decl_assign(SystemVerilogParser::List_of_clocking_decl_assignContext * /*ctx*/) override { }
  virtual void exitList_of_clocking_decl_assign(SystemVerilogParser::List_of_clocking_decl_assignContext * /*ctx*/) override { }

  virtual void enterClocking_decl_assign(SystemVerilogParser::Clocking_decl_assignContext * /*ctx*/) override { }
  virtual void exitClocking_decl_assign(SystemVerilogParser::Clocking_decl_assignContext * /*ctx*/) override { }

  virtual void enterClocking_skew(SystemVerilogParser::Clocking_skewContext * /*ctx*/) override { }
  virtual void exitClocking_skew(SystemVerilogParser::Clocking_skewContext * /*ctx*/) override { }

  virtual void enterClocking_drive(SystemVerilogParser::Clocking_driveContext * /*ctx*/) override { }
  virtual void exitClocking_drive(SystemVerilogParser::Clocking_driveContext * /*ctx*/) override { }

  virtual void enterCycle_delay(SystemVerilogParser::Cycle_delayContext * /*ctx*/) override { }
  virtual void exitCycle_delay(SystemVerilogParser::Cycle_delayContext * /*ctx*/) override { }

  virtual void enterClockvar(SystemVerilogParser::ClockvarContext * /*ctx*/) override { }
  virtual void exitClockvar(SystemVerilogParser::ClockvarContext * /*ctx*/) override { }

  virtual void enterClockvar_expression(SystemVerilogParser::Clockvar_expressionContext * /*ctx*/) override { }
  virtual void exitClockvar_expression(SystemVerilogParser::Clockvar_expressionContext * /*ctx*/) override { }

  virtual void enterRandsequence_statement(SystemVerilogParser::Randsequence_statementContext * /*ctx*/) override { }
  virtual void exitRandsequence_statement(SystemVerilogParser::Randsequence_statementContext * /*ctx*/) override { }

  virtual void enterProduction(SystemVerilogParser::ProductionContext * /*ctx*/) override { }
  virtual void exitProduction(SystemVerilogParser::ProductionContext * /*ctx*/) override { }

  virtual void enterRs_rule(SystemVerilogParser::Rs_ruleContext * /*ctx*/) override { }
  virtual void exitRs_rule(SystemVerilogParser::Rs_ruleContext * /*ctx*/) override { }

  virtual void enterRs_production_list(SystemVerilogParser::Rs_production_listContext * /*ctx*/) override { }
  virtual void exitRs_production_list(SystemVerilogParser::Rs_production_listContext * /*ctx*/) override { }

  virtual void enterWeight_specification(SystemVerilogParser::Weight_specificationContext * /*ctx*/) override { }
  virtual void exitWeight_specification(SystemVerilogParser::Weight_specificationContext * /*ctx*/) override { }

  virtual void enterRs_code_block(SystemVerilogParser::Rs_code_blockContext * /*ctx*/) override { }
  virtual void exitRs_code_block(SystemVerilogParser::Rs_code_blockContext * /*ctx*/) override { }

  virtual void enterRs_prod(SystemVerilogParser::Rs_prodContext * /*ctx*/) override { }
  virtual void exitRs_prod(SystemVerilogParser::Rs_prodContext * /*ctx*/) override { }

  virtual void enterProduction_item(SystemVerilogParser::Production_itemContext * /*ctx*/) override { }
  virtual void exitProduction_item(SystemVerilogParser::Production_itemContext * /*ctx*/) override { }

  virtual void enterRs_if_else(SystemVerilogParser::Rs_if_elseContext * /*ctx*/) override { }
  virtual void exitRs_if_else(SystemVerilogParser::Rs_if_elseContext * /*ctx*/) override { }

  virtual void enterRs_repeat(SystemVerilogParser::Rs_repeatContext * /*ctx*/) override { }
  virtual void exitRs_repeat(SystemVerilogParser::Rs_repeatContext * /*ctx*/) override { }

  virtual void enterRs_case(SystemVerilogParser::Rs_caseContext * /*ctx*/) override { }
  virtual void exitRs_case(SystemVerilogParser::Rs_caseContext * /*ctx*/) override { }

  virtual void enterRs_case_item(SystemVerilogParser::Rs_case_itemContext * /*ctx*/) override { }
  virtual void exitRs_case_item(SystemVerilogParser::Rs_case_itemContext * /*ctx*/) override { }

  virtual void enterSpecify_block(SystemVerilogParser::Specify_blockContext * /*ctx*/) override { }
  virtual void exitSpecify_block(SystemVerilogParser::Specify_blockContext * /*ctx*/) override { }

  virtual void enterSpecify_item(SystemVerilogParser::Specify_itemContext * /*ctx*/) override { }
  virtual void exitSpecify_item(SystemVerilogParser::Specify_itemContext * /*ctx*/) override { }

  virtual void enterPulsestyle_declaration(SystemVerilogParser::Pulsestyle_declarationContext * /*ctx*/) override { }
  virtual void exitPulsestyle_declaration(SystemVerilogParser::Pulsestyle_declarationContext * /*ctx*/) override { }

  virtual void enterShowcancelled_declaration(SystemVerilogParser::Showcancelled_declarationContext * /*ctx*/) override { }
  virtual void exitShowcancelled_declaration(SystemVerilogParser::Showcancelled_declarationContext * /*ctx*/) override { }

  virtual void enterPath_declaration(SystemVerilogParser::Path_declarationContext * /*ctx*/) override { }
  virtual void exitPath_declaration(SystemVerilogParser::Path_declarationContext * /*ctx*/) override { }

  virtual void enterSimple_path_declaration(SystemVerilogParser::Simple_path_declarationContext * /*ctx*/) override { }
  virtual void exitSimple_path_declaration(SystemVerilogParser::Simple_path_declarationContext * /*ctx*/) override { }

  virtual void enterParallel_path_description(SystemVerilogParser::Parallel_path_descriptionContext * /*ctx*/) override { }
  virtual void exitParallel_path_description(SystemVerilogParser::Parallel_path_descriptionContext * /*ctx*/) override { }

  virtual void enterFull_path_description(SystemVerilogParser::Full_path_descriptionContext * /*ctx*/) override { }
  virtual void exitFull_path_description(SystemVerilogParser::Full_path_descriptionContext * /*ctx*/) override { }

  virtual void enterList_of_path_inputs(SystemVerilogParser::List_of_path_inputsContext * /*ctx*/) override { }
  virtual void exitList_of_path_inputs(SystemVerilogParser::List_of_path_inputsContext * /*ctx*/) override { }

  virtual void enterList_of_path_outputs(SystemVerilogParser::List_of_path_outputsContext * /*ctx*/) override { }
  virtual void exitList_of_path_outputs(SystemVerilogParser::List_of_path_outputsContext * /*ctx*/) override { }

  virtual void enterSpecify_input_terminal_descriptor(SystemVerilogParser::Specify_input_terminal_descriptorContext * /*ctx*/) override { }
  virtual void exitSpecify_input_terminal_descriptor(SystemVerilogParser::Specify_input_terminal_descriptorContext * /*ctx*/) override { }

  virtual void enterSpecify_output_terminal_descriptor(SystemVerilogParser::Specify_output_terminal_descriptorContext * /*ctx*/) override { }
  virtual void exitSpecify_output_terminal_descriptor(SystemVerilogParser::Specify_output_terminal_descriptorContext * /*ctx*/) override { }

  virtual void enterInput_identifier(SystemVerilogParser::Input_identifierContext * /*ctx*/) override { }
  virtual void exitInput_identifier(SystemVerilogParser::Input_identifierContext * /*ctx*/) override { }

  virtual void enterOutput_identifier(SystemVerilogParser::Output_identifierContext * /*ctx*/) override { }
  virtual void exitOutput_identifier(SystemVerilogParser::Output_identifierContext * /*ctx*/) override { }

  virtual void enterPath_delay_value(SystemVerilogParser::Path_delay_valueContext * /*ctx*/) override { }
  virtual void exitPath_delay_value(SystemVerilogParser::Path_delay_valueContext * /*ctx*/) override { }

  virtual void enterList_of_path_delay_expressions(SystemVerilogParser::List_of_path_delay_expressionsContext * /*ctx*/) override { }
  virtual void exitList_of_path_delay_expressions(SystemVerilogParser::List_of_path_delay_expressionsContext * /*ctx*/) override { }

  virtual void enterPath_delay_expression(SystemVerilogParser::Path_delay_expressionContext * /*ctx*/) override { }
  virtual void exitPath_delay_expression(SystemVerilogParser::Path_delay_expressionContext * /*ctx*/) override { }

  virtual void enterEdge_sensitive_path_declaration(SystemVerilogParser::Edge_sensitive_path_declarationContext * /*ctx*/) override { }
  virtual void exitEdge_sensitive_path_declaration(SystemVerilogParser::Edge_sensitive_path_declarationContext * /*ctx*/) override { }

  virtual void enterParallel_edge_sensitive_path_description(SystemVerilogParser::Parallel_edge_sensitive_path_descriptionContext * /*ctx*/) override { }
  virtual void exitParallel_edge_sensitive_path_description(SystemVerilogParser::Parallel_edge_sensitive_path_descriptionContext * /*ctx*/) override { }

  virtual void enterFull_edge_sensitive_path_description(SystemVerilogParser::Full_edge_sensitive_path_descriptionContext * /*ctx*/) override { }
  virtual void exitFull_edge_sensitive_path_description(SystemVerilogParser::Full_edge_sensitive_path_descriptionContext * /*ctx*/) override { }

  virtual void enterData_source_expression(SystemVerilogParser::Data_source_expressionContext * /*ctx*/) override { }
  virtual void exitData_source_expression(SystemVerilogParser::Data_source_expressionContext * /*ctx*/) override { }

  virtual void enterEdge_identifier(SystemVerilogParser::Edge_identifierContext * /*ctx*/) override { }
  virtual void exitEdge_identifier(SystemVerilogParser::Edge_identifierContext * /*ctx*/) override { }

  virtual void enterState_dependent_path_declaration(SystemVerilogParser::State_dependent_path_declarationContext * /*ctx*/) override { }
  virtual void exitState_dependent_path_declaration(SystemVerilogParser::State_dependent_path_declarationContext * /*ctx*/) override { }

  virtual void enterPolarity_operator(SystemVerilogParser::Polarity_operatorContext * /*ctx*/) override { }
  virtual void exitPolarity_operator(SystemVerilogParser::Polarity_operatorContext * /*ctx*/) override { }

  virtual void enterSystem_timing_check(SystemVerilogParser::System_timing_checkContext * /*ctx*/) override { }
  virtual void exitSystem_timing_check(SystemVerilogParser::System_timing_checkContext * /*ctx*/) override { }

  virtual void enterSetup_timing_check(SystemVerilogParser::Setup_timing_checkContext * /*ctx*/) override { }
  virtual void exitSetup_timing_check(SystemVerilogParser::Setup_timing_checkContext * /*ctx*/) override { }

  virtual void enterHold_timing_check(SystemVerilogParser::Hold_timing_checkContext * /*ctx*/) override { }
  virtual void exitHold_timing_check(SystemVerilogParser::Hold_timing_checkContext * /*ctx*/) override { }

  virtual void enterSetuphold_timing_check(SystemVerilogParser::Setuphold_timing_checkContext * /*ctx*/) override { }
  virtual void exitSetuphold_timing_check(SystemVerilogParser::Setuphold_timing_checkContext * /*ctx*/) override { }

  virtual void enterRecovery_timing_check(SystemVerilogParser::Recovery_timing_checkContext * /*ctx*/) override { }
  virtual void exitRecovery_timing_check(SystemVerilogParser::Recovery_timing_checkContext * /*ctx*/) override { }

  virtual void enterRemoval_timing_check(SystemVerilogParser::Removal_timing_checkContext * /*ctx*/) override { }
  virtual void exitRemoval_timing_check(SystemVerilogParser::Removal_timing_checkContext * /*ctx*/) override { }

  virtual void enterRecrem_timing_check(SystemVerilogParser::Recrem_timing_checkContext * /*ctx*/) override { }
  virtual void exitRecrem_timing_check(SystemVerilogParser::Recrem_timing_checkContext * /*ctx*/) override { }

  virtual void enterSkew_timing_check(SystemVerilogParser::Skew_timing_checkContext * /*ctx*/) override { }
  virtual void exitSkew_timing_check(SystemVerilogParser::Skew_timing_checkContext * /*ctx*/) override { }

  virtual void enterTimeskew_timing_check(SystemVerilogParser::Timeskew_timing_checkContext * /*ctx*/) override { }
  virtual void exitTimeskew_timing_check(SystemVerilogParser::Timeskew_timing_checkContext * /*ctx*/) override { }

  virtual void enterFullskew_timing_check(SystemVerilogParser::Fullskew_timing_checkContext * /*ctx*/) override { }
  virtual void exitFullskew_timing_check(SystemVerilogParser::Fullskew_timing_checkContext * /*ctx*/) override { }

  virtual void enterPeriod_timing_check(SystemVerilogParser::Period_timing_checkContext * /*ctx*/) override { }
  virtual void exitPeriod_timing_check(SystemVerilogParser::Period_timing_checkContext * /*ctx*/) override { }

  virtual void enterWidth_timing_check(SystemVerilogParser::Width_timing_checkContext * /*ctx*/) override { }
  virtual void exitWidth_timing_check(SystemVerilogParser::Width_timing_checkContext * /*ctx*/) override { }

  virtual void enterNochange_timing_check(SystemVerilogParser::Nochange_timing_checkContext * /*ctx*/) override { }
  virtual void exitNochange_timing_check(SystemVerilogParser::Nochange_timing_checkContext * /*ctx*/) override { }

  virtual void enterTimecheck_condition(SystemVerilogParser::Timecheck_conditionContext * /*ctx*/) override { }
  virtual void exitTimecheck_condition(SystemVerilogParser::Timecheck_conditionContext * /*ctx*/) override { }

  virtual void enterControlled_reference_event(SystemVerilogParser::Controlled_reference_eventContext * /*ctx*/) override { }
  virtual void exitControlled_reference_event(SystemVerilogParser::Controlled_reference_eventContext * /*ctx*/) override { }

  virtual void enterData_event(SystemVerilogParser::Data_eventContext * /*ctx*/) override { }
  virtual void exitData_event(SystemVerilogParser::Data_eventContext * /*ctx*/) override { }

  virtual void enterDelayed_data(SystemVerilogParser::Delayed_dataContext * /*ctx*/) override { }
  virtual void exitDelayed_data(SystemVerilogParser::Delayed_dataContext * /*ctx*/) override { }

  virtual void enterDelayed_reference(SystemVerilogParser::Delayed_referenceContext * /*ctx*/) override { }
  virtual void exitDelayed_reference(SystemVerilogParser::Delayed_referenceContext * /*ctx*/) override { }

  virtual void enterEnd_edge_offset(SystemVerilogParser::End_edge_offsetContext * /*ctx*/) override { }
  virtual void exitEnd_edge_offset(SystemVerilogParser::End_edge_offsetContext * /*ctx*/) override { }

  virtual void enterEvent_based_flag(SystemVerilogParser::Event_based_flagContext * /*ctx*/) override { }
  virtual void exitEvent_based_flag(SystemVerilogParser::Event_based_flagContext * /*ctx*/) override { }

  virtual void enterReference_event(SystemVerilogParser::Reference_eventContext * /*ctx*/) override { }
  virtual void exitReference_event(SystemVerilogParser::Reference_eventContext * /*ctx*/) override { }

  virtual void enterRemain_active_flag(SystemVerilogParser::Remain_active_flagContext * /*ctx*/) override { }
  virtual void exitRemain_active_flag(SystemVerilogParser::Remain_active_flagContext * /*ctx*/) override { }

  virtual void enterTimestamp_condition(SystemVerilogParser::Timestamp_conditionContext * /*ctx*/) override { }
  virtual void exitTimestamp_condition(SystemVerilogParser::Timestamp_conditionContext * /*ctx*/) override { }

  virtual void enterStart_edge_offset(SystemVerilogParser::Start_edge_offsetContext * /*ctx*/) override { }
  virtual void exitStart_edge_offset(SystemVerilogParser::Start_edge_offsetContext * /*ctx*/) override { }

  virtual void enterThreshold(SystemVerilogParser::ThresholdContext * /*ctx*/) override { }
  virtual void exitThreshold(SystemVerilogParser::ThresholdContext * /*ctx*/) override { }

  virtual void enterTiming_check_limit(SystemVerilogParser::Timing_check_limitContext * /*ctx*/) override { }
  virtual void exitTiming_check_limit(SystemVerilogParser::Timing_check_limitContext * /*ctx*/) override { }

  virtual void enterTiming_check_event(SystemVerilogParser::Timing_check_eventContext * /*ctx*/) override { }
  virtual void exitTiming_check_event(SystemVerilogParser::Timing_check_eventContext * /*ctx*/) override { }

  virtual void enterControlled_timing_check_event(SystemVerilogParser::Controlled_timing_check_eventContext * /*ctx*/) override { }
  virtual void exitControlled_timing_check_event(SystemVerilogParser::Controlled_timing_check_eventContext * /*ctx*/) override { }

  virtual void enterTiming_check_event_control(SystemVerilogParser::Timing_check_event_controlContext * /*ctx*/) override { }
  virtual void exitTiming_check_event_control(SystemVerilogParser::Timing_check_event_controlContext * /*ctx*/) override { }

  virtual void enterSpecify_terminal_descriptor(SystemVerilogParser::Specify_terminal_descriptorContext * /*ctx*/) override { }
  virtual void exitSpecify_terminal_descriptor(SystemVerilogParser::Specify_terminal_descriptorContext * /*ctx*/) override { }

  virtual void enterEdge_control_specifier(SystemVerilogParser::Edge_control_specifierContext * /*ctx*/) override { }
  virtual void exitEdge_control_specifier(SystemVerilogParser::Edge_control_specifierContext * /*ctx*/) override { }

  virtual void enterEdge_descriptor(SystemVerilogParser::Edge_descriptorContext * /*ctx*/) override { }
  virtual void exitEdge_descriptor(SystemVerilogParser::Edge_descriptorContext * /*ctx*/) override { }

  virtual void enterTiming_check_condition(SystemVerilogParser::Timing_check_conditionContext * /*ctx*/) override { }
  virtual void exitTiming_check_condition(SystemVerilogParser::Timing_check_conditionContext * /*ctx*/) override { }

  virtual void enterScalar_timing_check_condition(SystemVerilogParser::Scalar_timing_check_conditionContext * /*ctx*/) override { }
  virtual void exitScalar_timing_check_condition(SystemVerilogParser::Scalar_timing_check_conditionContext * /*ctx*/) override { }

  virtual void enterScalar_constant(SystemVerilogParser::Scalar_constantContext * /*ctx*/) override { }
  virtual void exitScalar_constant(SystemVerilogParser::Scalar_constantContext * /*ctx*/) override { }

  virtual void enterConcatenation(SystemVerilogParser::ConcatenationContext * /*ctx*/) override { }
  virtual void exitConcatenation(SystemVerilogParser::ConcatenationContext * /*ctx*/) override { }

  virtual void enterConstant_concatenation(SystemVerilogParser::Constant_concatenationContext * /*ctx*/) override { }
  virtual void exitConstant_concatenation(SystemVerilogParser::Constant_concatenationContext * /*ctx*/) override { }

  virtual void enterConstant_multiple_concatenation(SystemVerilogParser::Constant_multiple_concatenationContext * /*ctx*/) override { }
  virtual void exitConstant_multiple_concatenation(SystemVerilogParser::Constant_multiple_concatenationContext * /*ctx*/) override { }

  virtual void enterModule_path_concatenation(SystemVerilogParser::Module_path_concatenationContext * /*ctx*/) override { }
  virtual void exitModule_path_concatenation(SystemVerilogParser::Module_path_concatenationContext * /*ctx*/) override { }

  virtual void enterModule_path_multiple_concatenation(SystemVerilogParser::Module_path_multiple_concatenationContext * /*ctx*/) override { }
  virtual void exitModule_path_multiple_concatenation(SystemVerilogParser::Module_path_multiple_concatenationContext * /*ctx*/) override { }

  virtual void enterMultiple_concatenation(SystemVerilogParser::Multiple_concatenationContext * /*ctx*/) override { }
  virtual void exitMultiple_concatenation(SystemVerilogParser::Multiple_concatenationContext * /*ctx*/) override { }

  virtual void enterStreaming_concatenation(SystemVerilogParser::Streaming_concatenationContext * /*ctx*/) override { }
  virtual void exitStreaming_concatenation(SystemVerilogParser::Streaming_concatenationContext * /*ctx*/) override { }

  virtual void enterStream_operator(SystemVerilogParser::Stream_operatorContext * /*ctx*/) override { }
  virtual void exitStream_operator(SystemVerilogParser::Stream_operatorContext * /*ctx*/) override { }

  virtual void enterSlice_size(SystemVerilogParser::Slice_sizeContext * /*ctx*/) override { }
  virtual void exitSlice_size(SystemVerilogParser::Slice_sizeContext * /*ctx*/) override { }

  virtual void enterStream_concatenation(SystemVerilogParser::Stream_concatenationContext * /*ctx*/) override { }
  virtual void exitStream_concatenation(SystemVerilogParser::Stream_concatenationContext * /*ctx*/) override { }

  virtual void enterStream_expression(SystemVerilogParser::Stream_expressionContext * /*ctx*/) override { }
  virtual void exitStream_expression(SystemVerilogParser::Stream_expressionContext * /*ctx*/) override { }

  virtual void enterArray_range_expression(SystemVerilogParser::Array_range_expressionContext * /*ctx*/) override { }
  virtual void exitArray_range_expression(SystemVerilogParser::Array_range_expressionContext * /*ctx*/) override { }

  virtual void enterEmpty_unpacked_array_concatenation(SystemVerilogParser::Empty_unpacked_array_concatenationContext * /*ctx*/) override { }
  virtual void exitEmpty_unpacked_array_concatenation(SystemVerilogParser::Empty_unpacked_array_concatenationContext * /*ctx*/) override { }

  virtual void enterFunction_subroutine_call(SystemVerilogParser::Function_subroutine_callContext * /*ctx*/) override { }
  virtual void exitFunction_subroutine_call(SystemVerilogParser::Function_subroutine_callContext * /*ctx*/) override { }

  virtual void enterTf_call(SystemVerilogParser::Tf_callContext * /*ctx*/) override { }
  virtual void exitTf_call(SystemVerilogParser::Tf_callContext * /*ctx*/) override { }

  virtual void enterSystem_tf_call(SystemVerilogParser::System_tf_callContext * /*ctx*/) override { }
  virtual void exitSystem_tf_call(SystemVerilogParser::System_tf_callContext * /*ctx*/) override { }

  virtual void enterSubroutine_call(SystemVerilogParser::Subroutine_callContext * /*ctx*/) override { }
  virtual void exitSubroutine_call(SystemVerilogParser::Subroutine_callContext * /*ctx*/) override { }

  virtual void enterList_of_arguments(SystemVerilogParser::List_of_argumentsContext * /*ctx*/) override { }
  virtual void exitList_of_arguments(SystemVerilogParser::List_of_argumentsContext * /*ctx*/) override { }

  virtual void enterMethod_call(SystemVerilogParser::Method_callContext * /*ctx*/) override { }
  virtual void exitMethod_call(SystemVerilogParser::Method_callContext * /*ctx*/) override { }

  virtual void enterMethod_call_body(SystemVerilogParser::Method_call_bodyContext * /*ctx*/) override { }
  virtual void exitMethod_call_body(SystemVerilogParser::Method_call_bodyContext * /*ctx*/) override { }

  virtual void enterBuilt_in_method_call(SystemVerilogParser::Built_in_method_callContext * /*ctx*/) override { }
  virtual void exitBuilt_in_method_call(SystemVerilogParser::Built_in_method_callContext * /*ctx*/) override { }

  virtual void enterArray_manipulation_call(SystemVerilogParser::Array_manipulation_callContext * /*ctx*/) override { }
  virtual void exitArray_manipulation_call(SystemVerilogParser::Array_manipulation_callContext * /*ctx*/) override { }

  virtual void enterRandomize_call(SystemVerilogParser::Randomize_callContext * /*ctx*/) override { }
  virtual void exitRandomize_call(SystemVerilogParser::Randomize_callContext * /*ctx*/) override { }

  virtual void enterMethod_call_root(SystemVerilogParser::Method_call_rootContext * /*ctx*/) override { }
  virtual void exitMethod_call_root(SystemVerilogParser::Method_call_rootContext * /*ctx*/) override { }

  virtual void enterArray_method_name(SystemVerilogParser::Array_method_nameContext * /*ctx*/) override { }
  virtual void exitArray_method_name(SystemVerilogParser::Array_method_nameContext * /*ctx*/) override { }

  virtual void enterInc_or_dec_expression(SystemVerilogParser::Inc_or_dec_expressionContext * /*ctx*/) override { }
  virtual void exitInc_or_dec_expression(SystemVerilogParser::Inc_or_dec_expressionContext * /*ctx*/) override { }

  virtual void enterConstant_expression(SystemVerilogParser::Constant_expressionContext * /*ctx*/) override { }
  virtual void exitConstant_expression(SystemVerilogParser::Constant_expressionContext * /*ctx*/) override { }

  virtual void enterConstant_mintypmax_expression(SystemVerilogParser::Constant_mintypmax_expressionContext * /*ctx*/) override { }
  virtual void exitConstant_mintypmax_expression(SystemVerilogParser::Constant_mintypmax_expressionContext * /*ctx*/) override { }

  virtual void enterConstant_param_expression(SystemVerilogParser::Constant_param_expressionContext * /*ctx*/) override { }
  virtual void exitConstant_param_expression(SystemVerilogParser::Constant_param_expressionContext * /*ctx*/) override { }

  virtual void enterParam_expression(SystemVerilogParser::Param_expressionContext * /*ctx*/) override { }
  virtual void exitParam_expression(SystemVerilogParser::Param_expressionContext * /*ctx*/) override { }

  virtual void enterConstant_range_expression(SystemVerilogParser::Constant_range_expressionContext * /*ctx*/) override { }
  virtual void exitConstant_range_expression(SystemVerilogParser::Constant_range_expressionContext * /*ctx*/) override { }

  virtual void enterConstant_part_select_range(SystemVerilogParser::Constant_part_select_rangeContext * /*ctx*/) override { }
  virtual void exitConstant_part_select_range(SystemVerilogParser::Constant_part_select_rangeContext * /*ctx*/) override { }

  virtual void enterConstant_range(SystemVerilogParser::Constant_rangeContext * /*ctx*/) override { }
  virtual void exitConstant_range(SystemVerilogParser::Constant_rangeContext * /*ctx*/) override { }

  virtual void enterConstant_indexed_range(SystemVerilogParser::Constant_indexed_rangeContext * /*ctx*/) override { }
  virtual void exitConstant_indexed_range(SystemVerilogParser::Constant_indexed_rangeContext * /*ctx*/) override { }

  virtual void enterExpression(SystemVerilogParser::ExpressionContext * /*ctx*/) override { }
  virtual void exitExpression(SystemVerilogParser::ExpressionContext * /*ctx*/) override { }

  virtual void enterValue_range(SystemVerilogParser::Value_rangeContext * /*ctx*/) override { }
  virtual void exitValue_range(SystemVerilogParser::Value_rangeContext * /*ctx*/) override { }

  virtual void enterMintypmax_expression(SystemVerilogParser::Mintypmax_expressionContext * /*ctx*/) override { }
  virtual void exitMintypmax_expression(SystemVerilogParser::Mintypmax_expressionContext * /*ctx*/) override { }

  virtual void enterModule_path_expression(SystemVerilogParser::Module_path_expressionContext * /*ctx*/) override { }
  virtual void exitModule_path_expression(SystemVerilogParser::Module_path_expressionContext * /*ctx*/) override { }

  virtual void enterModule_path_mintypmax_expression(SystemVerilogParser::Module_path_mintypmax_expressionContext * /*ctx*/) override { }
  virtual void exitModule_path_mintypmax_expression(SystemVerilogParser::Module_path_mintypmax_expressionContext * /*ctx*/) override { }

  virtual void enterPart_select_range(SystemVerilogParser::Part_select_rangeContext * /*ctx*/) override { }
  virtual void exitPart_select_range(SystemVerilogParser::Part_select_rangeContext * /*ctx*/) override { }

  virtual void enterIndexed_range(SystemVerilogParser::Indexed_rangeContext * /*ctx*/) override { }
  virtual void exitIndexed_range(SystemVerilogParser::Indexed_rangeContext * /*ctx*/) override { }

  virtual void enterConstant_primary(SystemVerilogParser::Constant_primaryContext * /*ctx*/) override { }
  virtual void exitConstant_primary(SystemVerilogParser::Constant_primaryContext * /*ctx*/) override { }

  virtual void enterModule_path_primary(SystemVerilogParser::Module_path_primaryContext * /*ctx*/) override { }
  virtual void exitModule_path_primary(SystemVerilogParser::Module_path_primaryContext * /*ctx*/) override { }

  virtual void enterPrimary(SystemVerilogParser::PrimaryContext * /*ctx*/) override { }
  virtual void exitPrimary(SystemVerilogParser::PrimaryContext * /*ctx*/) override { }

  virtual void enterClass_qualifier(SystemVerilogParser::Class_qualifierContext * /*ctx*/) override { }
  virtual void exitClass_qualifier(SystemVerilogParser::Class_qualifierContext * /*ctx*/) override { }

  virtual void enterRange_expression(SystemVerilogParser::Range_expressionContext * /*ctx*/) override { }
  virtual void exitRange_expression(SystemVerilogParser::Range_expressionContext * /*ctx*/) override { }

  virtual void enterPrimary_literal(SystemVerilogParser::Primary_literalContext * /*ctx*/) override { }
  virtual void exitPrimary_literal(SystemVerilogParser::Primary_literalContext * /*ctx*/) override { }

  virtual void enterImplicit_class_handle(SystemVerilogParser::Implicit_class_handleContext * /*ctx*/) override { }
  virtual void exitImplicit_class_handle(SystemVerilogParser::Implicit_class_handleContext * /*ctx*/) override { }

  virtual void enterBit_select(SystemVerilogParser::Bit_selectContext * /*ctx*/) override { }
  virtual void exitBit_select(SystemVerilogParser::Bit_selectContext * /*ctx*/) override { }

  virtual void enterSelect_(SystemVerilogParser::Select_Context * /*ctx*/) override { }
  virtual void exitSelect_(SystemVerilogParser::Select_Context * /*ctx*/) override { }

  virtual void enterNonrange_select(SystemVerilogParser::Nonrange_selectContext * /*ctx*/) override { }
  virtual void exitNonrange_select(SystemVerilogParser::Nonrange_selectContext * /*ctx*/) override { }

  virtual void enterConstant_bit_select(SystemVerilogParser::Constant_bit_selectContext * /*ctx*/) override { }
  virtual void exitConstant_bit_select(SystemVerilogParser::Constant_bit_selectContext * /*ctx*/) override { }

  virtual void enterConstant_select(SystemVerilogParser::Constant_selectContext * /*ctx*/) override { }
  virtual void exitConstant_select(SystemVerilogParser::Constant_selectContext * /*ctx*/) override { }

  virtual void enterConstant_let_expression(SystemVerilogParser::Constant_let_expressionContext * /*ctx*/) override { }
  virtual void exitConstant_let_expression(SystemVerilogParser::Constant_let_expressionContext * /*ctx*/) override { }

  virtual void enterNet_lvalue(SystemVerilogParser::Net_lvalueContext * /*ctx*/) override { }
  virtual void exitNet_lvalue(SystemVerilogParser::Net_lvalueContext * /*ctx*/) override { }

  virtual void enterVariable_lvalue(SystemVerilogParser::Variable_lvalueContext * /*ctx*/) override { }
  virtual void exitVariable_lvalue(SystemVerilogParser::Variable_lvalueContext * /*ctx*/) override { }

  virtual void enterNonrange_variable_lvalue(SystemVerilogParser::Nonrange_variable_lvalueContext * /*ctx*/) override { }
  virtual void exitNonrange_variable_lvalue(SystemVerilogParser::Nonrange_variable_lvalueContext * /*ctx*/) override { }

  virtual void enterUnary_operator(SystemVerilogParser::Unary_operatorContext * /*ctx*/) override { }
  virtual void exitUnary_operator(SystemVerilogParser::Unary_operatorContext * /*ctx*/) override { }

  virtual void enterBinary_operator(SystemVerilogParser::Binary_operatorContext * /*ctx*/) override { }
  virtual void exitBinary_operator(SystemVerilogParser::Binary_operatorContext * /*ctx*/) override { }

  virtual void enterInc_or_dec_operator(SystemVerilogParser::Inc_or_dec_operatorContext * /*ctx*/) override { }
  virtual void exitInc_or_dec_operator(SystemVerilogParser::Inc_or_dec_operatorContext * /*ctx*/) override { }

  virtual void enterUnary_module_path_operator(SystemVerilogParser::Unary_module_path_operatorContext * /*ctx*/) override { }
  virtual void exitUnary_module_path_operator(SystemVerilogParser::Unary_module_path_operatorContext * /*ctx*/) override { }

  virtual void enterBinary_module_path_operator(SystemVerilogParser::Binary_module_path_operatorContext * /*ctx*/) override { }
  virtual void exitBinary_module_path_operator(SystemVerilogParser::Binary_module_path_operatorContext * /*ctx*/) override { }

  virtual void enterNumber(SystemVerilogParser::NumberContext * /*ctx*/) override { }
  virtual void exitNumber(SystemVerilogParser::NumberContext * /*ctx*/) override { }

  virtual void enterIntegral_number(SystemVerilogParser::Integral_numberContext * /*ctx*/) override { }
  virtual void exitIntegral_number(SystemVerilogParser::Integral_numberContext * /*ctx*/) override { }

  virtual void enterAttribute_instance(SystemVerilogParser::Attribute_instanceContext * /*ctx*/) override { }
  virtual void exitAttribute_instance(SystemVerilogParser::Attribute_instanceContext * /*ctx*/) override { }

  virtual void enterAttr_spec(SystemVerilogParser::Attr_specContext * /*ctx*/) override { }
  virtual void exitAttr_spec(SystemVerilogParser::Attr_specContext * /*ctx*/) override { }

  virtual void enterHierarchical_identifier(SystemVerilogParser::Hierarchical_identifierContext * /*ctx*/) override { }
  virtual void exitHierarchical_identifier(SystemVerilogParser::Hierarchical_identifierContext * /*ctx*/) override { }

  virtual void enterIdentifier(SystemVerilogParser::IdentifierContext * /*ctx*/) override { }
  virtual void exitIdentifier(SystemVerilogParser::IdentifierContext * /*ctx*/) override { }

  virtual void enterPackage_scope(SystemVerilogParser::Package_scopeContext * /*ctx*/) override { }
  virtual void exitPackage_scope(SystemVerilogParser::Package_scopeContext * /*ctx*/) override { }

  virtual void enterPs_identifier(SystemVerilogParser::Ps_identifierContext * /*ctx*/) override { }
  virtual void exitPs_identifier(SystemVerilogParser::Ps_identifierContext * /*ctx*/) override { }

  virtual void enterPs_or_hierarchical_array_identifier(SystemVerilogParser::Ps_or_hierarchical_array_identifierContext * /*ctx*/) override { }
  virtual void exitPs_or_hierarchical_array_identifier(SystemVerilogParser::Ps_or_hierarchical_array_identifierContext * /*ctx*/) override { }

  virtual void enterPs_or_hierarchical_identifier(SystemVerilogParser::Ps_or_hierarchical_identifierContext * /*ctx*/) override { }
  virtual void exitPs_or_hierarchical_identifier(SystemVerilogParser::Ps_or_hierarchical_identifierContext * /*ctx*/) override { }

  virtual void enterPs_parameter_identifier(SystemVerilogParser::Ps_parameter_identifierContext * /*ctx*/) override { }
  virtual void exitPs_parameter_identifier(SystemVerilogParser::Ps_parameter_identifierContext * /*ctx*/) override { }

  virtual void enterPs_type_identifier(SystemVerilogParser::Ps_type_identifierContext * /*ctx*/) override { }
  virtual void exitPs_type_identifier(SystemVerilogParser::Ps_type_identifierContext * /*ctx*/) override { }

  virtual void enterSystem_tf_identifier(SystemVerilogParser::System_tf_identifierContext * /*ctx*/) override { }
  virtual void exitSystem_tf_identifier(SystemVerilogParser::System_tf_identifierContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

