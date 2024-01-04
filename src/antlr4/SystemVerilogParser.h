
// Generated from SystemVerilogParser.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"




class  SystemVerilogParser : public antlr4::Parser {
public:
  enum {
    ACCEPT_ON = 1, ALIAS = 2, ALWAYS = 3, ALWAYS_COMB = 4, ALWAYS_FF = 5, 
    ALWAYS_LATCH = 6, AND = 7, ASSERT = 8, ASSIGN = 9, ASSUME = 10, AUTOMATIC = 11, 
    BEFORE = 12, BEGIN = 13, BIND = 14, BINS = 15, BINSOF = 16, BIT = 17, 
    BREAK = 18, BUF = 19, BUFIF0 = 20, BUFIF1 = 21, BYTE = 22, CASE = 23, 
    CASEX = 24, CASEZ = 25, CELL = 26, CHANDLE = 27, CHECKER = 28, CLASS = 29, 
    CLOCKING = 30, CMOS = 31, CONFIG = 32, CONST = 33, CONSTRAINT = 34, 
    CONTEXT = 35, CONTINUE = 36, COVER = 37, COVERGROUP = 38, COVERPOINT = 39, 
    CROSS = 40, DEASSIGN = 41, DEFAULT = 42, DEFPARAM = 43, DESIGN = 44, 
    DISABLE = 45, DIST = 46, DO = 47, DPI = 48, DPI_C = 49, EDGE = 50, ELSE = 51, 
    END = 52, ENDCASE = 53, ENDCHECKER = 54, ENDCLASS = 55, ENDCLOCKING = 56, 
    ENDCONFIG = 57, ENDFUNCTION = 58, ENDGENERATE = 59, ENDGROUP = 60, ENDINTERFACE = 61, 
    ENDMODULE = 62, ENDPACKAGE = 63, ENDPRIMITIVE = 64, ENDPROGRAM = 65, 
    ENDPROPERTY = 66, ENDSPECIFY = 67, ENDSEQUENCE = 68, ENDTABLE = 69, 
    ENDTASK = 70, ENUM = 71, EVENT = 72, EVENTUALLY = 73, EXPECT = 74, EXPORT = 75, 
    EXTENDS = 76, EXTERN = 77, FINAL = 78, FIRST_MATCH = 79, FOR = 80, FORCE = 81, 
    FOREACH = 82, FOREVER = 83, FORK = 84, FORKJOIN = 85, FUNCTION = 86, 
    GENERATE = 87, GENVAR = 88, GLOBAL = 89, HIGHZ0 = 90, HIGHZ1 = 91, IF = 92, 
    IFF = 93, IFNONE = 94, IGNORE_BINS = 95, ILLEGAL_BINS = 96, IMPLEMENTS = 97, 
    IMPLIES = 98, IMPORT = 99, INCDIR = 100, DASH_INCDIR = 101, INCLUDE = 102, 
    INITIAL = 103, INOUT = 104, INPUT = 105, INSIDE = 106, INSTANCE = 107, 
    INT = 108, INTEGER = 109, INTERCONNECT = 110, INTERFACE = 111, INTERSECT = 112, 
    JOIN = 113, JOIN_ANY = 114, JOIN_NONE = 115, LARGE = 116, LET = 117, 
    LIBLIST = 118, LIBRARY = 119, LOCAL = 120, LOCALPARAM = 121, LOGIC = 122, 
    LONGINT = 123, MACROMODULE = 124, MATCHES = 125, MEDIUM = 126, MODPORT = 127, 
    MODULE = 128, NAND = 129, NEGEDGE = 130, NETTYPE = 131, NEW = 132, NEXTTIME = 133, 
    NMOS = 134, NOR = 135, NOSHOWCANCELLED = 136, NOT = 137, NOTIF0 = 138, 
    NOTIF1 = 139, NULL_ = 140, OR = 141, OUTPUT = 142, PACKAGE = 143, PACKED = 144, 
    PARAMETER = 145, PMOS = 146, POSEDGE = 147, PRIMITIVE = 148, PRIORITY = 149, 
    PROGRAM = 150, PROPERTY = 151, PROTECTED = 152, PULL0 = 153, PULL1 = 154, 
    PULLDOWN = 155, PULLUP = 156, PULSESTYLE_ONDETECT = 157, PULSESTYLE_ONEVENT = 158, 
    PURE = 159, RAND = 160, RANDC = 161, RANDCASE = 162, RANDOMIZE = 163, 
    RANDSEQUENCE = 164, RCMOS = 165, REAL = 166, REALTIME = 167, REF = 168, 
    REG = 169, REJECT_ON = 170, RELEASE = 171, REPEAT = 172, RESTRICT = 173, 
    RETURN = 174, RNMOS = 175, RPMOS = 176, RTRAN = 177, RTRANIF0 = 178, 
    RTRANIF1 = 179, S_ALWAYS = 180, S_EVENTUALLY = 181, S_NEXTTIME = 182, 
    S_UNTIL = 183, S_UNTIL_WITH = 184, SCALARED = 185, SEQUENCE = 186, SHORTINT = 187, 
    SHORTREAL = 188, SHOWCANCELLED = 189, SIGNED = 190, SMALL = 191, SOFT = 192, 
    SOLVE = 193, SPECIFY = 194, SPECPARAM = 195, STATIC = 196, STD = 197, 
    STRING = 198, STRONG = 199, STRONG0 = 200, STRONG1 = 201, STRUCT = 202, 
    SUPER = 203, SUPPLY0 = 204, SUPPLY1 = 205, SYNC_ACCEPT_ON = 206, SYNC_REJECT_ON = 207, 
    TABLE = 208, TAGGED = 209, TASK = 210, THIS = 211, THROUGHOUT = 212, 
    TIME = 213, TIMEPRECISION = 214, TIMEUNIT = 215, TRAN = 216, TRANIF0 = 217, 
    TRANIF1 = 218, TRI = 219, TRI0 = 220, TRI1 = 221, TRIAND = 222, TRIOR = 223, 
    TRIREG = 224, TYPE = 225, TYPEDEF = 226, UNION = 227, UNIQUE = 228, 
    UNIQUE0 = 229, UNSIGNED = 230, UNTIL = 231, UNTIL_WITH = 232, UNTYPED = 233, 
    USE = 234, UWIRE = 235, VAR = 236, VECTORED = 237, VIRTUAL = 238, VOID = 239, 
    WAIT = 240, WAIT_ORDER = 241, WAND = 242, WEAK = 243, WEAK0 = 244, WEAK1 = 245, 
    WHILE = 246, WILDCARD = 247, WIRE = 248, WITH = 249, WITHIN = 250, WOR = 251, 
    XNOR = 252, XOR = 253, PLUS = 254, PLUSCOLON = 255, PLUSPLUS = 256, 
    MINUS = 257, MINUSCOLON = 258, MINUSMINUS = 259, STAR = 260, SLASH = 261, 
    BSLASH = 262, PERCENT = 263, EQ = 264, EQEQ = 265, NEQ = 266, EQEQEQ = 267, 
    NEQEQ = 268, EQEQQ = 269, NEQQ = 270, LT = 271, LTEQ = 272, GT = 273, 
    GTEQ = 274, LTLTEQ = 275, GTGTEQ = 276, LTLTLTEQ = 277, GTGTGTEQ = 278, 
    CARROTEQ = 279, PERCENTEQ = 280, PLUSEQ = 281, MINUSEQ = 282, STAREQ = 283, 
    SLASHEQ = 284, AMPEQ = 285, PIPEEQ = 286, AMPAMP = 287, AMPAMPAMP = 288, 
    PIPEPIPE = 289, STARSTAR = 290, TILDEPIPE = 291, TILDEAMP = 292, EXCLAM = 293, 
    AMP = 294, PIPE = 295, CARROT = 296, CARROTTILDE = 297, TILDECARROT = 298, 
    GTGT = 299, LTLT = 300, GTGTGT = 301, LTLTLT = 302, RARROW = 303, RARROWARROW = 304, 
    DARROW = 305, TILDE = 306, DOLLAR = 307, STARGT = 308, EQGT = 309, COLONEQ = 310, 
    DOTSTAR = 311, PIPEARROW = 312, PIPEEQARROW = 313, HASHMINUSHASH = 314, 
    HASHEQHASH = 315, COLONSLASH = 316, STARCOLONSTAR = 317, COLONCOLON = 318, 
    COLON = 319, SEMI = 320, COMMA = 321, DOT = 322, QUESTION = 323, QUOTE = 324, 
    DQUOTE = 325, HASH = 326, HASHHASH = 327, AT = 328, ATAT = 329, LPAREN = 330, 
    RPAREN = 331, LBRACK = 332, RBRACK = 333, LBRACE = 334, RBRACE = 335, 
    ERROR_SYS_TASK = 336, FATAL_SYS_TASK = 337, INFO_SYS_TASK = 338, WARNING_SYS_TASK = 339, 
    SETUP_SYS_TASK = 340, HOLD_SYS_TASK = 341, SETUP_HOLD_SYS_TASK = 342, 
    RECOVERY_SYS_TASK = 343, REMOVAL_SYS_TASK = 344, REC_REM_SYS_TASK = 345, 
    SKEW_SYS_TASK = 346, TIME_SKEW_SYS_TASK = 347, FULL_SKEW_SYS_TASK = 348, 
    PERIOD_SYS_TASK = 349, WIDTH_SYS_TASK = 350, NO_CHANGE_SYS_TASK = 351, 
    ROOT_DOT_SYS_TASK = 352, UNIT_SYS_TASK = 353, DECIMAL_NUMBER = 354, 
    BINARY_NUMBER = 355, OCTAL_NUMBER = 356, HEX_NUMBER = 357, REAL_NUMBER = 358, 
    UNBASED_UNSIZED_LITERAL = 359, STRING_LITERAL = 360, TIME_LITERAL = 361, 
    FILE_PATH_SPEC = 362, ESCAPED_IDENTIFIER = 363, SIMPLE_IDENTIFIER = 364, 
    SYSTEM_TF_IDENTIFIER = 365, WHITE_SPACE = 366, ZERO_OR_ONE_Z_OR_X = 367, 
    ONE_STEP = 368, PATH_PULSE = 369, OPTION_DOT = 370, TYPE_OPTION_DOT = 371, 
    SAMPLE = 372, OUTPUT_SYMBOL = 373, EXTRA_LEVEL_SYMBOL = 374, EDGE_SYMBOL = 375
  };

  enum {
    RuleLibrary_text = 0, RuleLibrary_description = 1, RuleLibrary_declaration = 2, 
    RuleInclude_statement = 3, RuleSource_text = 4, RuleDescription = 5, 
    RuleModule_header = 6, RuleModule_nonansi_header = 7, RuleModule_ansi_header = 8, 
    RuleModule_declaration = 9, RuleModule_keyword = 10, RuleInterface_header = 11, 
    RuleInterface_nonansi_header = 12, RuleInterface_ansi_header = 13, RuleInterface_declaration = 14, 
    RuleProgram_header = 15, RuleProgram_nonansi_header = 16, RuleProgram_ansi_header = 17, 
    RuleProgram_declaration = 18, RuleChecker_declaration = 19, RuleClass_declaration = 20, 
    RuleInterface_class_type = 21, RuleInterface_class_declaration = 22, 
    RuleInterface_class_item = 23, RuleInterface_class_method = 24, RulePackage_declaration = 25, 
    RuleTimeunits_declaration = 26, RuleParameter_port_list = 27, RuleParameter_port_declaration = 28, 
    RuleList_of_ports = 29, RuleList_of_port_declarations = 30, RulePort_declaration = 31, 
    RulePort = 32, RulePort_expression = 33, RulePort_reference = 34, RulePort_direction = 35, 
    RuleNet_port_header = 36, RuleVariable_port_header = 37, RuleInterface_port_header = 38, 
    RuleAnsi_port_declaration = 39, RuleElaboration_system_task = 40, RuleFinish_number = 41, 
    RuleModule_common_item = 42, RuleModule_item = 43, RuleModule_or_generate_item = 44, 
    RuleModule_or_generate_item_declaration = 45, RuleNon_port_module_item = 46, 
    RuleParameter_override = 47, RuleBind_directive = 48, RuleBind_target_scope = 49, 
    RuleBind_target_instance = 50, RuleBind_target_instance_list = 51, RuleBind_instantiation = 52, 
    RuleConfig_declaration = 53, RuleDesign_statement = 54, RuleConfig_rule_statement = 55, 
    RuleDefault_clause = 56, RuleInst_clause = 57, RuleInst_name = 58, RuleCell_clause = 59, 
    RuleLiblist_clause = 60, RuleUse_clause = 61, RuleInterface_or_generate_item = 62, 
    RuleExtern_tf_declaration = 63, RuleInterface_item = 64, RuleNon_port_interface_item = 65, 
    RuleProgram_item = 66, RuleNon_port_program_item = 67, RuleProgram_generate_item = 68, 
    RuleChecker_port_list = 69, RuleChecker_port_item = 70, RuleChecker_port_direction = 71, 
    RuleChecker_or_generate_item = 72, RuleChecker_or_generate_item_declaration = 73, 
    RuleChecker_generate_item = 74, RuleClass_item = 75, RuleClass_property = 76, 
    RuleClass_method = 77, RuleClass_constructor_prototype = 78, RuleClass_constraint = 79, 
    RuleClass_item_qualifier = 80, RuleProperty_qualifier = 81, RuleRandom_qualifier = 82, 
    RuleMethod_qualifier = 83, RuleMethod_prototype = 84, RuleClass_constructor_declaration = 85, 
    RuleConstraint_declaration = 86, RuleConstraint_block = 87, RuleConstraint_block_item = 88, 
    RuleSolve_before_list = 89, RuleConstraint_primary = 90, RuleConstraint_expression = 91, 
    RuleUniqueness_constraint = 92, RuleConstraint_set = 93, RuleDist_list = 94, 
    RuleDist_item = 95, RuleDist_weight = 96, RuleConstraint_prototype = 97, 
    RuleConstraint_prototype_qualifier = 98, RuleExtern_constraint_declaration = 99, 
    RuleIdentifier_list = 100, RulePackage_item = 101, RulePackage_or_generate_item_declaration = 102, 
    RuleAnonymous_program = 103, RuleAnonymous_program_item = 104, RuleLocal_parameter_declaration = 105, 
    RuleParameter_declaration = 106, RuleSpecparam_declaration = 107, RuleInout_declaration = 108, 
    RuleInput_declaration = 109, RuleOutput_declaration = 110, RuleInterface_port_declaration = 111, 
    RuleRef_declaration = 112, RuleData_declaration = 113, RulePackage_import_declaration = 114, 
    RulePackage_import_item = 115, RulePackage_export_declaration = 116, 
    RuleGenvar_declaration = 117, RuleNet_declaration = 118, RuleType_declaration = 119, 
    RuleNet_type_declaration = 120, RuleLifetime = 121, RuleData_type = 122, 
    RuleData_type_or_implicit = 123, RuleImplicit_data_type = 124, RuleEnum_base_type = 125, 
    RuleEnum_name_declaration = 126, RuleClass_scope = 127, RuleClass_type = 128, 
    RuleInteger_type = 129, RuleInteger_atom_type = 130, RuleInteger_vector_type = 131, 
    RuleNon_integer_type = 132, RuleNet_type = 133, RuleNet_port_type = 134, 
    RuleVariable_port_type = 135, RuleVar_data_type = 136, RuleSigning = 137, 
    RuleSimple_type = 138, RuleStruct_union_member = 139, RuleData_type_or_void = 140, 
    RuleStruct_union = 141, RuleType_reference = 142, RuleDrive_strength = 143, 
    RuleStrength0 = 144, RuleStrength1 = 145, RuleCharge_strength = 146, 
    RuleDelay3 = 147, RuleDelay2 = 148, RuleDelay_value = 149, RuleList_of_defparam_assignments = 150, 
    RuleList_of_genvar_identifiers = 151, RuleList_of_interface_identifiers = 152, 
    RuleList_of_net_decl_assignments = 153, RuleList_of_param_assignments = 154, 
    RuleList_of_port_identifiers = 155, RuleList_of_udp_port_identifiers = 156, 
    RuleList_of_specparam_assignments = 157, RuleList_of_tf_variable_identifiers = 158, 
    RuleList_of_type_assignments = 159, RuleList_of_variable_decl_assignments = 160, 
    RuleList_of_variable_identifiers = 161, RuleList_of_variable_port_identifiers = 162, 
    RuleDefparam_assignment = 163, RuleNet_decl_assignment = 164, RuleParam_assignment = 165, 
    RuleSpecparam_assignment = 166, RuleType_assignment = 167, RulePulse_control_specparam = 168, 
    RuleError_limit_value = 169, RuleReject_limit_value = 170, RuleLimit_value = 171, 
    RuleVariable_decl_assignment = 172, RuleClass_new = 173, RuleDynamic_array_new = 174, 
    RuleUnpacked_dimension = 175, RulePacked_dimension = 176, RuleAssociative_dimension = 177, 
    RuleVariable_dimension = 178, RuleQueue_dimension = 179, RuleUnsized_dimension = 180, 
    RuleFunction_data_type_or_implicit = 181, RuleFunction_declaration = 182, 
    RuleFunction_body_declaration = 183, RuleFunction_prototype = 184, RuleDpi_import_export = 185, 
    RuleDpi_spec_string = 186, RuleDpi_function_import_property = 187, RuleDpi_task_import_property = 188, 
    RuleDpi_function_proto = 189, RuleDpi_task_proto = 190, RuleTask_declaration = 191, 
    RuleTask_body_declaration = 192, RuleTf_item_declaration = 193, RuleTf_port_list = 194, 
    RuleTf_port_item = 195, RuleTf_port_direction = 196, RuleTf_port_declaration = 197, 
    RuleTask_prototype = 198, RuleBlock_item_declaration = 199, RuleModport_declaration = 200, 
    RuleModport_item = 201, RuleModport_ports_declaration = 202, RuleModport_clocking_declaration = 203, 
    RuleModport_simple_ports_declaration = 204, RuleModport_simple_port = 205, 
    RuleModport_tf_ports_declaration = 206, RuleModport_tf_port = 207, RuleImport_export = 208, 
    RuleConcurrent_assertion_item = 209, RuleConcurrent_assertion_statement = 210, 
    RuleAssert_property_statement = 211, RuleAssume_property_statement = 212, 
    RuleCover_property_statement = 213, RuleExpect_property_statement = 214, 
    RuleCover_sequence_statement = 215, RuleRestrict_property_statement = 216, 
    RuleProperty_instance = 217, RuleProperty_list_of_arguments = 218, RuleProperty_actual_arg = 219, 
    RuleAssertion_item_declaration = 220, RuleProperty_declaration = 221, 
    RuleProperty_port_list = 222, RuleProperty_port_item = 223, RuleProperty_formal_type = 224, 
    RuleProperty_spec = 225, RuleProperty_expr = 226, RuleProperty_case_item = 227, 
    RuleSequence_declaration = 228, RuleSequence_port_list = 229, RuleSequence_port_item = 230, 
    RuleSequence_lvar_port_direction = 231, RuleSequence_formal_type = 232, 
    RuleSequence_expr = 233, RuleCycle_delay_range = 234, RuleSequence_method_call = 235, 
    RuleSequence_match_item = 236, RuleSequence_instance = 237, RuleSequence_list_of_arguments = 238, 
    RuleSequence_actual_arg = 239, RuleBoolean_abbrev = 240, RuleSequence_abbrev = 241, 
    RuleConsecutive_repetition = 242, RuleNon_consecutive_repetition = 243, 
    RuleGoto_repetition = 244, RuleConst_or_range_expression = 245, RuleCycle_delay_const_range_expression = 246, 
    RuleExpression_or_dist = 247, RuleAssertion_variable_declaration = 248, 
    RuleCovergroup_declaration = 249, RuleCoverage_spec_or_option = 250, 
    RuleCoverage_option = 251, RuleCoverage_spec = 252, RuleCoverage_event = 253, 
    RuleBlock_event_expression = 254, RuleHierarchical_btf_identifier = 255, 
    RuleCover_point = 256, RuleBins_or_empty = 257, RuleBins_or_options = 258, 
    RuleBins_keyword = 259, RuleTrans_list = 260, RuleTrans_set = 261, RuleTrans_range_list = 262, 
    RuleTrans_item = 263, RuleRepeat_range = 264, RuleCover_cross = 265, 
    RuleList_of_cross_items = 266, RuleCross_item = 267, RuleCross_body = 268, 
    RuleCross_body_item = 269, RuleBins_selection_or_option = 270, RuleBins_selection = 271, 
    RuleSelect_expression = 272, RuleSelect_condition = 273, RuleBins_expression = 274, 
    RuleCovergroup_range_list = 275, RuleCovergroup_value_range = 276, RuleWith_covergroup_expression = 277, 
    RuleSet_covergroup_expression = 278, RuleInteger_covergroup_expression = 279, 
    RuleCross_set_expression = 280, RuleCovergroup_expression = 281, RuleLet_declaration = 282, 
    RuleLet_identifier = 283, RuleLet_port_list = 284, RuleLet_port_item = 285, 
    RuleLet_formal_type = 286, RuleLet_expression = 287, RuleLet_list_of_arguments = 288, 
    RuleLet_actual_arg = 289, RuleGate_instantiation = 290, RuleCmos_switch_instance = 291, 
    RuleEnable_gate_instance = 292, RuleMos_switch_instance = 293, RuleN_input_gate_instance = 294, 
    RuleN_output_gate_instance = 295, RulePass_switch_instance = 296, RulePass_enable_switch_instance = 297, 
    RulePull_gate_instance = 298, RulePulldown_strength = 299, RulePullup_strength = 300, 
    RuleEnable_terminal = 301, RuleInout_terminal = 302, RuleInput_terminal = 303, 
    RuleNcontrol_terminal = 304, RuleOutput_terminal = 305, RulePcontrol_terminal = 306, 
    RuleCmos_switchtype = 307, RuleEnable_gatetype = 308, RuleMos_switchtype = 309, 
    RuleN_input_gatetype = 310, RuleN_output_gatetype = 311, RulePass_en_switchtype = 312, 
    RulePass_switchtype = 313, RuleModule_instantiation = 314, RuleParameter_value_assignment = 315, 
    RuleList_of_parameter_assignments = 316, RuleOrdered_parameter_assignment = 317, 
    RuleNamed_parameter_assignment = 318, RuleHierarchical_instance = 319, 
    RuleName_of_instance = 320, RuleList_of_port_connections = 321, RuleOrdered_port_connection = 322, 
    RuleNamed_port_connection = 323, RuleInterface_instantiation = 324, 
    RuleProgram_instantiation = 325, RuleChecker_instantiation = 326, RuleList_of_checker_port_connections = 327, 
    RuleOrdered_checker_port_connection = 328, RuleNamed_checker_port_connection = 329, 
    RuleGenerate_region = 330, RuleLoop_generate_construct = 331, RuleGenvar_initialization = 332, 
    RuleGenvar_iteration = 333, RuleConditional_generate_construct = 334, 
    RuleIf_generate_construct = 335, RuleCase_generate_construct = 336, 
    RuleCase_generate_item = 337, RuleGenerate_block = 338, RuleGenerate_item = 339, 
    RuleUdp_declaration_common = 340, RuleUdp_nonansi_ports = 341, RuleUdp_ansi_ports = 342, 
    RuleUdp_declaration = 343, RuleUdp_port_list = 344, RuleUdp_declaration_port_list = 345, 
    RuleUdp_port_declaration = 346, RuleUdp_output_declaration = 347, RuleUdp_input_declaration = 348, 
    RuleUdp_reg_declaration = 349, RuleUdp_body = 350, RuleCombinational_body = 351, 
    RuleCombinational_entry = 352, RuleSequential_body = 353, RuleUdp_initial_statement = 354, 
    RuleInit_val = 355, RuleSequential_entry = 356, RuleSeq_input_list = 357, 
    RuleLevel_input_list = 358, RuleEdge_input_list = 359, RuleEdge_indicator = 360, 
    RuleCurrent_state = 361, RuleNext_state = 362, RuleLevel_symbol = 363, 
    RuleUdp_instantiation = 364, RuleUdp_instance = 365, RuleContinuous_assign = 366, 
    RuleList_of_net_assignments = 367, RuleList_of_variable_assignments = 368, 
    RuleNet_alias = 369, RuleNet_assignment = 370, RuleInitial_construct = 371, 
    RuleAlways_construct = 372, RuleAlways_keyword = 373, RuleFinal_construct = 374, 
    RuleBlocking_assignment = 375, RuleOperator_assignment = 376, RuleAssignment_operator = 377, 
    RuleNonblocking_assignment = 378, RuleProcedural_continuous_assignment = 379, 
    RuleVariable_assignment = 380, RuleAction_block = 381, RuleSeq_block = 382, 
    RulePar_block = 383, RuleJoin_keyword = 384, RuleStatement_or_null = 385, 
    RuleStatement = 386, RuleStatement_item = 387, RuleFunction_statement = 388, 
    RuleFunction_statement_or_null = 389, RuleVariable_identifier_list = 390, 
    RuleProcedural_timing_control_statement = 391, RuleDelay_or_event_control = 392, 
    RuleDelay_control = 393, RuleEvent_control = 394, RuleEvent_expression = 395, 
    RuleProcedural_timing_control = 396, RuleJump_statement = 397, RuleWait_statement = 398, 
    RuleEvent_trigger = 399, RuleDisable_statement = 400, RuleConditional_statement = 401, 
    RuleUnique_priority = 402, RuleCond_predicate = 403, RuleExpression_or_cond_pattern = 404, 
    RuleCond_pattern = 405, RuleCase_statement = 406, RuleCase_keyword = 407, 
    RuleCase_expression = 408, RuleCase_item = 409, RuleCase_pattern_item = 410, 
    RuleCase_inside_item = 411, RuleCase_item_expression = 412, RuleRandcase_statement = 413, 
    RuleRandcase_item = 414, RuleOpen_range_list = 415, RuleOpen_value_range = 416, 
    RulePattern = 417, RuleAssignment_pattern = 418, RuleStructure_pattern_key = 419, 
    RuleArray_pattern_key = 420, RuleAssignment_pattern_key = 421, RuleAssignment_pattern_expression = 422, 
    RuleAssignment_pattern_expression_type = 423, RuleConstant_assignment_pattern_expression = 424, 
    RuleAssignment_pattern_net_lvalue = 425, RuleAssignment_pattern_variable_lvalue = 426, 
    RuleLoop_statement = 427, RuleFor_initialization = 428, RuleFor_variable_declaration = 429, 
    RuleFor_step = 430, RuleFor_step_assignment = 431, RuleLoop_variables = 432, 
    RuleSubroutine_call_statement = 433, RuleAssertion_item = 434, RuleDeferred_immediate_assertion_item = 435, 
    RuleProcedural_assertion_statement = 436, RuleImmediate_assertion_statement = 437, 
    RuleSimple_immediate_assertion_statement = 438, RuleSimple_immediate_assert_statement = 439, 
    RuleSimple_immediate_assume_statement = 440, RuleSimple_immediate_cover_statement = 441, 
    RuleDeferred_immediate_assertion_statement = 442, RuleDeferred_immediate_assert_statement = 443, 
    RuleDeferred_immediate_assume_statement = 444, RuleDeferred_immediate_cover_statement = 445, 
    RuleClocking_declaration = 446, RuleClocking_event = 447, RuleClocking_item = 448, 
    RuleDefault_skew = 449, RuleClocking_direction = 450, RuleList_of_clocking_decl_assign = 451, 
    RuleClocking_decl_assign = 452, RuleClocking_skew = 453, RuleClocking_drive = 454, 
    RuleCycle_delay = 455, RuleClockvar = 456, RuleClockvar_expression = 457, 
    RuleRandsequence_statement = 458, RuleProduction = 459, RuleRs_rule = 460, 
    RuleRs_production_list = 461, RuleWeight_specification = 462, RuleRs_code_block = 463, 
    RuleRs_prod = 464, RuleProduction_item = 465, RuleRs_if_else = 466, 
    RuleRs_repeat = 467, RuleRs_case = 468, RuleRs_case_item = 469, RuleSpecify_block = 470, 
    RuleSpecify_item = 471, RulePulsestyle_declaration = 472, RuleShowcancelled_declaration = 473, 
    RulePath_declaration = 474, RuleSimple_path_declaration = 475, RuleParallel_path_description = 476, 
    RuleFull_path_description = 477, RuleList_of_path_inputs = 478, RuleList_of_path_outputs = 479, 
    RuleSpecify_input_terminal_descriptor = 480, RuleSpecify_output_terminal_descriptor = 481, 
    RuleInput_identifier = 482, RuleOutput_identifier = 483, RulePath_delay_value = 484, 
    RuleList_of_path_delay_expressions = 485, RulePath_delay_expression = 486, 
    RuleEdge_sensitive_path_declaration = 487, RuleParallel_edge_sensitive_path_description = 488, 
    RuleFull_edge_sensitive_path_description = 489, RuleData_source_expression = 490, 
    RuleEdge_identifier = 491, RuleState_dependent_path_declaration = 492, 
    RulePolarity_operator = 493, RuleSystem_timing_check = 494, RuleSetup_timing_check = 495, 
    RuleHold_timing_check = 496, RuleSetuphold_timing_check = 497, RuleRecovery_timing_check = 498, 
    RuleRemoval_timing_check = 499, RuleRecrem_timing_check = 500, RuleSkew_timing_check = 501, 
    RuleTimeskew_timing_check = 502, RuleFullskew_timing_check = 503, RulePeriod_timing_check = 504, 
    RuleWidth_timing_check = 505, RuleNochange_timing_check = 506, RuleTimecheck_condition = 507, 
    RuleControlled_reference_event = 508, RuleData_event = 509, RuleDelayed_data = 510, 
    RuleDelayed_reference = 511, RuleEnd_edge_offset = 512, RuleEvent_based_flag = 513, 
    RuleReference_event = 514, RuleRemain_active_flag = 515, RuleTimestamp_condition = 516, 
    RuleStart_edge_offset = 517, RuleThreshold = 518, RuleTiming_check_limit = 519, 
    RuleTiming_check_event = 520, RuleControlled_timing_check_event = 521, 
    RuleTiming_check_event_control = 522, RuleSpecify_terminal_descriptor = 523, 
    RuleEdge_control_specifier = 524, RuleEdge_descriptor = 525, RuleTiming_check_condition = 526, 
    RuleScalar_timing_check_condition = 527, RuleScalar_constant = 528, 
    RuleConcatenation = 529, RuleConstant_concatenation = 530, RuleConstant_multiple_concatenation = 531, 
    RuleModule_path_concatenation = 532, RuleModule_path_multiple_concatenation = 533, 
    RuleMultiple_concatenation = 534, RuleStreaming_concatenation = 535, 
    RuleStream_operator = 536, RuleSlice_size = 537, RuleStream_concatenation = 538, 
    RuleStream_expression = 539, RuleArray_range_expression = 540, RuleEmpty_unpacked_array_concatenation = 541, 
    RuleFunction_subroutine_call = 542, RuleTf_call = 543, RuleSystem_tf_call = 544, 
    RuleSubroutine_call = 545, RuleList_of_arguments = 546, RuleMethod_call = 547, 
    RuleMethod_call_body = 548, RuleBuilt_in_method_call = 549, RuleArray_manipulation_call = 550, 
    RuleRandomize_call = 551, RuleMethod_call_root = 552, RuleArray_method_name = 553, 
    RuleInc_or_dec_expression = 554, RuleConstant_expression = 555, RuleConstant_mintypmax_expression = 556, 
    RuleConstant_param_expression = 557, RuleParam_expression = 558, RuleConstant_range_expression = 559, 
    RuleConstant_part_select_range = 560, RuleConstant_range = 561, RuleConstant_indexed_range = 562, 
    RuleExpression = 563, RuleValue_range = 564, RuleMintypmax_expression = 565, 
    RuleModule_path_expression = 566, RuleModule_path_mintypmax_expression = 567, 
    RulePart_select_range = 568, RuleIndexed_range = 569, RuleConstant_primary = 570, 
    RuleModule_path_primary = 571, RulePrimary = 572, RuleClass_qualifier = 573, 
    RuleRange_expression = 574, RulePrimary_literal = 575, RuleImplicit_class_handle = 576, 
    RuleBit_select = 577, RuleSelect_ = 578, RuleNonrange_select = 579, 
    RuleConstant_bit_select = 580, RuleConstant_select = 581, RuleConstant_let_expression = 582, 
    RuleNet_lvalue = 583, RuleVariable_lvalue = 584, RuleNonrange_variable_lvalue = 585, 
    RuleUnary_operator = 586, RuleBinary_operator = 587, RuleInc_or_dec_operator = 588, 
    RuleUnary_module_path_operator = 589, RuleBinary_module_path_operator = 590, 
    RuleNumber = 591, RuleIntegral_number = 592, RuleAttribute_instance = 593, 
    RuleAttr_spec = 594, RuleHierarchical_identifier = 595, RuleIdentifier = 596, 
    RulePackage_scope = 597, RulePs_identifier = 598, RulePs_or_hierarchical_array_identifier = 599, 
    RulePs_or_hierarchical_identifier = 600, RulePs_parameter_identifier = 601, 
    RulePs_type_identifier = 602, RuleSystem_tf_identifier = 603
  };

  explicit SystemVerilogParser(antlr4::TokenStream *input);

  SystemVerilogParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~SystemVerilogParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class Library_textContext;
  class Library_descriptionContext;
  class Library_declarationContext;
  class Include_statementContext;
  class Source_textContext;
  class DescriptionContext;
  class Module_headerContext;
  class Module_nonansi_headerContext;
  class Module_ansi_headerContext;
  class Module_declarationContext;
  class Module_keywordContext;
  class Interface_headerContext;
  class Interface_nonansi_headerContext;
  class Interface_ansi_headerContext;
  class Interface_declarationContext;
  class Program_headerContext;
  class Program_nonansi_headerContext;
  class Program_ansi_headerContext;
  class Program_declarationContext;
  class Checker_declarationContext;
  class Class_declarationContext;
  class Interface_class_typeContext;
  class Interface_class_declarationContext;
  class Interface_class_itemContext;
  class Interface_class_methodContext;
  class Package_declarationContext;
  class Timeunits_declarationContext;
  class Parameter_port_listContext;
  class Parameter_port_declarationContext;
  class List_of_portsContext;
  class List_of_port_declarationsContext;
  class Port_declarationContext;
  class PortContext;
  class Port_expressionContext;
  class Port_referenceContext;
  class Port_directionContext;
  class Net_port_headerContext;
  class Variable_port_headerContext;
  class Interface_port_headerContext;
  class Ansi_port_declarationContext;
  class Elaboration_system_taskContext;
  class Finish_numberContext;
  class Module_common_itemContext;
  class Module_itemContext;
  class Module_or_generate_itemContext;
  class Module_or_generate_item_declarationContext;
  class Non_port_module_itemContext;
  class Parameter_overrideContext;
  class Bind_directiveContext;
  class Bind_target_scopeContext;
  class Bind_target_instanceContext;
  class Bind_target_instance_listContext;
  class Bind_instantiationContext;
  class Config_declarationContext;
  class Design_statementContext;
  class Config_rule_statementContext;
  class Default_clauseContext;
  class Inst_clauseContext;
  class Inst_nameContext;
  class Cell_clauseContext;
  class Liblist_clauseContext;
  class Use_clauseContext;
  class Interface_or_generate_itemContext;
  class Extern_tf_declarationContext;
  class Interface_itemContext;
  class Non_port_interface_itemContext;
  class Program_itemContext;
  class Non_port_program_itemContext;
  class Program_generate_itemContext;
  class Checker_port_listContext;
  class Checker_port_itemContext;
  class Checker_port_directionContext;
  class Checker_or_generate_itemContext;
  class Checker_or_generate_item_declarationContext;
  class Checker_generate_itemContext;
  class Class_itemContext;
  class Class_propertyContext;
  class Class_methodContext;
  class Class_constructor_prototypeContext;
  class Class_constraintContext;
  class Class_item_qualifierContext;
  class Property_qualifierContext;
  class Random_qualifierContext;
  class Method_qualifierContext;
  class Method_prototypeContext;
  class Class_constructor_declarationContext;
  class Constraint_declarationContext;
  class Constraint_blockContext;
  class Constraint_block_itemContext;
  class Solve_before_listContext;
  class Constraint_primaryContext;
  class Constraint_expressionContext;
  class Uniqueness_constraintContext;
  class Constraint_setContext;
  class Dist_listContext;
  class Dist_itemContext;
  class Dist_weightContext;
  class Constraint_prototypeContext;
  class Constraint_prototype_qualifierContext;
  class Extern_constraint_declarationContext;
  class Identifier_listContext;
  class Package_itemContext;
  class Package_or_generate_item_declarationContext;
  class Anonymous_programContext;
  class Anonymous_program_itemContext;
  class Local_parameter_declarationContext;
  class Parameter_declarationContext;
  class Specparam_declarationContext;
  class Inout_declarationContext;
  class Input_declarationContext;
  class Output_declarationContext;
  class Interface_port_declarationContext;
  class Ref_declarationContext;
  class Data_declarationContext;
  class Package_import_declarationContext;
  class Package_import_itemContext;
  class Package_export_declarationContext;
  class Genvar_declarationContext;
  class Net_declarationContext;
  class Type_declarationContext;
  class Net_type_declarationContext;
  class LifetimeContext;
  class Data_typeContext;
  class Data_type_or_implicitContext;
  class Implicit_data_typeContext;
  class Enum_base_typeContext;
  class Enum_name_declarationContext;
  class Class_scopeContext;
  class Class_typeContext;
  class Integer_typeContext;
  class Integer_atom_typeContext;
  class Integer_vector_typeContext;
  class Non_integer_typeContext;
  class Net_typeContext;
  class Net_port_typeContext;
  class Variable_port_typeContext;
  class Var_data_typeContext;
  class SigningContext;
  class Simple_typeContext;
  class Struct_union_memberContext;
  class Data_type_or_voidContext;
  class Struct_unionContext;
  class Type_referenceContext;
  class Drive_strengthContext;
  class Strength0Context;
  class Strength1Context;
  class Charge_strengthContext;
  class Delay3Context;
  class Delay2Context;
  class Delay_valueContext;
  class List_of_defparam_assignmentsContext;
  class List_of_genvar_identifiersContext;
  class List_of_interface_identifiersContext;
  class List_of_net_decl_assignmentsContext;
  class List_of_param_assignmentsContext;
  class List_of_port_identifiersContext;
  class List_of_udp_port_identifiersContext;
  class List_of_specparam_assignmentsContext;
  class List_of_tf_variable_identifiersContext;
  class List_of_type_assignmentsContext;
  class List_of_variable_decl_assignmentsContext;
  class List_of_variable_identifiersContext;
  class List_of_variable_port_identifiersContext;
  class Defparam_assignmentContext;
  class Net_decl_assignmentContext;
  class Param_assignmentContext;
  class Specparam_assignmentContext;
  class Type_assignmentContext;
  class Pulse_control_specparamContext;
  class Error_limit_valueContext;
  class Reject_limit_valueContext;
  class Limit_valueContext;
  class Variable_decl_assignmentContext;
  class Class_newContext;
  class Dynamic_array_newContext;
  class Unpacked_dimensionContext;
  class Packed_dimensionContext;
  class Associative_dimensionContext;
  class Variable_dimensionContext;
  class Queue_dimensionContext;
  class Unsized_dimensionContext;
  class Function_data_type_or_implicitContext;
  class Function_declarationContext;
  class Function_body_declarationContext;
  class Function_prototypeContext;
  class Dpi_import_exportContext;
  class Dpi_spec_stringContext;
  class Dpi_function_import_propertyContext;
  class Dpi_task_import_propertyContext;
  class Dpi_function_protoContext;
  class Dpi_task_protoContext;
  class Task_declarationContext;
  class Task_body_declarationContext;
  class Tf_item_declarationContext;
  class Tf_port_listContext;
  class Tf_port_itemContext;
  class Tf_port_directionContext;
  class Tf_port_declarationContext;
  class Task_prototypeContext;
  class Block_item_declarationContext;
  class Modport_declarationContext;
  class Modport_itemContext;
  class Modport_ports_declarationContext;
  class Modport_clocking_declarationContext;
  class Modport_simple_ports_declarationContext;
  class Modport_simple_portContext;
  class Modport_tf_ports_declarationContext;
  class Modport_tf_portContext;
  class Import_exportContext;
  class Concurrent_assertion_itemContext;
  class Concurrent_assertion_statementContext;
  class Assert_property_statementContext;
  class Assume_property_statementContext;
  class Cover_property_statementContext;
  class Expect_property_statementContext;
  class Cover_sequence_statementContext;
  class Restrict_property_statementContext;
  class Property_instanceContext;
  class Property_list_of_argumentsContext;
  class Property_actual_argContext;
  class Assertion_item_declarationContext;
  class Property_declarationContext;
  class Property_port_listContext;
  class Property_port_itemContext;
  class Property_formal_typeContext;
  class Property_specContext;
  class Property_exprContext;
  class Property_case_itemContext;
  class Sequence_declarationContext;
  class Sequence_port_listContext;
  class Sequence_port_itemContext;
  class Sequence_lvar_port_directionContext;
  class Sequence_formal_typeContext;
  class Sequence_exprContext;
  class Cycle_delay_rangeContext;
  class Sequence_method_callContext;
  class Sequence_match_itemContext;
  class Sequence_instanceContext;
  class Sequence_list_of_argumentsContext;
  class Sequence_actual_argContext;
  class Boolean_abbrevContext;
  class Sequence_abbrevContext;
  class Consecutive_repetitionContext;
  class Non_consecutive_repetitionContext;
  class Goto_repetitionContext;
  class Const_or_range_expressionContext;
  class Cycle_delay_const_range_expressionContext;
  class Expression_or_distContext;
  class Assertion_variable_declarationContext;
  class Covergroup_declarationContext;
  class Coverage_spec_or_optionContext;
  class Coverage_optionContext;
  class Coverage_specContext;
  class Coverage_eventContext;
  class Block_event_expressionContext;
  class Hierarchical_btf_identifierContext;
  class Cover_pointContext;
  class Bins_or_emptyContext;
  class Bins_or_optionsContext;
  class Bins_keywordContext;
  class Trans_listContext;
  class Trans_setContext;
  class Trans_range_listContext;
  class Trans_itemContext;
  class Repeat_rangeContext;
  class Cover_crossContext;
  class List_of_cross_itemsContext;
  class Cross_itemContext;
  class Cross_bodyContext;
  class Cross_body_itemContext;
  class Bins_selection_or_optionContext;
  class Bins_selectionContext;
  class Select_expressionContext;
  class Select_conditionContext;
  class Bins_expressionContext;
  class Covergroup_range_listContext;
  class Covergroup_value_rangeContext;
  class With_covergroup_expressionContext;
  class Set_covergroup_expressionContext;
  class Integer_covergroup_expressionContext;
  class Cross_set_expressionContext;
  class Covergroup_expressionContext;
  class Let_declarationContext;
  class Let_identifierContext;
  class Let_port_listContext;
  class Let_port_itemContext;
  class Let_formal_typeContext;
  class Let_expressionContext;
  class Let_list_of_argumentsContext;
  class Let_actual_argContext;
  class Gate_instantiationContext;
  class Cmos_switch_instanceContext;
  class Enable_gate_instanceContext;
  class Mos_switch_instanceContext;
  class N_input_gate_instanceContext;
  class N_output_gate_instanceContext;
  class Pass_switch_instanceContext;
  class Pass_enable_switch_instanceContext;
  class Pull_gate_instanceContext;
  class Pulldown_strengthContext;
  class Pullup_strengthContext;
  class Enable_terminalContext;
  class Inout_terminalContext;
  class Input_terminalContext;
  class Ncontrol_terminalContext;
  class Output_terminalContext;
  class Pcontrol_terminalContext;
  class Cmos_switchtypeContext;
  class Enable_gatetypeContext;
  class Mos_switchtypeContext;
  class N_input_gatetypeContext;
  class N_output_gatetypeContext;
  class Pass_en_switchtypeContext;
  class Pass_switchtypeContext;
  class Module_instantiationContext;
  class Parameter_value_assignmentContext;
  class List_of_parameter_assignmentsContext;
  class Ordered_parameter_assignmentContext;
  class Named_parameter_assignmentContext;
  class Hierarchical_instanceContext;
  class Name_of_instanceContext;
  class List_of_port_connectionsContext;
  class Ordered_port_connectionContext;
  class Named_port_connectionContext;
  class Interface_instantiationContext;
  class Program_instantiationContext;
  class Checker_instantiationContext;
  class List_of_checker_port_connectionsContext;
  class Ordered_checker_port_connectionContext;
  class Named_checker_port_connectionContext;
  class Generate_regionContext;
  class Loop_generate_constructContext;
  class Genvar_initializationContext;
  class Genvar_iterationContext;
  class Conditional_generate_constructContext;
  class If_generate_constructContext;
  class Case_generate_constructContext;
  class Case_generate_itemContext;
  class Generate_blockContext;
  class Generate_itemContext;
  class Udp_declaration_commonContext;
  class Udp_nonansi_portsContext;
  class Udp_ansi_portsContext;
  class Udp_declarationContext;
  class Udp_port_listContext;
  class Udp_declaration_port_listContext;
  class Udp_port_declarationContext;
  class Udp_output_declarationContext;
  class Udp_input_declarationContext;
  class Udp_reg_declarationContext;
  class Udp_bodyContext;
  class Combinational_bodyContext;
  class Combinational_entryContext;
  class Sequential_bodyContext;
  class Udp_initial_statementContext;
  class Init_valContext;
  class Sequential_entryContext;
  class Seq_input_listContext;
  class Level_input_listContext;
  class Edge_input_listContext;
  class Edge_indicatorContext;
  class Current_stateContext;
  class Next_stateContext;
  class Level_symbolContext;
  class Udp_instantiationContext;
  class Udp_instanceContext;
  class Continuous_assignContext;
  class List_of_net_assignmentsContext;
  class List_of_variable_assignmentsContext;
  class Net_aliasContext;
  class Net_assignmentContext;
  class Initial_constructContext;
  class Always_constructContext;
  class Always_keywordContext;
  class Final_constructContext;
  class Blocking_assignmentContext;
  class Operator_assignmentContext;
  class Assignment_operatorContext;
  class Nonblocking_assignmentContext;
  class Procedural_continuous_assignmentContext;
  class Variable_assignmentContext;
  class Action_blockContext;
  class Seq_blockContext;
  class Par_blockContext;
  class Join_keywordContext;
  class Statement_or_nullContext;
  class StatementContext;
  class Statement_itemContext;
  class Function_statementContext;
  class Function_statement_or_nullContext;
  class Variable_identifier_listContext;
  class Procedural_timing_control_statementContext;
  class Delay_or_event_controlContext;
  class Delay_controlContext;
  class Event_controlContext;
  class Event_expressionContext;
  class Procedural_timing_controlContext;
  class Jump_statementContext;
  class Wait_statementContext;
  class Event_triggerContext;
  class Disable_statementContext;
  class Conditional_statementContext;
  class Unique_priorityContext;
  class Cond_predicateContext;
  class Expression_or_cond_patternContext;
  class Cond_patternContext;
  class Case_statementContext;
  class Case_keywordContext;
  class Case_expressionContext;
  class Case_itemContext;
  class Case_pattern_itemContext;
  class Case_inside_itemContext;
  class Case_item_expressionContext;
  class Randcase_statementContext;
  class Randcase_itemContext;
  class Open_range_listContext;
  class Open_value_rangeContext;
  class PatternContext;
  class Assignment_patternContext;
  class Structure_pattern_keyContext;
  class Array_pattern_keyContext;
  class Assignment_pattern_keyContext;
  class Assignment_pattern_expressionContext;
  class Assignment_pattern_expression_typeContext;
  class Constant_assignment_pattern_expressionContext;
  class Assignment_pattern_net_lvalueContext;
  class Assignment_pattern_variable_lvalueContext;
  class Loop_statementContext;
  class For_initializationContext;
  class For_variable_declarationContext;
  class For_stepContext;
  class For_step_assignmentContext;
  class Loop_variablesContext;
  class Subroutine_call_statementContext;
  class Assertion_itemContext;
  class Deferred_immediate_assertion_itemContext;
  class Procedural_assertion_statementContext;
  class Immediate_assertion_statementContext;
  class Simple_immediate_assertion_statementContext;
  class Simple_immediate_assert_statementContext;
  class Simple_immediate_assume_statementContext;
  class Simple_immediate_cover_statementContext;
  class Deferred_immediate_assertion_statementContext;
  class Deferred_immediate_assert_statementContext;
  class Deferred_immediate_assume_statementContext;
  class Deferred_immediate_cover_statementContext;
  class Clocking_declarationContext;
  class Clocking_eventContext;
  class Clocking_itemContext;
  class Default_skewContext;
  class Clocking_directionContext;
  class List_of_clocking_decl_assignContext;
  class Clocking_decl_assignContext;
  class Clocking_skewContext;
  class Clocking_driveContext;
  class Cycle_delayContext;
  class ClockvarContext;
  class Clockvar_expressionContext;
  class Randsequence_statementContext;
  class ProductionContext;
  class Rs_ruleContext;
  class Rs_production_listContext;
  class Weight_specificationContext;
  class Rs_code_blockContext;
  class Rs_prodContext;
  class Production_itemContext;
  class Rs_if_elseContext;
  class Rs_repeatContext;
  class Rs_caseContext;
  class Rs_case_itemContext;
  class Specify_blockContext;
  class Specify_itemContext;
  class Pulsestyle_declarationContext;
  class Showcancelled_declarationContext;
  class Path_declarationContext;
  class Simple_path_declarationContext;
  class Parallel_path_descriptionContext;
  class Full_path_descriptionContext;
  class List_of_path_inputsContext;
  class List_of_path_outputsContext;
  class Specify_input_terminal_descriptorContext;
  class Specify_output_terminal_descriptorContext;
  class Input_identifierContext;
  class Output_identifierContext;
  class Path_delay_valueContext;
  class List_of_path_delay_expressionsContext;
  class Path_delay_expressionContext;
  class Edge_sensitive_path_declarationContext;
  class Parallel_edge_sensitive_path_descriptionContext;
  class Full_edge_sensitive_path_descriptionContext;
  class Data_source_expressionContext;
  class Edge_identifierContext;
  class State_dependent_path_declarationContext;
  class Polarity_operatorContext;
  class System_timing_checkContext;
  class Setup_timing_checkContext;
  class Hold_timing_checkContext;
  class Setuphold_timing_checkContext;
  class Recovery_timing_checkContext;
  class Removal_timing_checkContext;
  class Recrem_timing_checkContext;
  class Skew_timing_checkContext;
  class Timeskew_timing_checkContext;
  class Fullskew_timing_checkContext;
  class Period_timing_checkContext;
  class Width_timing_checkContext;
  class Nochange_timing_checkContext;
  class Timecheck_conditionContext;
  class Controlled_reference_eventContext;
  class Data_eventContext;
  class Delayed_dataContext;
  class Delayed_referenceContext;
  class End_edge_offsetContext;
  class Event_based_flagContext;
  class Reference_eventContext;
  class Remain_active_flagContext;
  class Timestamp_conditionContext;
  class Start_edge_offsetContext;
  class ThresholdContext;
  class Timing_check_limitContext;
  class Timing_check_eventContext;
  class Controlled_timing_check_eventContext;
  class Timing_check_event_controlContext;
  class Specify_terminal_descriptorContext;
  class Edge_control_specifierContext;
  class Edge_descriptorContext;
  class Timing_check_conditionContext;
  class Scalar_timing_check_conditionContext;
  class Scalar_constantContext;
  class ConcatenationContext;
  class Constant_concatenationContext;
  class Constant_multiple_concatenationContext;
  class Module_path_concatenationContext;
  class Module_path_multiple_concatenationContext;
  class Multiple_concatenationContext;
  class Streaming_concatenationContext;
  class Stream_operatorContext;
  class Slice_sizeContext;
  class Stream_concatenationContext;
  class Stream_expressionContext;
  class Array_range_expressionContext;
  class Empty_unpacked_array_concatenationContext;
  class Function_subroutine_callContext;
  class Tf_callContext;
  class System_tf_callContext;
  class Subroutine_callContext;
  class List_of_argumentsContext;
  class Method_callContext;
  class Method_call_bodyContext;
  class Built_in_method_callContext;
  class Array_manipulation_callContext;
  class Randomize_callContext;
  class Method_call_rootContext;
  class Array_method_nameContext;
  class Inc_or_dec_expressionContext;
  class Constant_expressionContext;
  class Constant_mintypmax_expressionContext;
  class Constant_param_expressionContext;
  class Param_expressionContext;
  class Constant_range_expressionContext;
  class Constant_part_select_rangeContext;
  class Constant_rangeContext;
  class Constant_indexed_rangeContext;
  class ExpressionContext;
  class Value_rangeContext;
  class Mintypmax_expressionContext;
  class Module_path_expressionContext;
  class Module_path_mintypmax_expressionContext;
  class Part_select_rangeContext;
  class Indexed_rangeContext;
  class Constant_primaryContext;
  class Module_path_primaryContext;
  class PrimaryContext;
  class Class_qualifierContext;
  class Range_expressionContext;
  class Primary_literalContext;
  class Implicit_class_handleContext;
  class Bit_selectContext;
  class Select_Context;
  class Nonrange_selectContext;
  class Constant_bit_selectContext;
  class Constant_selectContext;
  class Constant_let_expressionContext;
  class Net_lvalueContext;
  class Variable_lvalueContext;
  class Nonrange_variable_lvalueContext;
  class Unary_operatorContext;
  class Binary_operatorContext;
  class Inc_or_dec_operatorContext;
  class Unary_module_path_operatorContext;
  class Binary_module_path_operatorContext;
  class NumberContext;
  class Integral_numberContext;
  class Attribute_instanceContext;
  class Attr_specContext;
  class Hierarchical_identifierContext;
  class IdentifierContext;
  class Package_scopeContext;
  class Ps_identifierContext;
  class Ps_or_hierarchical_array_identifierContext;
  class Ps_or_hierarchical_identifierContext;
  class Ps_parameter_identifierContext;
  class Ps_type_identifierContext;
  class System_tf_identifierContext; 

  class  Library_textContext : public antlr4::ParserRuleContext {
  public:
    Library_textContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    std::vector<Library_descriptionContext *> library_description();
    Library_descriptionContext* library_description(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Library_textContext* library_text();

  class  Library_descriptionContext : public antlr4::ParserRuleContext {
  public:
    Library_descriptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Library_declarationContext *library_declaration();
    Include_statementContext *include_statement();
    Config_declarationContext *config_declaration();
    antlr4::tree::TerminalNode *SEMI();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Library_descriptionContext* library_description();

  class  Library_declarationContext : public antlr4::ParserRuleContext {
  public:
    Library_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LIBRARY();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *SEMI();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<antlr4::tree::TerminalNode *> FILE_PATH_SPEC();
    antlr4::tree::TerminalNode* FILE_PATH_SPEC(size_t i);
    antlr4::tree::TerminalNode *DASH_INCDIR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Library_declarationContext* library_declaration();

  class  Include_statementContext : public antlr4::ParserRuleContext {
  public:
    Include_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INCLUDE();
    antlr4::tree::TerminalNode *FILE_PATH_SPEC();
    antlr4::tree::TerminalNode *SEMI();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Include_statementContext* include_statement();

  class  Source_textContext : public antlr4::ParserRuleContext {
  public:
    Source_textContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    Timeunits_declarationContext *timeunits_declaration();
    std::vector<DescriptionContext *> description();
    DescriptionContext* description(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Source_textContext* source_text();

  class  DescriptionContext : public antlr4::ParserRuleContext {
  public:
    DescriptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Module_declarationContext *module_declaration();
    Udp_declarationContext *udp_declaration();
    Interface_declarationContext *interface_declaration();
    Program_declarationContext *program_declaration();
    Package_declarationContext *package_declaration();
    Package_itemContext *package_item();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);
    Bind_directiveContext *bind_directive();
    Config_declarationContext *config_declaration();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DescriptionContext* description();

  class  Module_headerContext : public antlr4::ParserRuleContext {
  public:
    Module_headerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Module_keywordContext *module_keyword();
    IdentifierContext *identifier();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);
    LifetimeContext *lifetime();
    std::vector<Package_import_declarationContext *> package_import_declaration();
    Package_import_declarationContext* package_import_declaration(size_t i);
    Parameter_port_listContext *parameter_port_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Module_headerContext* module_header();

  class  Module_nonansi_headerContext : public antlr4::ParserRuleContext {
  public:
    Module_nonansi_headerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Module_headerContext *module_header();
    List_of_portsContext *list_of_ports();
    antlr4::tree::TerminalNode *SEMI();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Module_nonansi_headerContext* module_nonansi_header();

  class  Module_ansi_headerContext : public antlr4::ParserRuleContext {
  public:
    Module_ansi_headerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Module_headerContext *module_header();
    antlr4::tree::TerminalNode *SEMI();
    List_of_port_declarationsContext *list_of_port_declarations();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Module_ansi_headerContext* module_ansi_header();

  class  Module_declarationContext : public antlr4::ParserRuleContext {
  public:
    Module_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Module_nonansi_headerContext *module_nonansi_header();
    antlr4::tree::TerminalNode *ENDMODULE();
    Timeunits_declarationContext *timeunits_declaration();
    std::vector<Module_itemContext *> module_item();
    Module_itemContext* module_item(size_t i);
    antlr4::tree::TerminalNode *COLON();
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    Module_ansi_headerContext *module_ansi_header();
    std::vector<Non_port_module_itemContext *> non_port_module_item();
    Non_port_module_itemContext* non_port_module_item(size_t i);
    Module_keywordContext *module_keyword();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *DOTSTAR();
    antlr4::tree::TerminalNode *RPAREN();
    antlr4::tree::TerminalNode *SEMI();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);
    LifetimeContext *lifetime();
    antlr4::tree::TerminalNode *EXTERN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Module_declarationContext* module_declaration();

  class  Module_keywordContext : public antlr4::ParserRuleContext {
  public:
    Module_keywordContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MODULE();
    antlr4::tree::TerminalNode *MACROMODULE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Module_keywordContext* module_keyword();

  class  Interface_headerContext : public antlr4::ParserRuleContext {
  public:
    Interface_headerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INTERFACE();
    IdentifierContext *identifier();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);
    LifetimeContext *lifetime();
    std::vector<Package_import_declarationContext *> package_import_declaration();
    Package_import_declarationContext* package_import_declaration(size_t i);
    Parameter_port_listContext *parameter_port_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Interface_headerContext* interface_header();

  class  Interface_nonansi_headerContext : public antlr4::ParserRuleContext {
  public:
    Interface_nonansi_headerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Interface_headerContext *interface_header();
    List_of_portsContext *list_of_ports();
    antlr4::tree::TerminalNode *SEMI();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Interface_nonansi_headerContext* interface_nonansi_header();

  class  Interface_ansi_headerContext : public antlr4::ParserRuleContext {
  public:
    Interface_ansi_headerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Interface_headerContext *interface_header();
    antlr4::tree::TerminalNode *SEMI();
    List_of_port_declarationsContext *list_of_port_declarations();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Interface_ansi_headerContext* interface_ansi_header();

  class  Interface_declarationContext : public antlr4::ParserRuleContext {
  public:
    Interface_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Interface_nonansi_headerContext *interface_nonansi_header();
    antlr4::tree::TerminalNode *ENDINTERFACE();
    Timeunits_declarationContext *timeunits_declaration();
    std::vector<Interface_itemContext *> interface_item();
    Interface_itemContext* interface_item(size_t i);
    antlr4::tree::TerminalNode *COLON();
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    Interface_ansi_headerContext *interface_ansi_header();
    std::vector<Non_port_interface_itemContext *> non_port_interface_item();
    Non_port_interface_itemContext* non_port_interface_item(size_t i);
    antlr4::tree::TerminalNode *INTERFACE();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *DOTSTAR();
    antlr4::tree::TerminalNode *RPAREN();
    antlr4::tree::TerminalNode *SEMI();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);
    antlr4::tree::TerminalNode *EXTERN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Interface_declarationContext* interface_declaration();

  class  Program_headerContext : public antlr4::ParserRuleContext {
  public:
    Program_headerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PROGRAM();
    IdentifierContext *identifier();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);
    LifetimeContext *lifetime();
    std::vector<Package_import_declarationContext *> package_import_declaration();
    Package_import_declarationContext* package_import_declaration(size_t i);
    Parameter_port_listContext *parameter_port_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Program_headerContext* program_header();

  class  Program_nonansi_headerContext : public antlr4::ParserRuleContext {
  public:
    Program_nonansi_headerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Program_headerContext *program_header();
    List_of_portsContext *list_of_ports();
    antlr4::tree::TerminalNode *SEMI();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Program_nonansi_headerContext* program_nonansi_header();

  class  Program_ansi_headerContext : public antlr4::ParserRuleContext {
  public:
    Program_ansi_headerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Program_headerContext *program_header();
    antlr4::tree::TerminalNode *SEMI();
    List_of_port_declarationsContext *list_of_port_declarations();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Program_ansi_headerContext* program_ansi_header();

  class  Program_declarationContext : public antlr4::ParserRuleContext {
  public:
    Program_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Program_nonansi_headerContext *program_nonansi_header();
    antlr4::tree::TerminalNode *ENDPROGRAM();
    Timeunits_declarationContext *timeunits_declaration();
    std::vector<Program_itemContext *> program_item();
    Program_itemContext* program_item(size_t i);
    antlr4::tree::TerminalNode *COLON();
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    Program_ansi_headerContext *program_ansi_header();
    std::vector<Non_port_program_itemContext *> non_port_program_item();
    Non_port_program_itemContext* non_port_program_item(size_t i);
    antlr4::tree::TerminalNode *PROGRAM();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *DOTSTAR();
    antlr4::tree::TerminalNode *RPAREN();
    antlr4::tree::TerminalNode *SEMI();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);
    antlr4::tree::TerminalNode *EXTERN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Program_declarationContext* program_declaration();

  class  Checker_declarationContext : public antlr4::ParserRuleContext {
  public:
    Checker_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CHECKER();
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    antlr4::tree::TerminalNode *SEMI();
    antlr4::tree::TerminalNode *ENDCHECKER();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    std::vector<Checker_or_generate_itemContext *> checker_or_generate_item();
    Checker_or_generate_itemContext* checker_or_generate_item(size_t i);
    antlr4::tree::TerminalNode *COLON();
    Checker_port_listContext *checker_port_list();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Checker_declarationContext* checker_declaration();

  class  Class_declarationContext : public antlr4::ParserRuleContext {
  public:
    Class_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CLASS();
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    antlr4::tree::TerminalNode *SEMI();
    antlr4::tree::TerminalNode *ENDCLASS();
    antlr4::tree::TerminalNode *VIRTUAL();
    LifetimeContext *lifetime();
    Parameter_port_listContext *parameter_port_list();
    antlr4::tree::TerminalNode *EXTENDS();
    Class_typeContext *class_type();
    antlr4::tree::TerminalNode *IMPLEMENTS();
    std::vector<Interface_class_typeContext *> interface_class_type();
    Interface_class_typeContext* interface_class_type(size_t i);
    std::vector<Class_itemContext *> class_item();
    Class_itemContext* class_item(size_t i);
    antlr4::tree::TerminalNode *COLON();
    antlr4::tree::TerminalNode *LPAREN();
    List_of_argumentsContext *list_of_arguments();
    antlr4::tree::TerminalNode *RPAREN();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Class_declarationContext* class_declaration();

  class  Interface_class_typeContext : public antlr4::ParserRuleContext {
  public:
    Interface_class_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Ps_identifierContext *ps_identifier();
    Parameter_value_assignmentContext *parameter_value_assignment();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Interface_class_typeContext* interface_class_type();

  class  Interface_class_declarationContext : public antlr4::ParserRuleContext {
  public:
    Interface_class_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INTERFACE();
    antlr4::tree::TerminalNode *CLASS();
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    antlr4::tree::TerminalNode *SEMI();
    antlr4::tree::TerminalNode *ENDCLASS();
    Parameter_port_listContext *parameter_port_list();
    antlr4::tree::TerminalNode *EXTENDS();
    std::vector<Interface_class_typeContext *> interface_class_type();
    Interface_class_typeContext* interface_class_type(size_t i);
    std::vector<Interface_class_itemContext *> interface_class_item();
    Interface_class_itemContext* interface_class_item(size_t i);
    antlr4::tree::TerminalNode *COLON();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Interface_class_declarationContext* interface_class_declaration();

  class  Interface_class_itemContext : public antlr4::ParserRuleContext {
  public:
    Interface_class_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Type_declarationContext *type_declaration();
    Interface_class_methodContext *interface_class_method();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);
    Local_parameter_declarationContext *local_parameter_declaration();
    antlr4::tree::TerminalNode *SEMI();
    Parameter_declarationContext *parameter_declaration();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Interface_class_itemContext* interface_class_item();

  class  Interface_class_methodContext : public antlr4::ParserRuleContext {
  public:
    Interface_class_methodContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PURE();
    antlr4::tree::TerminalNode *VIRTUAL();
    Method_prototypeContext *method_prototype();
    antlr4::tree::TerminalNode *SEMI();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Interface_class_methodContext* interface_class_method();

  class  Package_declarationContext : public antlr4::ParserRuleContext {
  public:
    Package_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PACKAGE();
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    antlr4::tree::TerminalNode *SEMI();
    antlr4::tree::TerminalNode *ENDPACKAGE();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);
    LifetimeContext *lifetime();
    Timeunits_declarationContext *timeunits_declaration();
    std::vector<Package_itemContext *> package_item();
    Package_itemContext* package_item(size_t i);
    antlr4::tree::TerminalNode *COLON();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Package_declarationContext* package_declaration();

  class  Timeunits_declarationContext : public antlr4::ParserRuleContext {
  public:
    Timeunits_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TIMEUNIT();
    std::vector<antlr4::tree::TerminalNode *> TIME_LITERAL();
    antlr4::tree::TerminalNode* TIME_LITERAL(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SEMI();
    antlr4::tree::TerminalNode* SEMI(size_t i);
    antlr4::tree::TerminalNode *SLASH();
    antlr4::tree::TerminalNode *TIMEPRECISION();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Timeunits_declarationContext* timeunits_declaration();

  class  Parameter_port_listContext : public antlr4::ParserRuleContext {
  public:
    Parameter_port_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HASH();
    antlr4::tree::TerminalNode *LPAREN();
    List_of_param_assignmentsContext *list_of_param_assignments();
    antlr4::tree::TerminalNode *RPAREN();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<Parameter_port_declarationContext *> parameter_port_declaration();
    Parameter_port_declarationContext* parameter_port_declaration(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Parameter_port_listContext* parameter_port_list();

  class  Parameter_port_declarationContext : public antlr4::ParserRuleContext {
  public:
    Parameter_port_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Parameter_declarationContext *parameter_declaration();
    Local_parameter_declarationContext *local_parameter_declaration();
    Data_typeContext *data_type();
    List_of_param_assignmentsContext *list_of_param_assignments();
    antlr4::tree::TerminalNode *TYPE();
    List_of_type_assignmentsContext *list_of_type_assignments();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Parameter_port_declarationContext* parameter_port_declaration();

  class  List_of_portsContext : public antlr4::ParserRuleContext {
  public:
    List_of_portsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    std::vector<PortContext *> port();
    PortContext* port(size_t i);
    antlr4::tree::TerminalNode *RPAREN();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  List_of_portsContext* list_of_ports();

  class  List_of_port_declarationsContext : public antlr4::ParserRuleContext {
  public:
    List_of_port_declarationsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    std::vector<Ansi_port_declarationContext *> ansi_port_declaration();
    Ansi_port_declarationContext* ansi_port_declaration(size_t i);
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  List_of_port_declarationsContext* list_of_port_declarations();

  class  Port_declarationContext : public antlr4::ParserRuleContext {
  public:
    Port_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Inout_declarationContext *inout_declaration();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);
    Input_declarationContext *input_declaration();
    Output_declarationContext *output_declaration();
    Ref_declarationContext *ref_declaration();
    Interface_port_declarationContext *interface_port_declaration();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Port_declarationContext* port_declaration();

  class  PortContext : public antlr4::ParserRuleContext {
  public:
    PortContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Port_expressionContext *port_expression();
    antlr4::tree::TerminalNode *DOT();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PortContext* port();

  class  Port_expressionContext : public antlr4::ParserRuleContext {
  public:
    Port_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Port_referenceContext *> port_reference();
    Port_referenceContext* port_reference(size_t i);
    antlr4::tree::TerminalNode *LBRACE();
    antlr4::tree::TerminalNode *RBRACE();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Port_expressionContext* port_expression();

  class  Port_referenceContext : public antlr4::ParserRuleContext {
  public:
    Port_referenceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    Constant_selectContext *constant_select();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Port_referenceContext* port_reference();

  class  Port_directionContext : public antlr4::ParserRuleContext {
  public:
    Port_directionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INPUT();
    antlr4::tree::TerminalNode *OUTPUT();
    antlr4::tree::TerminalNode *INOUT();
    antlr4::tree::TerminalNode *REF();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Port_directionContext* port_direction();

  class  Net_port_headerContext : public antlr4::ParserRuleContext {
  public:
    Net_port_headerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Net_port_typeContext *net_port_type();
    Port_directionContext *port_direction();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Net_port_headerContext* net_port_header();

  class  Variable_port_headerContext : public antlr4::ParserRuleContext {
  public:
    Variable_port_headerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Variable_port_typeContext *variable_port_type();
    Port_directionContext *port_direction();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Variable_port_headerContext* variable_port_header();

  class  Interface_port_headerContext : public antlr4::ParserRuleContext {
  public:
    Interface_port_headerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    antlr4::tree::TerminalNode *DOT();
    antlr4::tree::TerminalNode *INTERFACE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Interface_port_headerContext* interface_port_header();

  class  Ansi_port_declarationContext : public antlr4::ParserRuleContext {
  public:
    Ansi_port_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    Net_port_headerContext *net_port_header();
    std::vector<Unpacked_dimensionContext *> unpacked_dimension();
    Unpacked_dimensionContext* unpacked_dimension(size_t i);
    antlr4::tree::TerminalNode *EQ();
    Constant_expressionContext *constant_expression();
    Interface_port_headerContext *interface_port_header();
    Variable_port_headerContext *variable_port_header();
    std::vector<Variable_dimensionContext *> variable_dimension();
    Variable_dimensionContext* variable_dimension(size_t i);
    antlr4::tree::TerminalNode *DOT();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    Port_directionContext *port_direction();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Ansi_port_declarationContext* ansi_port_declaration();

  class  Elaboration_system_taskContext : public antlr4::ParserRuleContext {
  public:
    Elaboration_system_taskContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FATAL_SYS_TASK();
    antlr4::tree::TerminalNode *SEMI();
    antlr4::tree::TerminalNode *LPAREN();
    Finish_numberContext *finish_number();
    antlr4::tree::TerminalNode *RPAREN();
    antlr4::tree::TerminalNode *COMMA();
    List_of_argumentsContext *list_of_arguments();
    antlr4::tree::TerminalNode *ERROR_SYS_TASK();
    antlr4::tree::TerminalNode *WARNING_SYS_TASK();
    antlr4::tree::TerminalNode *INFO_SYS_TASK();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Elaboration_system_taskContext* elaboration_system_task();

  class  Finish_numberContext : public antlr4::ParserRuleContext {
  public:
    Finish_numberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DECIMAL_NUMBER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Finish_numberContext* finish_number();

  class  Module_common_itemContext : public antlr4::ParserRuleContext {
  public:
    Module_common_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Module_or_generate_item_declarationContext *module_or_generate_item_declaration();
    Interface_instantiationContext *interface_instantiation();
    Program_instantiationContext *program_instantiation();
    Assertion_itemContext *assertion_item();
    Bind_directiveContext *bind_directive();
    Continuous_assignContext *continuous_assign();
    Net_aliasContext *net_alias();
    Initial_constructContext *initial_construct();
    Final_constructContext *final_construct();
    Always_constructContext *always_construct();
    Loop_generate_constructContext *loop_generate_construct();
    Conditional_generate_constructContext *conditional_generate_construct();
    Elaboration_system_taskContext *elaboration_system_task();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Module_common_itemContext* module_common_item();

  class  Module_itemContext : public antlr4::ParserRuleContext {
  public:
    Module_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Port_declarationContext *port_declaration();
    antlr4::tree::TerminalNode *SEMI();
    Non_port_module_itemContext *non_port_module_item();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Module_itemContext* module_item();

  class  Module_or_generate_itemContext : public antlr4::ParserRuleContext {
  public:
    Module_or_generate_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Parameter_overrideContext *parameter_override();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);
    Gate_instantiationContext *gate_instantiation();
    Udp_instantiationContext *udp_instantiation();
    Module_instantiationContext *module_instantiation();
    Module_common_itemContext *module_common_item();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Module_or_generate_itemContext* module_or_generate_item();

  class  Module_or_generate_item_declarationContext : public antlr4::ParserRuleContext {
  public:
    Module_or_generate_item_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Package_or_generate_item_declarationContext *package_or_generate_item_declaration();
    Genvar_declarationContext *genvar_declaration();
    Clocking_declarationContext *clocking_declaration();
    antlr4::tree::TerminalNode *DEFAULT();
    antlr4::tree::TerminalNode *CLOCKING();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *SEMI();
    antlr4::tree::TerminalNode *DISABLE();
    antlr4::tree::TerminalNode *IFF();
    Expression_or_distContext *expression_or_dist();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Module_or_generate_item_declarationContext* module_or_generate_item_declaration();

  class  Non_port_module_itemContext : public antlr4::ParserRuleContext {
  public:
    Non_port_module_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Generate_regionContext *generate_region();
    Module_or_generate_itemContext *module_or_generate_item();
    Specify_blockContext *specify_block();
    Specparam_declarationContext *specparam_declaration();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);
    Program_declarationContext *program_declaration();
    Module_declarationContext *module_declaration();
    Interface_declarationContext *interface_declaration();
    Timeunits_declarationContext *timeunits_declaration();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Non_port_module_itemContext* non_port_module_item();

  class  Parameter_overrideContext : public antlr4::ParserRuleContext {
  public:
    Parameter_overrideContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DEFPARAM();
    List_of_defparam_assignmentsContext *list_of_defparam_assignments();
    antlr4::tree::TerminalNode *SEMI();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Parameter_overrideContext* parameter_override();

  class  Bind_directiveContext : public antlr4::ParserRuleContext {
  public:
    Bind_directiveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BIND();
    Bind_target_scopeContext *bind_target_scope();
    Bind_instantiationContext *bind_instantiation();
    antlr4::tree::TerminalNode *SEMI();
    antlr4::tree::TerminalNode *COLON();
    Bind_target_instance_listContext *bind_target_instance_list();
    Bind_target_instanceContext *bind_target_instance();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Bind_directiveContext* bind_directive();

  class  Bind_target_scopeContext : public antlr4::ParserRuleContext {
  public:
    Bind_target_scopeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Bind_target_scopeContext* bind_target_scope();

  class  Bind_target_instanceContext : public antlr4::ParserRuleContext {
  public:
    Bind_target_instanceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Hierarchical_identifierContext *hierarchical_identifier();
    Constant_bit_selectContext *constant_bit_select();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Bind_target_instanceContext* bind_target_instance();

  class  Bind_target_instance_listContext : public antlr4::ParserRuleContext {
  public:
    Bind_target_instance_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Bind_target_instanceContext *> bind_target_instance();
    Bind_target_instanceContext* bind_target_instance(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Bind_target_instance_listContext* bind_target_instance_list();

  class  Bind_instantiationContext : public antlr4::ParserRuleContext {
  public:
    Bind_instantiationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Program_instantiationContext *program_instantiation();
    Module_instantiationContext *module_instantiation();
    Interface_instantiationContext *interface_instantiation();
    Checker_instantiationContext *checker_instantiation();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Bind_instantiationContext* bind_instantiation();

  class  Config_declarationContext : public antlr4::ParserRuleContext {
  public:
    Config_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CONFIG();
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SEMI();
    antlr4::tree::TerminalNode* SEMI(size_t i);
    Design_statementContext *design_statement();
    antlr4::tree::TerminalNode *ENDCONFIG();
    std::vector<Local_parameter_declarationContext *> local_parameter_declaration();
    Local_parameter_declarationContext* local_parameter_declaration(size_t i);
    std::vector<Config_rule_statementContext *> config_rule_statement();
    Config_rule_statementContext* config_rule_statement(size_t i);
    antlr4::tree::TerminalNode *COLON();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Config_declarationContext* config_declaration();

  class  Design_statementContext : public antlr4::ParserRuleContext {
  public:
    Design_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DESIGN();
    antlr4::tree::TerminalNode *SEMI();
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DOT();
    antlr4::tree::TerminalNode* DOT(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Design_statementContext* design_statement();

  class  Config_rule_statementContext : public antlr4::ParserRuleContext {
  public:
    Config_rule_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Default_clauseContext *default_clause();
    Liblist_clauseContext *liblist_clause();
    antlr4::tree::TerminalNode *SEMI();
    Inst_clauseContext *inst_clause();
    Use_clauseContext *use_clause();
    Cell_clauseContext *cell_clause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Config_rule_statementContext* config_rule_statement();

  class  Default_clauseContext : public antlr4::ParserRuleContext {
  public:
    Default_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DEFAULT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Default_clauseContext* default_clause();

  class  Inst_clauseContext : public antlr4::ParserRuleContext {
  public:
    Inst_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INSTANCE();
    Inst_nameContext *inst_name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Inst_clauseContext* inst_clause();

  class  Inst_nameContext : public antlr4::ParserRuleContext {
  public:
    Inst_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DOT();
    antlr4::tree::TerminalNode* DOT(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Inst_nameContext* inst_name();

  class  Cell_clauseContext : public antlr4::ParserRuleContext {
  public:
    Cell_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CELL();
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    antlr4::tree::TerminalNode *DOT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Cell_clauseContext* cell_clause();

  class  Liblist_clauseContext : public antlr4::ParserRuleContext {
  public:
    Liblist_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LIBLIST();
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Liblist_clauseContext* liblist_clause();

  class  Use_clauseContext : public antlr4::ParserRuleContext {
  public:
    Use_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *USE();
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    antlr4::tree::TerminalNode *DOT();
    antlr4::tree::TerminalNode *COLON();
    antlr4::tree::TerminalNode *CONFIG();
    std::vector<Named_parameter_assignmentContext *> named_parameter_assignment();
    Named_parameter_assignmentContext* named_parameter_assignment(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Use_clauseContext* use_clause();

  class  Interface_or_generate_itemContext : public antlr4::ParserRuleContext {
  public:
    Interface_or_generate_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Module_common_itemContext *module_common_item();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);
    Extern_tf_declarationContext *extern_tf_declaration();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Interface_or_generate_itemContext* interface_or_generate_item();

  class  Extern_tf_declarationContext : public antlr4::ParserRuleContext {
  public:
    Extern_tf_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EXTERN();
    Method_prototypeContext *method_prototype();
    antlr4::tree::TerminalNode *SEMI();
    antlr4::tree::TerminalNode *FORKJOIN();
    Task_prototypeContext *task_prototype();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Extern_tf_declarationContext* extern_tf_declaration();

  class  Interface_itemContext : public antlr4::ParserRuleContext {
  public:
    Interface_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Port_declarationContext *port_declaration();
    antlr4::tree::TerminalNode *SEMI();
    Non_port_interface_itemContext *non_port_interface_item();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Interface_itemContext* interface_item();

  class  Non_port_interface_itemContext : public antlr4::ParserRuleContext {
  public:
    Non_port_interface_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Generate_regionContext *generate_region();
    Interface_or_generate_itemContext *interface_or_generate_item();
    Program_declarationContext *program_declaration();
    Modport_declarationContext *modport_declaration();
    Interface_declarationContext *interface_declaration();
    Timeunits_declarationContext *timeunits_declaration();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Non_port_interface_itemContext* non_port_interface_item();

  class  Program_itemContext : public antlr4::ParserRuleContext {
  public:
    Program_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Port_declarationContext *port_declaration();
    antlr4::tree::TerminalNode *SEMI();
    Non_port_program_itemContext *non_port_program_item();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Program_itemContext* program_item();

  class  Non_port_program_itemContext : public antlr4::ParserRuleContext {
  public:
    Non_port_program_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Continuous_assignContext *continuous_assign();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);
    Module_or_generate_item_declarationContext *module_or_generate_item_declaration();
    Initial_constructContext *initial_construct();
    Final_constructContext *final_construct();
    Concurrent_assertion_itemContext *concurrent_assertion_item();
    Timeunits_declarationContext *timeunits_declaration();
    Program_generate_itemContext *program_generate_item();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Non_port_program_itemContext* non_port_program_item();

  class  Program_generate_itemContext : public antlr4::ParserRuleContext {
  public:
    Program_generate_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Loop_generate_constructContext *loop_generate_construct();
    Conditional_generate_constructContext *conditional_generate_construct();
    Generate_regionContext *generate_region();
    Elaboration_system_taskContext *elaboration_system_task();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Program_generate_itemContext* program_generate_item();

  class  Checker_port_listContext : public antlr4::ParserRuleContext {
  public:
    Checker_port_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Checker_port_itemContext *> checker_port_item();
    Checker_port_itemContext* checker_port_item(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Checker_port_listContext* checker_port_list();

  class  Checker_port_itemContext : public antlr4::ParserRuleContext {
  public:
    Checker_port_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Property_formal_typeContext *property_formal_type();
    IdentifierContext *identifier();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);
    Checker_port_directionContext *checker_port_direction();
    std::vector<Variable_dimensionContext *> variable_dimension();
    Variable_dimensionContext* variable_dimension(size_t i);
    antlr4::tree::TerminalNode *EQ();
    Property_actual_argContext *property_actual_arg();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Checker_port_itemContext* checker_port_item();

  class  Checker_port_directionContext : public antlr4::ParserRuleContext {
  public:
    Checker_port_directionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INPUT();
    antlr4::tree::TerminalNode *OUTPUT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Checker_port_directionContext* checker_port_direction();

  class  Checker_or_generate_itemContext : public antlr4::ParserRuleContext {
  public:
    Checker_or_generate_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Checker_or_generate_item_declarationContext *checker_or_generate_item_declaration();
    Initial_constructContext *initial_construct();
    Always_constructContext *always_construct();
    Final_constructContext *final_construct();
    Assertion_itemContext *assertion_item();
    Continuous_assignContext *continuous_assign();
    Checker_generate_itemContext *checker_generate_item();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Checker_or_generate_itemContext* checker_or_generate_item();

  class  Checker_or_generate_item_declarationContext : public antlr4::ParserRuleContext {
  public:
    Checker_or_generate_item_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Data_declarationContext *data_declaration();
    antlr4::tree::TerminalNode *RAND();
    Function_declarationContext *function_declaration();
    Checker_declarationContext *checker_declaration();
    Assertion_item_declarationContext *assertion_item_declaration();
    Covergroup_declarationContext *covergroup_declaration();
    Genvar_declarationContext *genvar_declaration();
    Clocking_declarationContext *clocking_declaration();
    antlr4::tree::TerminalNode *DEFAULT();
    antlr4::tree::TerminalNode *CLOCKING();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *SEMI();
    antlr4::tree::TerminalNode *DISABLE();
    antlr4::tree::TerminalNode *IFF();
    Expression_or_distContext *expression_or_dist();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Checker_or_generate_item_declarationContext* checker_or_generate_item_declaration();

  class  Checker_generate_itemContext : public antlr4::ParserRuleContext {
  public:
    Checker_generate_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Loop_generate_constructContext *loop_generate_construct();
    Conditional_generate_constructContext *conditional_generate_construct();
    Generate_regionContext *generate_region();
    Elaboration_system_taskContext *elaboration_system_task();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Checker_generate_itemContext* checker_generate_item();

  class  Class_itemContext : public antlr4::ParserRuleContext {
  public:
    Class_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Class_propertyContext *class_property();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);
    Class_methodContext *class_method();
    Class_constraintContext *class_constraint();
    Class_declarationContext *class_declaration();
    Covergroup_declarationContext *covergroup_declaration();
    Local_parameter_declarationContext *local_parameter_declaration();
    antlr4::tree::TerminalNode *SEMI();
    Parameter_declarationContext *parameter_declaration();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Class_itemContext* class_item();

  class  Class_propertyContext : public antlr4::ParserRuleContext {
  public:
    Class_propertyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Data_declarationContext *data_declaration();
    std::vector<Property_qualifierContext *> property_qualifier();
    Property_qualifierContext* property_qualifier(size_t i);
    antlr4::tree::TerminalNode *CONST();
    Data_typeContext *data_type();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *SEMI();
    std::vector<Class_item_qualifierContext *> class_item_qualifier();
    Class_item_qualifierContext* class_item_qualifier(size_t i);
    antlr4::tree::TerminalNode *EQ();
    Constant_expressionContext *constant_expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Class_propertyContext* class_property();

  class  Class_methodContext : public antlr4::ParserRuleContext {
  public:
    Class_methodContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Task_declarationContext *task_declaration();
    std::vector<Method_qualifierContext *> method_qualifier();
    Method_qualifierContext* method_qualifier(size_t i);
    Function_declarationContext *function_declaration();
    antlr4::tree::TerminalNode *PURE();
    antlr4::tree::TerminalNode *VIRTUAL();
    Method_prototypeContext *method_prototype();
    antlr4::tree::TerminalNode *SEMI();
    std::vector<Class_item_qualifierContext *> class_item_qualifier();
    Class_item_qualifierContext* class_item_qualifier(size_t i);
    antlr4::tree::TerminalNode *EXTERN();
    Class_constructor_declarationContext *class_constructor_declaration();
    Class_constructor_prototypeContext *class_constructor_prototype();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Class_methodContext* class_method();

  class  Class_constructor_prototypeContext : public antlr4::ParserRuleContext {
  public:
    Class_constructor_prototypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FUNCTION();
    antlr4::tree::TerminalNode *NEW();
    antlr4::tree::TerminalNode *SEMI();
    antlr4::tree::TerminalNode *LPAREN();
    Tf_port_listContext *tf_port_list();
    antlr4::tree::TerminalNode *RPAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Class_constructor_prototypeContext* class_constructor_prototype();

  class  Class_constraintContext : public antlr4::ParserRuleContext {
  public:
    Class_constraintContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Constraint_prototypeContext *constraint_prototype();
    Constraint_declarationContext *constraint_declaration();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Class_constraintContext* class_constraint();

  class  Class_item_qualifierContext : public antlr4::ParserRuleContext {
  public:
    Class_item_qualifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STATIC();
    antlr4::tree::TerminalNode *PROTECTED();
    antlr4::tree::TerminalNode *LOCAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Class_item_qualifierContext* class_item_qualifier();

  class  Property_qualifierContext : public antlr4::ParserRuleContext {
  public:
    Property_qualifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Random_qualifierContext *random_qualifier();
    Class_item_qualifierContext *class_item_qualifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Property_qualifierContext* property_qualifier();

  class  Random_qualifierContext : public antlr4::ParserRuleContext {
  public:
    Random_qualifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RAND();
    antlr4::tree::TerminalNode *RANDC();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Random_qualifierContext* random_qualifier();

  class  Method_qualifierContext : public antlr4::ParserRuleContext {
  public:
    Method_qualifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VIRTUAL();
    antlr4::tree::TerminalNode *PURE();
    Class_item_qualifierContext *class_item_qualifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Method_qualifierContext* method_qualifier();

  class  Method_prototypeContext : public antlr4::ParserRuleContext {
  public:
    Method_prototypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Task_prototypeContext *task_prototype();
    Function_prototypeContext *function_prototype();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Method_prototypeContext* method_prototype();

  class  Class_constructor_declarationContext : public antlr4::ParserRuleContext {
  public:
    Class_constructor_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FUNCTION();
    std::vector<antlr4::tree::TerminalNode *> NEW();
    antlr4::tree::TerminalNode* NEW(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SEMI();
    antlr4::tree::TerminalNode* SEMI(size_t i);
    antlr4::tree::TerminalNode *ENDFUNCTION();
    Class_scopeContext *class_scope();
    std::vector<antlr4::tree::TerminalNode *> LPAREN();
    antlr4::tree::TerminalNode* LPAREN(size_t i);
    Tf_port_listContext *tf_port_list();
    std::vector<antlr4::tree::TerminalNode *> RPAREN();
    antlr4::tree::TerminalNode* RPAREN(size_t i);
    std::vector<Block_item_declarationContext *> block_item_declaration();
    Block_item_declarationContext* block_item_declaration(size_t i);
    antlr4::tree::TerminalNode *SUPER();
    antlr4::tree::TerminalNode *DOT();
    std::vector<Function_statement_or_nullContext *> function_statement_or_null();
    Function_statement_or_nullContext* function_statement_or_null(size_t i);
    antlr4::tree::TerminalNode *COLON();
    List_of_argumentsContext *list_of_arguments();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Class_constructor_declarationContext* class_constructor_declaration();

  class  Constraint_declarationContext : public antlr4::ParserRuleContext {
  public:
    Constraint_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CONSTRAINT();
    IdentifierContext *identifier();
    Constraint_blockContext *constraint_block();
    antlr4::tree::TerminalNode *STATIC();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Constraint_declarationContext* constraint_declaration();

  class  Constraint_blockContext : public antlr4::ParserRuleContext {
  public:
    Constraint_blockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LBRACE();
    antlr4::tree::TerminalNode *RBRACE();
    std::vector<Constraint_block_itemContext *> constraint_block_item();
    Constraint_block_itemContext* constraint_block_item(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Constraint_blockContext* constraint_block();

  class  Constraint_block_itemContext : public antlr4::ParserRuleContext {
  public:
    Constraint_block_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SOLVE();
    std::vector<Solve_before_listContext *> solve_before_list();
    Solve_before_listContext* solve_before_list(size_t i);
    antlr4::tree::TerminalNode *BEFORE();
    antlr4::tree::TerminalNode *SEMI();
    Constraint_expressionContext *constraint_expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Constraint_block_itemContext* constraint_block_item();

  class  Solve_before_listContext : public antlr4::ParserRuleContext {
  public:
    Solve_before_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Constraint_primaryContext *> constraint_primary();
    Constraint_primaryContext* constraint_primary(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Solve_before_listContext* solve_before_list();

  class  Constraint_primaryContext : public antlr4::ParserRuleContext {
  public:
    Constraint_primaryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Hierarchical_identifierContext *hierarchical_identifier();
    Select_Context *select_();
    Implicit_class_handleContext *implicit_class_handle();
    antlr4::tree::TerminalNode *DOT();
    Class_scopeContext *class_scope();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Constraint_primaryContext* constraint_primary();

  class  Constraint_expressionContext : public antlr4::ParserRuleContext {
  public:
    Constraint_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Expression_or_distContext *expression_or_dist();
    antlr4::tree::TerminalNode *SEMI();
    antlr4::tree::TerminalNode *SOFT();
    Uniqueness_constraintContext *uniqueness_constraint();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RARROW();
    std::vector<Constraint_setContext *> constraint_set();
    Constraint_setContext* constraint_set(size_t i);
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    antlr4::tree::TerminalNode *ELSE();
    antlr4::tree::TerminalNode *FOREACH();
    Ps_or_hierarchical_array_identifierContext *ps_or_hierarchical_array_identifier();
    antlr4::tree::TerminalNode *LBRACK();
    Loop_variablesContext *loop_variables();
    antlr4::tree::TerminalNode *RBRACK();
    antlr4::tree::TerminalNode *DISABLE();
    Constraint_primaryContext *constraint_primary();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Constraint_expressionContext* constraint_expression();

  class  Uniqueness_constraintContext : public antlr4::ParserRuleContext {
  public:
    Uniqueness_constraintContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *UNIQUE();
    antlr4::tree::TerminalNode *LBRACE();
    Open_range_listContext *open_range_list();
    antlr4::tree::TerminalNode *RBRACE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Uniqueness_constraintContext* uniqueness_constraint();

  class  Constraint_setContext : public antlr4::ParserRuleContext {
  public:
    Constraint_setContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Constraint_expressionContext *> constraint_expression();
    Constraint_expressionContext* constraint_expression(size_t i);
    antlr4::tree::TerminalNode *LBRACE();
    antlr4::tree::TerminalNode *RBRACE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Constraint_setContext* constraint_set();

  class  Dist_listContext : public antlr4::ParserRuleContext {
  public:
    Dist_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Dist_itemContext *> dist_item();
    Dist_itemContext* dist_item(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Dist_listContext* dist_list();

  class  Dist_itemContext : public antlr4::ParserRuleContext {
  public:
    Dist_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Value_rangeContext *value_range();
    Dist_weightContext *dist_weight();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Dist_itemContext* dist_item();

  class  Dist_weightContext : public antlr4::ParserRuleContext {
  public:
    Dist_weightContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COLONEQ();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *COLONSLASH();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Dist_weightContext* dist_weight();

  class  Constraint_prototypeContext : public antlr4::ParserRuleContext {
  public:
    Constraint_prototypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CONSTRAINT();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *SEMI();
    Constraint_prototype_qualifierContext *constraint_prototype_qualifier();
    antlr4::tree::TerminalNode *STATIC();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Constraint_prototypeContext* constraint_prototype();

  class  Constraint_prototype_qualifierContext : public antlr4::ParserRuleContext {
  public:
    Constraint_prototype_qualifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EXTERN();
    antlr4::tree::TerminalNode *PURE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Constraint_prototype_qualifierContext* constraint_prototype_qualifier();

  class  Extern_constraint_declarationContext : public antlr4::ParserRuleContext {
  public:
    Extern_constraint_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CONSTRAINT();
    Class_scopeContext *class_scope();
    IdentifierContext *identifier();
    Constraint_blockContext *constraint_block();
    antlr4::tree::TerminalNode *STATIC();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Extern_constraint_declarationContext* extern_constraint_declaration();

  class  Identifier_listContext : public antlr4::ParserRuleContext {
  public:
    Identifier_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Identifier_listContext* identifier_list();

  class  Package_itemContext : public antlr4::ParserRuleContext {
  public:
    Package_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Package_or_generate_item_declarationContext *package_or_generate_item_declaration();
    Anonymous_programContext *anonymous_program();
    Package_export_declarationContext *package_export_declaration();
    Timeunits_declarationContext *timeunits_declaration();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Package_itemContext* package_item();

  class  Package_or_generate_item_declarationContext : public antlr4::ParserRuleContext {
  public:
    Package_or_generate_item_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Net_declarationContext *net_declaration();
    Data_declarationContext *data_declaration();
    Task_declarationContext *task_declaration();
    Function_declarationContext *function_declaration();
    Checker_declarationContext *checker_declaration();
    Dpi_import_exportContext *dpi_import_export();
    Extern_constraint_declarationContext *extern_constraint_declaration();
    Class_declarationContext *class_declaration();
    Interface_class_declarationContext *interface_class_declaration();
    Class_constructor_declarationContext *class_constructor_declaration();
    Local_parameter_declarationContext *local_parameter_declaration();
    antlr4::tree::TerminalNode *SEMI();
    Parameter_declarationContext *parameter_declaration();
    Covergroup_declarationContext *covergroup_declaration();
    Assertion_item_declarationContext *assertion_item_declaration();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Package_or_generate_item_declarationContext* package_or_generate_item_declaration();

  class  Anonymous_programContext : public antlr4::ParserRuleContext {
  public:
    Anonymous_programContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PROGRAM();
    antlr4::tree::TerminalNode *SEMI();
    antlr4::tree::TerminalNode *ENDPROGRAM();
    std::vector<Anonymous_program_itemContext *> anonymous_program_item();
    Anonymous_program_itemContext* anonymous_program_item(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Anonymous_programContext* anonymous_program();

  class  Anonymous_program_itemContext : public antlr4::ParserRuleContext {
  public:
    Anonymous_program_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Task_declarationContext *task_declaration();
    Function_declarationContext *function_declaration();
    Class_declarationContext *class_declaration();
    Interface_class_declarationContext *interface_class_declaration();
    Covergroup_declarationContext *covergroup_declaration();
    Class_constructor_declarationContext *class_constructor_declaration();
    antlr4::tree::TerminalNode *SEMI();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Anonymous_program_itemContext* anonymous_program_item();

  class  Local_parameter_declarationContext : public antlr4::ParserRuleContext {
  public:
    Local_parameter_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LOCALPARAM();
    Data_type_or_implicitContext *data_type_or_implicit();
    List_of_param_assignmentsContext *list_of_param_assignments();
    antlr4::tree::TerminalNode *TYPE();
    List_of_type_assignmentsContext *list_of_type_assignments();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Local_parameter_declarationContext* local_parameter_declaration();

  class  Parameter_declarationContext : public antlr4::ParserRuleContext {
  public:
    Parameter_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PARAMETER();
    Data_type_or_implicitContext *data_type_or_implicit();
    List_of_param_assignmentsContext *list_of_param_assignments();
    antlr4::tree::TerminalNode *TYPE();
    List_of_type_assignmentsContext *list_of_type_assignments();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Parameter_declarationContext* parameter_declaration();

  class  Specparam_declarationContext : public antlr4::ParserRuleContext {
  public:
    Specparam_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SPECPARAM();
    List_of_specparam_assignmentsContext *list_of_specparam_assignments();
    antlr4::tree::TerminalNode *SEMI();
    Packed_dimensionContext *packed_dimension();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Specparam_declarationContext* specparam_declaration();

  class  Inout_declarationContext : public antlr4::ParserRuleContext {
  public:
    Inout_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INOUT();
    Net_port_typeContext *net_port_type();
    List_of_port_identifiersContext *list_of_port_identifiers();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Inout_declarationContext* inout_declaration();

  class  Input_declarationContext : public antlr4::ParserRuleContext {
  public:
    Input_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INPUT();
    Net_port_typeContext *net_port_type();
    List_of_port_identifiersContext *list_of_port_identifiers();
    Variable_port_typeContext *variable_port_type();
    List_of_variable_identifiersContext *list_of_variable_identifiers();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Input_declarationContext* input_declaration();

  class  Output_declarationContext : public antlr4::ParserRuleContext {
  public:
    Output_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OUTPUT();
    Net_port_typeContext *net_port_type();
    List_of_port_identifiersContext *list_of_port_identifiers();
    Variable_port_typeContext *variable_port_type();
    List_of_variable_port_identifiersContext *list_of_variable_port_identifiers();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Output_declarationContext* output_declaration();

  class  Interface_port_declarationContext : public antlr4::ParserRuleContext {
  public:
    Interface_port_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    List_of_interface_identifiersContext *list_of_interface_identifiers();
    antlr4::tree::TerminalNode *DOT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Interface_port_declarationContext* interface_port_declaration();

  class  Ref_declarationContext : public antlr4::ParserRuleContext {
  public:
    Ref_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REF();
    Variable_port_typeContext *variable_port_type();
    List_of_variable_identifiersContext *list_of_variable_identifiers();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Ref_declarationContext* ref_declaration();

  class  Data_declarationContext : public antlr4::ParserRuleContext {
  public:
    Data_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Data_type_or_implicitContext *data_type_or_implicit();
    List_of_variable_decl_assignmentsContext *list_of_variable_decl_assignments();
    antlr4::tree::TerminalNode *SEMI();
    antlr4::tree::TerminalNode *CONST();
    antlr4::tree::TerminalNode *VAR();
    LifetimeContext *lifetime();
    Type_declarationContext *type_declaration();
    Package_import_declarationContext *package_import_declaration();
    Net_type_declarationContext *net_type_declaration();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Data_declarationContext* data_declaration();

  class  Package_import_declarationContext : public antlr4::ParserRuleContext {
  public:
    Package_import_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IMPORT();
    std::vector<Package_import_itemContext *> package_import_item();
    Package_import_itemContext* package_import_item(size_t i);
    antlr4::tree::TerminalNode *SEMI();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Package_import_declarationContext* package_import_declaration();

  class  Package_import_itemContext : public antlr4::ParserRuleContext {
  public:
    Package_import_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    antlr4::tree::TerminalNode *COLONCOLON();
    antlr4::tree::TerminalNode *STAR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Package_import_itemContext* package_import_item();

  class  Package_export_declarationContext : public antlr4::ParserRuleContext {
  public:
    Package_export_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EXPORT();
    antlr4::tree::TerminalNode *STARCOLONSTAR();
    antlr4::tree::TerminalNode *SEMI();
    std::vector<Package_import_itemContext *> package_import_item();
    Package_import_itemContext* package_import_item(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Package_export_declarationContext* package_export_declaration();

  class  Genvar_declarationContext : public antlr4::ParserRuleContext {
  public:
    Genvar_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GENVAR();
    List_of_genvar_identifiersContext *list_of_genvar_identifiers();
    antlr4::tree::TerminalNode *SEMI();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Genvar_declarationContext* genvar_declaration();

  class  Net_declarationContext : public antlr4::ParserRuleContext {
  public:
    Net_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Net_typeContext *net_type();
    Data_type_or_implicitContext *data_type_or_implicit();
    List_of_net_decl_assignmentsContext *list_of_net_decl_assignments();
    antlr4::tree::TerminalNode *SEMI();
    Drive_strengthContext *drive_strength();
    Charge_strengthContext *charge_strength();
    Delay3Context *delay3();
    antlr4::tree::TerminalNode *VECTORED();
    antlr4::tree::TerminalNode *SCALARED();
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    Delay_controlContext *delay_control();
    antlr4::tree::TerminalNode *INTERCONNECT();
    Implicit_data_typeContext *implicit_data_type();
    antlr4::tree::TerminalNode *HASH();
    Delay_valueContext *delay_value();
    std::vector<Unpacked_dimensionContext *> unpacked_dimension();
    Unpacked_dimensionContext* unpacked_dimension(size_t i);
    antlr4::tree::TerminalNode *COMMA();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Net_declarationContext* net_declaration();

  class  Type_declarationContext : public antlr4::ParserRuleContext {
  public:
    Type_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TYPEDEF();
    Data_typeContext *data_type();
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    antlr4::tree::TerminalNode *SEMI();
    std::vector<Variable_dimensionContext *> variable_dimension();
    Variable_dimensionContext* variable_dimension(size_t i);
    Constant_bit_selectContext *constant_bit_select();
    antlr4::tree::TerminalNode *DOT();
    antlr4::tree::TerminalNode *ENUM();
    antlr4::tree::TerminalNode *STRUCT();
    antlr4::tree::TerminalNode *UNION();
    antlr4::tree::TerminalNode *CLASS();
    antlr4::tree::TerminalNode *INTERFACE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Type_declarationContext* type_declaration();

  class  Net_type_declarationContext : public antlr4::ParserRuleContext {
  public:
    Net_type_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NETTYPE();
    Data_typeContext *data_type();
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    antlr4::tree::TerminalNode *SEMI();
    antlr4::tree::TerminalNode *WITH();
    Package_scopeContext *package_scope();
    Class_scopeContext *class_scope();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Net_type_declarationContext* net_type_declaration();

  class  LifetimeContext : public antlr4::ParserRuleContext {
  public:
    LifetimeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STATIC();
    antlr4::tree::TerminalNode *AUTOMATIC();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LifetimeContext* lifetime();

  class  Data_typeContext : public antlr4::ParserRuleContext {
  public:
    Data_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Integer_vector_typeContext *integer_vector_type();
    SigningContext *signing();
    std::vector<Packed_dimensionContext *> packed_dimension();
    Packed_dimensionContext* packed_dimension(size_t i);
    Integer_atom_typeContext *integer_atom_type();
    Non_integer_typeContext *non_integer_type();
    Struct_unionContext *struct_union();
    antlr4::tree::TerminalNode *LBRACE();
    antlr4::tree::TerminalNode *RBRACE();
    antlr4::tree::TerminalNode *PACKED();
    std::vector<Struct_union_memberContext *> struct_union_member();
    Struct_union_memberContext* struct_union_member(size_t i);
    antlr4::tree::TerminalNode *ENUM();
    std::vector<Enum_name_declarationContext *> enum_name_declaration();
    Enum_name_declarationContext* enum_name_declaration(size_t i);
    Enum_base_typeContext *enum_base_type();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *STRING();
    antlr4::tree::TerminalNode *CHANDLE();
    antlr4::tree::TerminalNode *VIRTUAL();
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    antlr4::tree::TerminalNode *INTERFACE();
    Parameter_value_assignmentContext *parameter_value_assignment();
    antlr4::tree::TerminalNode *DOT();
    Class_scopeContext *class_scope();
    Package_scopeContext *package_scope();
    Class_typeContext *class_type();
    antlr4::tree::TerminalNode *EVENT();
    Ps_identifierContext *ps_identifier();
    Type_referenceContext *type_reference();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Data_typeContext* data_type();

  class  Data_type_or_implicitContext : public antlr4::ParserRuleContext {
  public:
    Data_type_or_implicitContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Data_typeContext *data_type();
    Implicit_data_typeContext *implicit_data_type();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Data_type_or_implicitContext* data_type_or_implicit();

  class  Implicit_data_typeContext : public antlr4::ParserRuleContext {
  public:
    Implicit_data_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SigningContext *signing();
    std::vector<Packed_dimensionContext *> packed_dimension();
    Packed_dimensionContext* packed_dimension(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Implicit_data_typeContext* implicit_data_type();

  class  Enum_base_typeContext : public antlr4::ParserRuleContext {
  public:
    Enum_base_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Integer_atom_typeContext *integer_atom_type();
    SigningContext *signing();
    Integer_vector_typeContext *integer_vector_type();
    Packed_dimensionContext *packed_dimension();
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Enum_base_typeContext* enum_base_type();

  class  Enum_name_declarationContext : public antlr4::ParserRuleContext {
  public:
    Enum_name_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *LBRACK();
    std::vector<Integral_numberContext *> integral_number();
    Integral_numberContext* integral_number(size_t i);
    antlr4::tree::TerminalNode *RBRACK();
    antlr4::tree::TerminalNode *EQ();
    Constant_expressionContext *constant_expression();
    antlr4::tree::TerminalNode *COLON();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Enum_name_declarationContext* enum_name_declaration();

  class  Class_scopeContext : public antlr4::ParserRuleContext {
  public:
    Class_scopeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Class_typeContext *class_type();
    antlr4::tree::TerminalNode *COLONCOLON();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Class_scopeContext* class_scope();

  class  Class_typeContext : public antlr4::ParserRuleContext {
  public:
    Class_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Ps_identifierContext *ps_identifier();
    std::vector<Parameter_value_assignmentContext *> parameter_value_assignment();
    Parameter_value_assignmentContext* parameter_value_assignment(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COLONCOLON();
    antlr4::tree::TerminalNode* COLONCOLON(size_t i);
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Class_typeContext* class_type();

  class  Integer_typeContext : public antlr4::ParserRuleContext {
  public:
    Integer_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Integer_vector_typeContext *integer_vector_type();
    Integer_atom_typeContext *integer_atom_type();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Integer_typeContext* integer_type();

  class  Integer_atom_typeContext : public antlr4::ParserRuleContext {
  public:
    Integer_atom_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BYTE();
    antlr4::tree::TerminalNode *SHORTINT();
    antlr4::tree::TerminalNode *INT();
    antlr4::tree::TerminalNode *LONGINT();
    antlr4::tree::TerminalNode *INTEGER();
    antlr4::tree::TerminalNode *TIME();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Integer_atom_typeContext* integer_atom_type();

  class  Integer_vector_typeContext : public antlr4::ParserRuleContext {
  public:
    Integer_vector_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BIT();
    antlr4::tree::TerminalNode *LOGIC();
    antlr4::tree::TerminalNode *REG();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Integer_vector_typeContext* integer_vector_type();

  class  Non_integer_typeContext : public antlr4::ParserRuleContext {
  public:
    Non_integer_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHORTREAL();
    antlr4::tree::TerminalNode *REAL();
    antlr4::tree::TerminalNode *REALTIME();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Non_integer_typeContext* non_integer_type();

  class  Net_typeContext : public antlr4::ParserRuleContext {
  public:
    Net_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SUPPLY0();
    antlr4::tree::TerminalNode *SUPPLY1();
    antlr4::tree::TerminalNode *TRI();
    antlr4::tree::TerminalNode *TRIAND();
    antlr4::tree::TerminalNode *TRIOR();
    antlr4::tree::TerminalNode *TRIREG();
    antlr4::tree::TerminalNode *TRI0();
    antlr4::tree::TerminalNode *TRI1();
    antlr4::tree::TerminalNode *UWIRE();
    antlr4::tree::TerminalNode *WIRE();
    antlr4::tree::TerminalNode *WAND();
    antlr4::tree::TerminalNode *WOR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Net_typeContext* net_type();

  class  Net_port_typeContext : public antlr4::ParserRuleContext {
  public:
    Net_port_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Data_type_or_implicitContext *data_type_or_implicit();
    Net_typeContext *net_type();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *INTERCONNECT();
    Implicit_data_typeContext *implicit_data_type();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Net_port_typeContext* net_port_type();

  class  Variable_port_typeContext : public antlr4::ParserRuleContext {
  public:
    Variable_port_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Var_data_typeContext *var_data_type();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Variable_port_typeContext* variable_port_type();

  class  Var_data_typeContext : public antlr4::ParserRuleContext {
  public:
    Var_data_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Data_typeContext *data_type();
    antlr4::tree::TerminalNode *VAR();
    Data_type_or_implicitContext *data_type_or_implicit();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Var_data_typeContext* var_data_type();

  class  SigningContext : public antlr4::ParserRuleContext {
  public:
    SigningContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SIGNED();
    antlr4::tree::TerminalNode *UNSIGNED();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SigningContext* signing();

  class  Simple_typeContext : public antlr4::ParserRuleContext {
  public:
    Simple_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Integer_typeContext *integer_type();
    Non_integer_typeContext *non_integer_type();
    Ps_type_identifierContext *ps_type_identifier();
    Ps_parameter_identifierContext *ps_parameter_identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Simple_typeContext* simple_type();

  class  Struct_union_memberContext : public antlr4::ParserRuleContext {
  public:
    Struct_union_memberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Data_type_or_voidContext *data_type_or_void();
    List_of_variable_decl_assignmentsContext *list_of_variable_decl_assignments();
    antlr4::tree::TerminalNode *SEMI();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);
    Random_qualifierContext *random_qualifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Struct_union_memberContext* struct_union_member();

  class  Data_type_or_voidContext : public antlr4::ParserRuleContext {
  public:
    Data_type_or_voidContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Data_typeContext *data_type();
    antlr4::tree::TerminalNode *VOID();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Data_type_or_voidContext* data_type_or_void();

  class  Struct_unionContext : public antlr4::ParserRuleContext {
  public:
    Struct_unionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STRUCT();
    antlr4::tree::TerminalNode *UNION();
    antlr4::tree::TerminalNode *TAGGED();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Struct_unionContext* struct_union();

  class  Type_referenceContext : public antlr4::ParserRuleContext {
  public:
    Type_referenceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TYPE();
    antlr4::tree::TerminalNode *LPAREN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RPAREN();
    Data_typeContext *data_type();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Type_referenceContext* type_reference();

  class  Drive_strengthContext : public antlr4::ParserRuleContext {
  public:
    Drive_strengthContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    Strength0Context *strength0();
    antlr4::tree::TerminalNode *COMMA();
    Strength1Context *strength1();
    antlr4::tree::TerminalNode *RPAREN();
    antlr4::tree::TerminalNode *HIGHZ1();
    antlr4::tree::TerminalNode *HIGHZ0();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Drive_strengthContext* drive_strength();

  class  Strength0Context : public antlr4::ParserRuleContext {
  public:
    Strength0Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SUPPLY0();
    antlr4::tree::TerminalNode *STRONG0();
    antlr4::tree::TerminalNode *PULL0();
    antlr4::tree::TerminalNode *WEAK0();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Strength0Context* strength0();

  class  Strength1Context : public antlr4::ParserRuleContext {
  public:
    Strength1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SUPPLY1();
    antlr4::tree::TerminalNode *STRONG1();
    antlr4::tree::TerminalNode *PULL1();
    antlr4::tree::TerminalNode *WEAK1();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Strength1Context* strength1();

  class  Charge_strengthContext : public antlr4::ParserRuleContext {
  public:
    Charge_strengthContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *SMALL();
    antlr4::tree::TerminalNode *RPAREN();
    antlr4::tree::TerminalNode *MEDIUM();
    antlr4::tree::TerminalNode *LARGE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Charge_strengthContext* charge_strength();

  class  Delay3Context : public antlr4::ParserRuleContext {
  public:
    Delay3Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HASH();
    Delay_valueContext *delay_value();
    antlr4::tree::TerminalNode *LPAREN();
    std::vector<Mintypmax_expressionContext *> mintypmax_expression();
    Mintypmax_expressionContext* mintypmax_expression(size_t i);
    antlr4::tree::TerminalNode *RPAREN();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Delay3Context* delay3();

  class  Delay2Context : public antlr4::ParserRuleContext {
  public:
    Delay2Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HASH();
    Delay_valueContext *delay_value();
    antlr4::tree::TerminalNode *LPAREN();
    std::vector<Mintypmax_expressionContext *> mintypmax_expression();
    Mintypmax_expressionContext* mintypmax_expression(size_t i);
    antlr4::tree::TerminalNode *RPAREN();
    antlr4::tree::TerminalNode *COMMA();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Delay2Context* delay2();

  class  Delay_valueContext : public antlr4::ParserRuleContext {
  public:
    Delay_valueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DECIMAL_NUMBER();
    antlr4::tree::TerminalNode *REAL_NUMBER();
    Ps_identifierContext *ps_identifier();
    antlr4::tree::TerminalNode *TIME_LITERAL();
    antlr4::tree::TerminalNode *ONE_STEP();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Delay_valueContext* delay_value();

  class  List_of_defparam_assignmentsContext : public antlr4::ParserRuleContext {
  public:
    List_of_defparam_assignmentsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Defparam_assignmentContext *> defparam_assignment();
    Defparam_assignmentContext* defparam_assignment(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  List_of_defparam_assignmentsContext* list_of_defparam_assignments();

  class  List_of_genvar_identifiersContext : public antlr4::ParserRuleContext {
  public:
    List_of_genvar_identifiersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  List_of_genvar_identifiersContext* list_of_genvar_identifiers();

  class  List_of_interface_identifiersContext : public antlr4::ParserRuleContext {
  public:
    List_of_interface_identifiersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    std::vector<Unpacked_dimensionContext *> unpacked_dimension();
    Unpacked_dimensionContext* unpacked_dimension(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  List_of_interface_identifiersContext* list_of_interface_identifiers();

  class  List_of_net_decl_assignmentsContext : public antlr4::ParserRuleContext {
  public:
    List_of_net_decl_assignmentsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Net_decl_assignmentContext *> net_decl_assignment();
    Net_decl_assignmentContext* net_decl_assignment(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  List_of_net_decl_assignmentsContext* list_of_net_decl_assignments();

  class  List_of_param_assignmentsContext : public antlr4::ParserRuleContext {
  public:
    List_of_param_assignmentsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Param_assignmentContext *> param_assignment();
    Param_assignmentContext* param_assignment(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  List_of_param_assignmentsContext* list_of_param_assignments();

  class  List_of_port_identifiersContext : public antlr4::ParserRuleContext {
  public:
    List_of_port_identifiersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    std::vector<Unpacked_dimensionContext *> unpacked_dimension();
    Unpacked_dimensionContext* unpacked_dimension(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  List_of_port_identifiersContext* list_of_port_identifiers();

  class  List_of_udp_port_identifiersContext : public antlr4::ParserRuleContext {
  public:
    List_of_udp_port_identifiersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  List_of_udp_port_identifiersContext* list_of_udp_port_identifiers();

  class  List_of_specparam_assignmentsContext : public antlr4::ParserRuleContext {
  public:
    List_of_specparam_assignmentsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Specparam_assignmentContext *> specparam_assignment();
    Specparam_assignmentContext* specparam_assignment(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  List_of_specparam_assignmentsContext* list_of_specparam_assignments();

  class  List_of_tf_variable_identifiersContext : public antlr4::ParserRuleContext {
  public:
    List_of_tf_variable_identifiersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    std::vector<Variable_dimensionContext *> variable_dimension();
    Variable_dimensionContext* variable_dimension(size_t i);
    std::vector<antlr4::tree::TerminalNode *> EQ();
    antlr4::tree::TerminalNode* EQ(size_t i);
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  List_of_tf_variable_identifiersContext* list_of_tf_variable_identifiers();

  class  List_of_type_assignmentsContext : public antlr4::ParserRuleContext {
  public:
    List_of_type_assignmentsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Type_assignmentContext *> type_assignment();
    Type_assignmentContext* type_assignment(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  List_of_type_assignmentsContext* list_of_type_assignments();

  class  List_of_variable_decl_assignmentsContext : public antlr4::ParserRuleContext {
  public:
    List_of_variable_decl_assignmentsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Variable_decl_assignmentContext *> variable_decl_assignment();
    Variable_decl_assignmentContext* variable_decl_assignment(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  List_of_variable_decl_assignmentsContext* list_of_variable_decl_assignments();

  class  List_of_variable_identifiersContext : public antlr4::ParserRuleContext {
  public:
    List_of_variable_identifiersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    std::vector<Variable_dimensionContext *> variable_dimension();
    Variable_dimensionContext* variable_dimension(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  List_of_variable_identifiersContext* list_of_variable_identifiers();

  class  List_of_variable_port_identifiersContext : public antlr4::ParserRuleContext {
  public:
    List_of_variable_port_identifiersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    std::vector<Variable_dimensionContext *> variable_dimension();
    Variable_dimensionContext* variable_dimension(size_t i);
    std::vector<antlr4::tree::TerminalNode *> EQ();
    antlr4::tree::TerminalNode* EQ(size_t i);
    std::vector<Constant_expressionContext *> constant_expression();
    Constant_expressionContext* constant_expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  List_of_variable_port_identifiersContext* list_of_variable_port_identifiers();

  class  Defparam_assignmentContext : public antlr4::ParserRuleContext {
  public:
    Defparam_assignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Hierarchical_identifierContext *hierarchical_identifier();
    antlr4::tree::TerminalNode *EQ();
    Constant_mintypmax_expressionContext *constant_mintypmax_expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Defparam_assignmentContext* defparam_assignment();

  class  Net_decl_assignmentContext : public antlr4::ParserRuleContext {
  public:
    Net_decl_assignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    std::vector<Unpacked_dimensionContext *> unpacked_dimension();
    Unpacked_dimensionContext* unpacked_dimension(size_t i);
    antlr4::tree::TerminalNode *EQ();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Net_decl_assignmentContext* net_decl_assignment();

  class  Param_assignmentContext : public antlr4::ParserRuleContext {
  public:
    Param_assignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    std::vector<Unpacked_dimensionContext *> unpacked_dimension();
    Unpacked_dimensionContext* unpacked_dimension(size_t i);
    antlr4::tree::TerminalNode *EQ();
    Constant_param_expressionContext *constant_param_expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Param_assignmentContext* param_assignment();

  class  Specparam_assignmentContext : public antlr4::ParserRuleContext {
  public:
    Specparam_assignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *EQ();
    Constant_mintypmax_expressionContext *constant_mintypmax_expression();
    Pulse_control_specparamContext *pulse_control_specparam();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Specparam_assignmentContext* specparam_assignment();

  class  Type_assignmentContext : public antlr4::ParserRuleContext {
  public:
    Type_assignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *EQ();
    Data_typeContext *data_type();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Type_assignmentContext* type_assignment();

  class  Pulse_control_specparamContext : public antlr4::ParserRuleContext {
  public:
    Pulse_control_specparamContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PATH_PULSE();
    antlr4::tree::TerminalNode *EQ();
    antlr4::tree::TerminalNode *LPAREN();
    Reject_limit_valueContext *reject_limit_value();
    antlr4::tree::TerminalNode *RPAREN();
    antlr4::tree::TerminalNode *COMMA();
    Error_limit_valueContext *error_limit_value();
    Specify_input_terminal_descriptorContext *specify_input_terminal_descriptor();
    antlr4::tree::TerminalNode *DOLLAR();
    Specify_output_terminal_descriptorContext *specify_output_terminal_descriptor();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Pulse_control_specparamContext* pulse_control_specparam();

  class  Error_limit_valueContext : public antlr4::ParserRuleContext {
  public:
    Error_limit_valueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Limit_valueContext *limit_value();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Error_limit_valueContext* error_limit_value();

  class  Reject_limit_valueContext : public antlr4::ParserRuleContext {
  public:
    Reject_limit_valueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Limit_valueContext *limit_value();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Reject_limit_valueContext* reject_limit_value();

  class  Limit_valueContext : public antlr4::ParserRuleContext {
  public:
    Limit_valueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Constant_mintypmax_expressionContext *constant_mintypmax_expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Limit_valueContext* limit_value();

  class  Variable_decl_assignmentContext : public antlr4::ParserRuleContext {
  public:
    Variable_decl_assignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    std::vector<Variable_dimensionContext *> variable_dimension();
    Variable_dimensionContext* variable_dimension(size_t i);
    antlr4::tree::TerminalNode *EQ();
    ExpressionContext *expression();
    Unsized_dimensionContext *unsized_dimension();
    Dynamic_array_newContext *dynamic_array_new();
    Class_newContext *class_new();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Variable_decl_assignmentContext* variable_decl_assignment();

  class  Class_newContext : public antlr4::ParserRuleContext {
  public:
    Class_newContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NEW();
    Class_scopeContext *class_scope();
    antlr4::tree::TerminalNode *LPAREN();
    List_of_argumentsContext *list_of_arguments();
    antlr4::tree::TerminalNode *RPAREN();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Class_newContext* class_new();

  class  Dynamic_array_newContext : public antlr4::ParserRuleContext {
  public:
    Dynamic_array_newContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NEW();
    antlr4::tree::TerminalNode *LBRACK();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *RBRACK();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Dynamic_array_newContext* dynamic_array_new();

  class  Unpacked_dimensionContext : public antlr4::ParserRuleContext {
  public:
    Unpacked_dimensionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LBRACK();
    Constant_rangeContext *constant_range();
    antlr4::tree::TerminalNode *RBRACK();
    Constant_expressionContext *constant_expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Unpacked_dimensionContext* unpacked_dimension();

  class  Packed_dimensionContext : public antlr4::ParserRuleContext {
  public:
    Packed_dimensionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LBRACK();
    Constant_rangeContext *constant_range();
    antlr4::tree::TerminalNode *RBRACK();
    Unsized_dimensionContext *unsized_dimension();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Packed_dimensionContext* packed_dimension();

  class  Associative_dimensionContext : public antlr4::ParserRuleContext {
  public:
    Associative_dimensionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LBRACK();
    Data_typeContext *data_type();
    antlr4::tree::TerminalNode *RBRACK();
    antlr4::tree::TerminalNode *STAR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Associative_dimensionContext* associative_dimension();

  class  Variable_dimensionContext : public antlr4::ParserRuleContext {
  public:
    Variable_dimensionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Unsized_dimensionContext *unsized_dimension();
    Unpacked_dimensionContext *unpacked_dimension();
    Associative_dimensionContext *associative_dimension();
    Queue_dimensionContext *queue_dimension();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Variable_dimensionContext* variable_dimension();

  class  Queue_dimensionContext : public antlr4::ParserRuleContext {
  public:
    Queue_dimensionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LBRACK();
    antlr4::tree::TerminalNode *DOLLAR();
    antlr4::tree::TerminalNode *RBRACK();
    antlr4::tree::TerminalNode *COLON();
    Constant_expressionContext *constant_expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Queue_dimensionContext* queue_dimension();

  class  Unsized_dimensionContext : public antlr4::ParserRuleContext {
  public:
    Unsized_dimensionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LBRACK();
    antlr4::tree::TerminalNode *RBRACK();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Unsized_dimensionContext* unsized_dimension();

  class  Function_data_type_or_implicitContext : public antlr4::ParserRuleContext {
  public:
    Function_data_type_or_implicitContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Data_type_or_voidContext *data_type_or_void();
    Implicit_data_typeContext *implicit_data_type();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Function_data_type_or_implicitContext* function_data_type_or_implicit();

  class  Function_declarationContext : public antlr4::ParserRuleContext {
  public:
    Function_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FUNCTION();
    Function_body_declarationContext *function_body_declaration();
    LifetimeContext *lifetime();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Function_declarationContext* function_declaration();

  class  Function_body_declarationContext : public antlr4::ParserRuleContext {
  public:
    Function_body_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Function_data_type_or_implicitContext *function_data_type_or_implicit();
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    antlr4::tree::TerminalNode *SEMI();
    antlr4::tree::TerminalNode *ENDFUNCTION();
    antlr4::tree::TerminalNode *DOT();
    Class_scopeContext *class_scope();
    std::vector<Tf_item_declarationContext *> tf_item_declaration();
    Tf_item_declarationContext* tf_item_declaration(size_t i);
    std::vector<Function_statement_or_nullContext *> function_statement_or_null();
    Function_statement_or_nullContext* function_statement_or_null(size_t i);
    antlr4::tree::TerminalNode *COLON();
    antlr4::tree::TerminalNode *LPAREN();
    Tf_port_listContext *tf_port_list();
    antlr4::tree::TerminalNode *RPAREN();
    std::vector<Block_item_declarationContext *> block_item_declaration();
    Block_item_declarationContext* block_item_declaration(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Function_body_declarationContext* function_body_declaration();

  class  Function_prototypeContext : public antlr4::ParserRuleContext {
  public:
    Function_prototypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FUNCTION();
    Data_type_or_voidContext *data_type_or_void();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *LPAREN();
    Tf_port_listContext *tf_port_list();
    antlr4::tree::TerminalNode *RPAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Function_prototypeContext* function_prototype();

  class  Dpi_import_exportContext : public antlr4::ParserRuleContext {
  public:
    Dpi_import_exportContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IMPORT();
    Dpi_spec_stringContext *dpi_spec_string();
    Dpi_function_protoContext *dpi_function_proto();
    antlr4::tree::TerminalNode *SEMI();
    Dpi_function_import_propertyContext *dpi_function_import_property();
    antlr4::tree::TerminalNode *SIMPLE_IDENTIFIER();
    antlr4::tree::TerminalNode *EQ();
    Dpi_task_protoContext *dpi_task_proto();
    Dpi_task_import_propertyContext *dpi_task_import_property();
    antlr4::tree::TerminalNode *EXPORT();
    antlr4::tree::TerminalNode *FUNCTION();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *TASK();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Dpi_import_exportContext* dpi_import_export();

  class  Dpi_spec_stringContext : public antlr4::ParserRuleContext {
  public:
    Dpi_spec_stringContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DPI_C();
    antlr4::tree::TerminalNode *DPI();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Dpi_spec_stringContext* dpi_spec_string();

  class  Dpi_function_import_propertyContext : public antlr4::ParserRuleContext {
  public:
    Dpi_function_import_propertyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CONTEXT();
    antlr4::tree::TerminalNode *PURE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Dpi_function_import_propertyContext* dpi_function_import_property();

  class  Dpi_task_import_propertyContext : public antlr4::ParserRuleContext {
  public:
    Dpi_task_import_propertyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CONTEXT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Dpi_task_import_propertyContext* dpi_task_import_property();

  class  Dpi_function_protoContext : public antlr4::ParserRuleContext {
  public:
    Dpi_function_protoContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Function_prototypeContext *function_prototype();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Dpi_function_protoContext* dpi_function_proto();

  class  Dpi_task_protoContext : public antlr4::ParserRuleContext {
  public:
    Dpi_task_protoContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Task_prototypeContext *task_prototype();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Dpi_task_protoContext* dpi_task_proto();

  class  Task_declarationContext : public antlr4::ParserRuleContext {
  public:
    Task_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TASK();
    Task_body_declarationContext *task_body_declaration();
    LifetimeContext *lifetime();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Task_declarationContext* task_declaration();

  class  Task_body_declarationContext : public antlr4::ParserRuleContext {
  public:
    Task_body_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    antlr4::tree::TerminalNode *SEMI();
    antlr4::tree::TerminalNode *ENDTASK();
    antlr4::tree::TerminalNode *DOT();
    Class_scopeContext *class_scope();
    std::vector<Tf_item_declarationContext *> tf_item_declaration();
    Tf_item_declarationContext* tf_item_declaration(size_t i);
    std::vector<Statement_or_nullContext *> statement_or_null();
    Statement_or_nullContext* statement_or_null(size_t i);
    antlr4::tree::TerminalNode *COLON();
    antlr4::tree::TerminalNode *LPAREN();
    Tf_port_listContext *tf_port_list();
    antlr4::tree::TerminalNode *RPAREN();
    std::vector<Block_item_declarationContext *> block_item_declaration();
    Block_item_declarationContext* block_item_declaration(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Task_body_declarationContext* task_body_declaration();

  class  Tf_item_declarationContext : public antlr4::ParserRuleContext {
  public:
    Tf_item_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Block_item_declarationContext *block_item_declaration();
    Tf_port_declarationContext *tf_port_declaration();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Tf_item_declarationContext* tf_item_declaration();

  class  Tf_port_listContext : public antlr4::ParserRuleContext {
  public:
    Tf_port_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Tf_port_itemContext *> tf_port_item();
    Tf_port_itemContext* tf_port_item(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Tf_port_listContext* tf_port_list();

  class  Tf_port_itemContext : public antlr4::ParserRuleContext {
  public:
    Tf_port_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Data_type_or_implicitContext *data_type_or_implicit();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);
    Tf_port_directionContext *tf_port_direction();
    antlr4::tree::TerminalNode *VAR();
    IdentifierContext *identifier();
    std::vector<Variable_dimensionContext *> variable_dimension();
    Variable_dimensionContext* variable_dimension(size_t i);
    antlr4::tree::TerminalNode *EQ();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Tf_port_itemContext* tf_port_item();

  class  Tf_port_directionContext : public antlr4::ParserRuleContext {
  public:
    Tf_port_directionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Port_directionContext *port_direction();
    antlr4::tree::TerminalNode *CONST();
    antlr4::tree::TerminalNode *REF();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Tf_port_directionContext* tf_port_direction();

  class  Tf_port_declarationContext : public antlr4::ParserRuleContext {
  public:
    Tf_port_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Tf_port_directionContext *tf_port_direction();
    Data_type_or_implicitContext *data_type_or_implicit();
    List_of_tf_variable_identifiersContext *list_of_tf_variable_identifiers();
    antlr4::tree::TerminalNode *SEMI();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);
    antlr4::tree::TerminalNode *VAR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Tf_port_declarationContext* tf_port_declaration();

  class  Task_prototypeContext : public antlr4::ParserRuleContext {
  public:
    Task_prototypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TASK();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *LPAREN();
    Tf_port_listContext *tf_port_list();
    antlr4::tree::TerminalNode *RPAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Task_prototypeContext* task_prototype();

  class  Block_item_declarationContext : public antlr4::ParserRuleContext {
  public:
    Block_item_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Data_declarationContext *data_declaration();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);
    Local_parameter_declarationContext *local_parameter_declaration();
    antlr4::tree::TerminalNode *SEMI();
    Parameter_declarationContext *parameter_declaration();
    Let_declarationContext *let_declaration();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Block_item_declarationContext* block_item_declaration();

  class  Modport_declarationContext : public antlr4::ParserRuleContext {
  public:
    Modport_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MODPORT();
    std::vector<Modport_itemContext *> modport_item();
    Modport_itemContext* modport_item(size_t i);
    antlr4::tree::TerminalNode *SEMI();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Modport_declarationContext* modport_declaration();

  class  Modport_itemContext : public antlr4::ParserRuleContext {
  public:
    Modport_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *LPAREN();
    std::vector<Modport_ports_declarationContext *> modport_ports_declaration();
    Modport_ports_declarationContext* modport_ports_declaration(size_t i);
    antlr4::tree::TerminalNode *RPAREN();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Modport_itemContext* modport_item();

  class  Modport_ports_declarationContext : public antlr4::ParserRuleContext {
  public:
    Modport_ports_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Modport_simple_ports_declarationContext *modport_simple_ports_declaration();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);
    Modport_tf_ports_declarationContext *modport_tf_ports_declaration();
    Modport_clocking_declarationContext *modport_clocking_declaration();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Modport_ports_declarationContext* modport_ports_declaration();

  class  Modport_clocking_declarationContext : public antlr4::ParserRuleContext {
  public:
    Modport_clocking_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CLOCKING();
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Modport_clocking_declarationContext* modport_clocking_declaration();

  class  Modport_simple_ports_declarationContext : public antlr4::ParserRuleContext {
  public:
    Modport_simple_ports_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Port_directionContext *port_direction();
    std::vector<Modport_simple_portContext *> modport_simple_port();
    Modport_simple_portContext* modport_simple_port(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Modport_simple_ports_declarationContext* modport_simple_ports_declaration();

  class  Modport_simple_portContext : public antlr4::ParserRuleContext {
  public:
    Modport_simple_portContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *DOT();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Modport_simple_portContext* modport_simple_port();

  class  Modport_tf_ports_declarationContext : public antlr4::ParserRuleContext {
  public:
    Modport_tf_ports_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Import_exportContext *import_export();
    std::vector<Modport_tf_portContext *> modport_tf_port();
    Modport_tf_portContext* modport_tf_port(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Modport_tf_ports_declarationContext* modport_tf_ports_declaration();

  class  Modport_tf_portContext : public antlr4::ParserRuleContext {
  public:
    Modport_tf_portContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Method_prototypeContext *method_prototype();
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Modport_tf_portContext* modport_tf_port();

  class  Import_exportContext : public antlr4::ParserRuleContext {
  public:
    Import_exportContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IMPORT();
    antlr4::tree::TerminalNode *EXPORT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Import_exportContext* import_export();

  class  Concurrent_assertion_itemContext : public antlr4::ParserRuleContext {
  public:
    Concurrent_assertion_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Concurrent_assertion_statementContext *concurrent_assertion_statement();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *COLON();
    Checker_instantiationContext *checker_instantiation();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Concurrent_assertion_itemContext* concurrent_assertion_item();

  class  Concurrent_assertion_statementContext : public antlr4::ParserRuleContext {
  public:
    Concurrent_assertion_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Assert_property_statementContext *assert_property_statement();
    Assume_property_statementContext *assume_property_statement();
    Cover_property_statementContext *cover_property_statement();
    Cover_sequence_statementContext *cover_sequence_statement();
    Restrict_property_statementContext *restrict_property_statement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Concurrent_assertion_statementContext* concurrent_assertion_statement();

  class  Assert_property_statementContext : public antlr4::ParserRuleContext {
  public:
    Assert_property_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ASSERT();
    antlr4::tree::TerminalNode *PROPERTY();
    antlr4::tree::TerminalNode *LPAREN();
    Property_specContext *property_spec();
    antlr4::tree::TerminalNode *RPAREN();
    Action_blockContext *action_block();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Assert_property_statementContext* assert_property_statement();

  class  Assume_property_statementContext : public antlr4::ParserRuleContext {
  public:
    Assume_property_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ASSUME();
    antlr4::tree::TerminalNode *PROPERTY();
    antlr4::tree::TerminalNode *LPAREN();
    Property_specContext *property_spec();
    antlr4::tree::TerminalNode *RPAREN();
    Action_blockContext *action_block();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Assume_property_statementContext* assume_property_statement();

  class  Cover_property_statementContext : public antlr4::ParserRuleContext {
  public:
    Cover_property_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COVER();
    antlr4::tree::TerminalNode *PROPERTY();
    antlr4::tree::TerminalNode *LPAREN();
    Property_specContext *property_spec();
    antlr4::tree::TerminalNode *RPAREN();
    Statement_or_nullContext *statement_or_null();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Cover_property_statementContext* cover_property_statement();

  class  Expect_property_statementContext : public antlr4::ParserRuleContext {
  public:
    Expect_property_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EXPECT();
    antlr4::tree::TerminalNode *LPAREN();
    Property_specContext *property_spec();
    antlr4::tree::TerminalNode *RPAREN();
    Action_blockContext *action_block();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Expect_property_statementContext* expect_property_statement();

  class  Cover_sequence_statementContext : public antlr4::ParserRuleContext {
  public:
    Cover_sequence_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COVER();
    antlr4::tree::TerminalNode *SEQUENCE();
    std::vector<antlr4::tree::TerminalNode *> LPAREN();
    antlr4::tree::TerminalNode* LPAREN(size_t i);
    Sequence_exprContext *sequence_expr();
    std::vector<antlr4::tree::TerminalNode *> RPAREN();
    antlr4::tree::TerminalNode* RPAREN(size_t i);
    Statement_or_nullContext *statement_or_null();
    Clocking_eventContext *clocking_event();
    antlr4::tree::TerminalNode *DISABLE();
    antlr4::tree::TerminalNode *IFF();
    Expression_or_distContext *expression_or_dist();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Cover_sequence_statementContext* cover_sequence_statement();

  class  Restrict_property_statementContext : public antlr4::ParserRuleContext {
  public:
    Restrict_property_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RESTRICT();
    antlr4::tree::TerminalNode *PROPERTY();
    antlr4::tree::TerminalNode *LPAREN();
    Property_specContext *property_spec();
    antlr4::tree::TerminalNode *RPAREN();
    antlr4::tree::TerminalNode *SEMI();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Restrict_property_statementContext* restrict_property_statement();

  class  Property_instanceContext : public antlr4::ParserRuleContext {
  public:
    Property_instanceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Ps_or_hierarchical_identifierContext *ps_or_hierarchical_identifier();
    antlr4::tree::TerminalNode *LPAREN();
    Property_list_of_argumentsContext *property_list_of_arguments();
    antlr4::tree::TerminalNode *RPAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Property_instanceContext* property_instance();

  class  Property_list_of_argumentsContext : public antlr4::ParserRuleContext {
  public:
    Property_list_of_argumentsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Property_actual_argContext *> property_actual_arg();
    Property_actual_argContext* property_actual_arg(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DOT();
    antlr4::tree::TerminalNode* DOT(size_t i);
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LPAREN();
    antlr4::tree::TerminalNode* LPAREN(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RPAREN();
    antlr4::tree::TerminalNode* RPAREN(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Property_list_of_argumentsContext* property_list_of_arguments();

  class  Property_actual_argContext : public antlr4::ParserRuleContext {
  public:
    Property_actual_argContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Property_exprContext *property_expr();
    Sequence_actual_argContext *sequence_actual_arg();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Property_actual_argContext* property_actual_arg();

  class  Assertion_item_declarationContext : public antlr4::ParserRuleContext {
  public:
    Assertion_item_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Property_declarationContext *property_declaration();
    Sequence_declarationContext *sequence_declaration();
    Let_declarationContext *let_declaration();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Assertion_item_declarationContext* assertion_item_declaration();

  class  Property_declarationContext : public antlr4::ParserRuleContext {
  public:
    Property_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PROPERTY();
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SEMI();
    antlr4::tree::TerminalNode* SEMI(size_t i);
    Property_specContext *property_spec();
    antlr4::tree::TerminalNode *ENDPROPERTY();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    std::vector<Assertion_variable_declarationContext *> assertion_variable_declaration();
    Assertion_variable_declarationContext* assertion_variable_declaration(size_t i);
    antlr4::tree::TerminalNode *COLON();
    Property_port_listContext *property_port_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Property_declarationContext* property_declaration();

  class  Property_port_listContext : public antlr4::ParserRuleContext {
  public:
    Property_port_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Property_port_itemContext *> property_port_item();
    Property_port_itemContext* property_port_item(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Property_port_listContext* property_port_list();

  class  Property_port_itemContext : public antlr4::ParserRuleContext {
  public:
    Property_port_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Property_formal_typeContext *property_formal_type();
    IdentifierContext *identifier();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);
    antlr4::tree::TerminalNode *LOCAL();
    std::vector<Variable_dimensionContext *> variable_dimension();
    Variable_dimensionContext* variable_dimension(size_t i);
    antlr4::tree::TerminalNode *EQ();
    Property_actual_argContext *property_actual_arg();
    antlr4::tree::TerminalNode *INPUT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Property_port_itemContext* property_port_item();

  class  Property_formal_typeContext : public antlr4::ParserRuleContext {
  public:
    Property_formal_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Sequence_formal_typeContext *sequence_formal_type();
    antlr4::tree::TerminalNode *PROPERTY();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Property_formal_typeContext* property_formal_type();

  class  Property_specContext : public antlr4::ParserRuleContext {
  public:
    Property_specContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Property_exprContext *property_expr();
    Clocking_eventContext *clocking_event();
    antlr4::tree::TerminalNode *DISABLE();
    antlr4::tree::TerminalNode *IFF();
    antlr4::tree::TerminalNode *LPAREN();
    Expression_or_distContext *expression_or_dist();
    antlr4::tree::TerminalNode *RPAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Property_specContext* property_spec();

  class  Property_exprContext : public antlr4::ParserRuleContext {
  public:
    Property_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Sequence_exprContext *sequence_expr();
    antlr4::tree::TerminalNode *STRONG();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    antlr4::tree::TerminalNode *WEAK();
    std::vector<Property_exprContext *> property_expr();
    Property_exprContext* property_expr(size_t i);
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *PIPEARROW();
    antlr4::tree::TerminalNode *PIPEEQARROW();
    antlr4::tree::TerminalNode *IF();
    Expression_or_distContext *expression_or_dist();
    antlr4::tree::TerminalNode *ELSE();
    antlr4::tree::TerminalNode *CASE();
    antlr4::tree::TerminalNode *ENDCASE();
    std::vector<Property_case_itemContext *> property_case_item();
    Property_case_itemContext* property_case_item(size_t i);
    antlr4::tree::TerminalNode *HASHMINUSHASH();
    antlr4::tree::TerminalNode *HASHEQHASH();
    antlr4::tree::TerminalNode *NEXTTIME();
    antlr4::tree::TerminalNode *LBRACK();
    Constant_expressionContext *constant_expression();
    antlr4::tree::TerminalNode *RBRACK();
    antlr4::tree::TerminalNode *S_NEXTTIME();
    antlr4::tree::TerminalNode *ALWAYS();
    Cycle_delay_const_range_expressionContext *cycle_delay_const_range_expression();
    antlr4::tree::TerminalNode *S_ALWAYS();
    Constant_rangeContext *constant_range();
    antlr4::tree::TerminalNode *S_EVENTUALLY();
    antlr4::tree::TerminalNode *ACCEPT_ON();
    antlr4::tree::TerminalNode *REJECT_ON();
    antlr4::tree::TerminalNode *SYNC_ACCEPT_ON();
    antlr4::tree::TerminalNode *SYNC_REJECT_ON();
    Property_instanceContext *property_instance();
    Clocking_eventContext *clocking_event();
    antlr4::tree::TerminalNode *OR();
    antlr4::tree::TerminalNode *AND();
    antlr4::tree::TerminalNode *UNTIL();
    antlr4::tree::TerminalNode *S_UNTIL();
    antlr4::tree::TerminalNode *UNTIL_WITH();
    antlr4::tree::TerminalNode *S_UNTIL_WITH();
    antlr4::tree::TerminalNode *IMPLIES();
    antlr4::tree::TerminalNode *IFF();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Property_exprContext* property_expr();
  Property_exprContext* property_expr(int precedence);
  class  Property_case_itemContext : public antlr4::ParserRuleContext {
  public:
    Property_case_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Expression_or_distContext *> expression_or_dist();
    Expression_or_distContext* expression_or_dist(size_t i);
    antlr4::tree::TerminalNode *COLON();
    Property_exprContext *property_expr();
    antlr4::tree::TerminalNode *SEMI();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *DEFAULT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Property_case_itemContext* property_case_item();

  class  Sequence_declarationContext : public antlr4::ParserRuleContext {
  public:
    Sequence_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SEQUENCE();
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SEMI();
    antlr4::tree::TerminalNode* SEMI(size_t i);
    Sequence_exprContext *sequence_expr();
    antlr4::tree::TerminalNode *ENDSEQUENCE();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    std::vector<Assertion_variable_declarationContext *> assertion_variable_declaration();
    Assertion_variable_declarationContext* assertion_variable_declaration(size_t i);
    antlr4::tree::TerminalNode *COLON();
    Sequence_port_listContext *sequence_port_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Sequence_declarationContext* sequence_declaration();

  class  Sequence_port_listContext : public antlr4::ParserRuleContext {
  public:
    Sequence_port_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Sequence_port_itemContext *> sequence_port_item();
    Sequence_port_itemContext* sequence_port_item(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Sequence_port_listContext* sequence_port_list();

  class  Sequence_port_itemContext : public antlr4::ParserRuleContext {
  public:
    Sequence_port_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Sequence_formal_typeContext *sequence_formal_type();
    IdentifierContext *identifier();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);
    antlr4::tree::TerminalNode *LOCAL();
    std::vector<Variable_dimensionContext *> variable_dimension();
    Variable_dimensionContext* variable_dimension(size_t i);
    antlr4::tree::TerminalNode *EQ();
    Sequence_actual_argContext *sequence_actual_arg();
    Sequence_lvar_port_directionContext *sequence_lvar_port_direction();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Sequence_port_itemContext* sequence_port_item();

  class  Sequence_lvar_port_directionContext : public antlr4::ParserRuleContext {
  public:
    Sequence_lvar_port_directionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INPUT();
    antlr4::tree::TerminalNode *INOUT();
    antlr4::tree::TerminalNode *OUTPUT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Sequence_lvar_port_directionContext* sequence_lvar_port_direction();

  class  Sequence_formal_typeContext : public antlr4::ParserRuleContext {
  public:
    Sequence_formal_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Data_type_or_implicitContext *data_type_or_implicit();
    antlr4::tree::TerminalNode *SEQUENCE();
    antlr4::tree::TerminalNode *UNTYPED();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Sequence_formal_typeContext* sequence_formal_type();

  class  Sequence_exprContext : public antlr4::ParserRuleContext {
  public:
    Sequence_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Cycle_delay_rangeContext *> cycle_delay_range();
    Cycle_delay_rangeContext* cycle_delay_range(size_t i);
    std::vector<Sequence_exprContext *> sequence_expr();
    Sequence_exprContext* sequence_expr(size_t i);
    Expression_or_distContext *expression_or_dist();
    Boolean_abbrevContext *boolean_abbrev();
    Sequence_instanceContext *sequence_instance();
    Sequence_abbrevContext *sequence_abbrev();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<Sequence_match_itemContext *> sequence_match_item();
    Sequence_match_itemContext* sequence_match_item(size_t i);
    antlr4::tree::TerminalNode *FIRST_MATCH();
    antlr4::tree::TerminalNode *THROUGHOUT();
    Clocking_eventContext *clocking_event();
    antlr4::tree::TerminalNode *AND();
    antlr4::tree::TerminalNode *INTERSECT();
    antlr4::tree::TerminalNode *OR();
    antlr4::tree::TerminalNode *WITHIN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Sequence_exprContext* sequence_expr();
  Sequence_exprContext* sequence_expr(int precedence);
  class  Cycle_delay_rangeContext : public antlr4::ParserRuleContext {
  public:
    Cycle_delay_rangeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HASHHASH();
    Constant_primaryContext *constant_primary();
    antlr4::tree::TerminalNode *LBRACK();
    Cycle_delay_const_range_expressionContext *cycle_delay_const_range_expression();
    antlr4::tree::TerminalNode *RBRACK();
    antlr4::tree::TerminalNode *STAR();
    antlr4::tree::TerminalNode *PLUS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Cycle_delay_rangeContext* cycle_delay_range();

  class  Sequence_method_callContext : public antlr4::ParserRuleContext {
  public:
    Sequence_method_callContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Sequence_instanceContext *sequence_instance();
    antlr4::tree::TerminalNode *DOT();
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Sequence_method_callContext* sequence_method_call();

  class  Sequence_match_itemContext : public antlr4::ParserRuleContext {
  public:
    Sequence_match_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Operator_assignmentContext *operator_assignment();
    Inc_or_dec_expressionContext *inc_or_dec_expression();
    Subroutine_callContext *subroutine_call();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Sequence_match_itemContext* sequence_match_item();

  class  Sequence_instanceContext : public antlr4::ParserRuleContext {
  public:
    Sequence_instanceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Ps_or_hierarchical_identifierContext *ps_or_hierarchical_identifier();
    antlr4::tree::TerminalNode *LPAREN();
    Sequence_list_of_argumentsContext *sequence_list_of_arguments();
    antlr4::tree::TerminalNode *RPAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Sequence_instanceContext* sequence_instance();

  class  Sequence_list_of_argumentsContext : public antlr4::ParserRuleContext {
  public:
    Sequence_list_of_argumentsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Sequence_actual_argContext *> sequence_actual_arg();
    Sequence_actual_argContext* sequence_actual_arg(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DOT();
    antlr4::tree::TerminalNode* DOT(size_t i);
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LPAREN();
    antlr4::tree::TerminalNode* LPAREN(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RPAREN();
    antlr4::tree::TerminalNode* RPAREN(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Sequence_list_of_argumentsContext* sequence_list_of_arguments();

  class  Sequence_actual_argContext : public antlr4::ParserRuleContext {
  public:
    Sequence_actual_argContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Event_expressionContext *event_expression();
    Sequence_exprContext *sequence_expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Sequence_actual_argContext* sequence_actual_arg();

  class  Boolean_abbrevContext : public antlr4::ParserRuleContext {
  public:
    Boolean_abbrevContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Consecutive_repetitionContext *consecutive_repetition();
    Non_consecutive_repetitionContext *non_consecutive_repetition();
    Goto_repetitionContext *goto_repetition();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Boolean_abbrevContext* boolean_abbrev();

  class  Sequence_abbrevContext : public antlr4::ParserRuleContext {
  public:
    Sequence_abbrevContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Consecutive_repetitionContext *consecutive_repetition();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Sequence_abbrevContext* sequence_abbrev();

  class  Consecutive_repetitionContext : public antlr4::ParserRuleContext {
  public:
    Consecutive_repetitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LBRACK();
    antlr4::tree::TerminalNode *STAR();
    Const_or_range_expressionContext *const_or_range_expression();
    antlr4::tree::TerminalNode *RBRACK();
    antlr4::tree::TerminalNode *PLUS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Consecutive_repetitionContext* consecutive_repetition();

  class  Non_consecutive_repetitionContext : public antlr4::ParserRuleContext {
  public:
    Non_consecutive_repetitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LBRACK();
    antlr4::tree::TerminalNode *EQ();
    Const_or_range_expressionContext *const_or_range_expression();
    antlr4::tree::TerminalNode *RBRACK();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Non_consecutive_repetitionContext* non_consecutive_repetition();

  class  Goto_repetitionContext : public antlr4::ParserRuleContext {
  public:
    Goto_repetitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LBRACK();
    antlr4::tree::TerminalNode *RARROW();
    Const_or_range_expressionContext *const_or_range_expression();
    antlr4::tree::TerminalNode *RBRACK();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Goto_repetitionContext* goto_repetition();

  class  Const_or_range_expressionContext : public antlr4::ParserRuleContext {
  public:
    Const_or_range_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Constant_expressionContext *constant_expression();
    Cycle_delay_const_range_expressionContext *cycle_delay_const_range_expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Const_or_range_expressionContext* const_or_range_expression();

  class  Cycle_delay_const_range_expressionContext : public antlr4::ParserRuleContext {
  public:
    Cycle_delay_const_range_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Constant_expressionContext *> constant_expression();
    Constant_expressionContext* constant_expression(size_t i);
    antlr4::tree::TerminalNode *COLON();
    antlr4::tree::TerminalNode *DOLLAR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Cycle_delay_const_range_expressionContext* cycle_delay_const_range_expression();

  class  Expression_or_distContext : public antlr4::ParserRuleContext {
  public:
    Expression_or_distContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *DIST();
    antlr4::tree::TerminalNode *LBRACE();
    Dist_listContext *dist_list();
    antlr4::tree::TerminalNode *RBRACE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Expression_or_distContext* expression_or_dist();

  class  Assertion_variable_declarationContext : public antlr4::ParserRuleContext {
  public:
    Assertion_variable_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Var_data_typeContext *var_data_type();
    List_of_variable_decl_assignmentsContext *list_of_variable_decl_assignments();
    antlr4::tree::TerminalNode *SEMI();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Assertion_variable_declarationContext* assertion_variable_declaration();

  class  Covergroup_declarationContext : public antlr4::ParserRuleContext {
  public:
    Covergroup_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COVERGROUP();
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    antlr4::tree::TerminalNode *SEMI();
    antlr4::tree::TerminalNode *ENDGROUP();
    antlr4::tree::TerminalNode *LPAREN();
    Tf_port_listContext *tf_port_list();
    antlr4::tree::TerminalNode *RPAREN();
    Coverage_eventContext *coverage_event();
    std::vector<Coverage_spec_or_optionContext *> coverage_spec_or_option();
    Coverage_spec_or_optionContext* coverage_spec_or_option(size_t i);
    antlr4::tree::TerminalNode *COLON();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Covergroup_declarationContext* covergroup_declaration();

  class  Coverage_spec_or_optionContext : public antlr4::ParserRuleContext {
  public:
    Coverage_spec_or_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Coverage_specContext *coverage_spec();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);
    Coverage_optionContext *coverage_option();
    antlr4::tree::TerminalNode *SEMI();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Coverage_spec_or_optionContext* coverage_spec_or_option();

  class  Coverage_optionContext : public antlr4::ParserRuleContext {
  public:
    Coverage_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPTION_DOT();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *EQ();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *TYPE_OPTION_DOT();
    Constant_expressionContext *constant_expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Coverage_optionContext* coverage_option();

  class  Coverage_specContext : public antlr4::ParserRuleContext {
  public:
    Coverage_specContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cover_pointContext *cover_point();
    Cover_crossContext *cover_cross();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Coverage_specContext* coverage_spec();

  class  Coverage_eventContext : public antlr4::ParserRuleContext {
  public:
    Coverage_eventContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Clocking_eventContext *clocking_event();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *FUNCTION();
    antlr4::tree::TerminalNode *SAMPLE();
    antlr4::tree::TerminalNode *LPAREN();
    Tf_port_listContext *tf_port_list();
    antlr4::tree::TerminalNode *RPAREN();
    antlr4::tree::TerminalNode *ATAT();
    Block_event_expressionContext *block_event_expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Coverage_eventContext* coverage_event();

  class  Block_event_expressionContext : public antlr4::ParserRuleContext {
  public:
    Block_event_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BEGIN();
    Hierarchical_btf_identifierContext *hierarchical_btf_identifier();
    antlr4::tree::TerminalNode *END();
    std::vector<Block_event_expressionContext *> block_event_expression();
    Block_event_expressionContext* block_event_expression(size_t i);
    antlr4::tree::TerminalNode *OR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Block_event_expressionContext* block_event_expression();
  Block_event_expressionContext* block_event_expression(int precedence);
  class  Hierarchical_btf_identifierContext : public antlr4::ParserRuleContext {
  public:
    Hierarchical_btf_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Hierarchical_identifierContext *hierarchical_identifier();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *DOT();
    Class_scopeContext *class_scope();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Hierarchical_btf_identifierContext* hierarchical_btf_identifier();

  class  Cover_pointContext : public antlr4::ParserRuleContext {
  public:
    Cover_pointContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COVERPOINT();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    Bins_or_emptyContext *bins_or_empty();
    Data_type_or_implicitContext *data_type_or_implicit();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *COLON();
    antlr4::tree::TerminalNode *IFF();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Cover_pointContext* cover_point();

  class  Bins_or_emptyContext : public antlr4::ParserRuleContext {
  public:
    Bins_or_emptyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LBRACE();
    antlr4::tree::TerminalNode *RBRACE();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);
    std::vector<Bins_or_optionsContext *> bins_or_options();
    Bins_or_optionsContext* bins_or_options(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SEMI();
    antlr4::tree::TerminalNode* SEMI(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Bins_or_emptyContext* bins_or_empty();

  class  Bins_or_optionsContext : public antlr4::ParserRuleContext {
  public:
    Bins_or_optionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Coverage_optionContext *coverage_option();
    Bins_keywordContext *bins_keyword();
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    antlr4::tree::TerminalNode *EQ();
    antlr4::tree::TerminalNode *LBRACE();
    Covergroup_range_listContext *covergroup_range_list();
    antlr4::tree::TerminalNode *RBRACE();
    antlr4::tree::TerminalNode *WILDCARD();
    antlr4::tree::TerminalNode *LBRACK();
    antlr4::tree::TerminalNode *RBRACK();
    antlr4::tree::TerminalNode *WITH();
    std::vector<antlr4::tree::TerminalNode *> LPAREN();
    antlr4::tree::TerminalNode* LPAREN(size_t i);
    With_covergroup_expressionContext *with_covergroup_expression();
    std::vector<antlr4::tree::TerminalNode *> RPAREN();
    antlr4::tree::TerminalNode* RPAREN(size_t i);
    antlr4::tree::TerminalNode *IFF();
    ExpressionContext *expression();
    Covergroup_expressionContext *covergroup_expression();
    Set_covergroup_expressionContext *set_covergroup_expression();
    Trans_listContext *trans_list();
    antlr4::tree::TerminalNode *DEFAULT();
    antlr4::tree::TerminalNode *SEQUENCE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Bins_or_optionsContext* bins_or_options();

  class  Bins_keywordContext : public antlr4::ParserRuleContext {
  public:
    Bins_keywordContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BINS();
    antlr4::tree::TerminalNode *ILLEGAL_BINS();
    antlr4::tree::TerminalNode *IGNORE_BINS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Bins_keywordContext* bins_keyword();

  class  Trans_listContext : public antlr4::ParserRuleContext {
  public:
    Trans_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> LPAREN();
    antlr4::tree::TerminalNode* LPAREN(size_t i);
    std::vector<Trans_setContext *> trans_set();
    Trans_setContext* trans_set(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RPAREN();
    antlr4::tree::TerminalNode* RPAREN(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Trans_listContext* trans_list();

  class  Trans_setContext : public antlr4::ParserRuleContext {
  public:
    Trans_setContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Trans_range_listContext *> trans_range_list();
    Trans_range_listContext* trans_range_list(size_t i);
    std::vector<antlr4::tree::TerminalNode *> EQGT();
    antlr4::tree::TerminalNode* EQGT(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Trans_setContext* trans_set();

  class  Trans_range_listContext : public antlr4::ParserRuleContext {
  public:
    Trans_range_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Trans_itemContext *trans_item();
    antlr4::tree::TerminalNode *LBRACK();
    antlr4::tree::TerminalNode *STAR();
    Repeat_rangeContext *repeat_range();
    antlr4::tree::TerminalNode *RBRACK();
    antlr4::tree::TerminalNode *RARROW();
    antlr4::tree::TerminalNode *EQ();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Trans_range_listContext* trans_range_list();

  class  Trans_itemContext : public antlr4::ParserRuleContext {
  public:
    Trans_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Covergroup_range_listContext *covergroup_range_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Trans_itemContext* trans_item();

  class  Repeat_rangeContext : public antlr4::ParserRuleContext {
  public:
    Repeat_rangeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Covergroup_expressionContext *> covergroup_expression();
    Covergroup_expressionContext* covergroup_expression(size_t i);
    antlr4::tree::TerminalNode *COLON();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Repeat_rangeContext* repeat_range();

  class  Cover_crossContext : public antlr4::ParserRuleContext {
  public:
    Cover_crossContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CROSS();
    List_of_cross_itemsContext *list_of_cross_items();
    Cross_bodyContext *cross_body();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *COLON();
    antlr4::tree::TerminalNode *IFF();
    antlr4::tree::TerminalNode *LPAREN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RPAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Cover_crossContext* cover_cross();

  class  List_of_cross_itemsContext : public antlr4::ParserRuleContext {
  public:
    List_of_cross_itemsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Cross_itemContext *> cross_item();
    Cross_itemContext* cross_item(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  List_of_cross_itemsContext* list_of_cross_items();

  class  Cross_itemContext : public antlr4::ParserRuleContext {
  public:
    Cross_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Cross_itemContext* cross_item();

  class  Cross_bodyContext : public antlr4::ParserRuleContext {
  public:
    Cross_bodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LBRACE();
    antlr4::tree::TerminalNode *RBRACE();
    std::vector<Cross_body_itemContext *> cross_body_item();
    Cross_body_itemContext* cross_body_item(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SEMI();
    antlr4::tree::TerminalNode* SEMI(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Cross_bodyContext* cross_body();

  class  Cross_body_itemContext : public antlr4::ParserRuleContext {
  public:
    Cross_body_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Function_declarationContext *function_declaration();
    Bins_selection_or_optionContext *bins_selection_or_option();
    antlr4::tree::TerminalNode *SEMI();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Cross_body_itemContext* cross_body_item();

  class  Bins_selection_or_optionContext : public antlr4::ParserRuleContext {
  public:
    Bins_selection_or_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Coverage_optionContext *coverage_option();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);
    Bins_selectionContext *bins_selection();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Bins_selection_or_optionContext* bins_selection_or_option();

  class  Bins_selectionContext : public antlr4::ParserRuleContext {
  public:
    Bins_selectionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Bins_keywordContext *bins_keyword();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *EQ();
    Select_expressionContext *select_expression();
    antlr4::tree::TerminalNode *IFF();
    antlr4::tree::TerminalNode *LPAREN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RPAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Bins_selectionContext* bins_selection();

  class  Select_expressionContext : public antlr4::ParserRuleContext {
  public:
    Select_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Select_conditionContext *select_condition();
    antlr4::tree::TerminalNode *EXCLAM();
    antlr4::tree::TerminalNode *LPAREN();
    std::vector<Select_expressionContext *> select_expression();
    Select_expressionContext* select_expression(size_t i);
    antlr4::tree::TerminalNode *RPAREN();
    IdentifierContext *identifier();
    Cross_set_expressionContext *cross_set_expression();
    antlr4::tree::TerminalNode *MATCHES();
    Integer_covergroup_expressionContext *integer_covergroup_expression();
    antlr4::tree::TerminalNode *AMPAMP();
    antlr4::tree::TerminalNode *PIPEPIPE();
    antlr4::tree::TerminalNode *WITH();
    With_covergroup_expressionContext *with_covergroup_expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Select_expressionContext* select_expression();
  Select_expressionContext* select_expression(int precedence);
  class  Select_conditionContext : public antlr4::ParserRuleContext {
  public:
    Select_conditionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BINSOF();
    antlr4::tree::TerminalNode *LPAREN();
    Bins_expressionContext *bins_expression();
    antlr4::tree::TerminalNode *RPAREN();
    antlr4::tree::TerminalNode *INTERSECT();
    antlr4::tree::TerminalNode *LBRACE();
    Covergroup_range_listContext *covergroup_range_list();
    antlr4::tree::TerminalNode *RBRACE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Select_conditionContext* select_condition();

  class  Bins_expressionContext : public antlr4::ParserRuleContext {
  public:
    Bins_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    antlr4::tree::TerminalNode *DOT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Bins_expressionContext* bins_expression();

  class  Covergroup_range_listContext : public antlr4::ParserRuleContext {
  public:
    Covergroup_range_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Covergroup_value_rangeContext *> covergroup_value_range();
    Covergroup_value_rangeContext* covergroup_value_range(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Covergroup_range_listContext* covergroup_range_list();

  class  Covergroup_value_rangeContext : public antlr4::ParserRuleContext {
  public:
    Covergroup_value_rangeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Covergroup_expressionContext *> covergroup_expression();
    Covergroup_expressionContext* covergroup_expression(size_t i);
    antlr4::tree::TerminalNode *LBRACK();
    antlr4::tree::TerminalNode *COLON();
    antlr4::tree::TerminalNode *RBRACK();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Covergroup_value_rangeContext* covergroup_value_range();

  class  With_covergroup_expressionContext : public antlr4::ParserRuleContext {
  public:
    With_covergroup_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Covergroup_expressionContext *covergroup_expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  With_covergroup_expressionContext* with_covergroup_expression();

  class  Set_covergroup_expressionContext : public antlr4::ParserRuleContext {
  public:
    Set_covergroup_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Covergroup_expressionContext *covergroup_expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Set_covergroup_expressionContext* set_covergroup_expression();

  class  Integer_covergroup_expressionContext : public antlr4::ParserRuleContext {
  public:
    Integer_covergroup_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Covergroup_expressionContext *covergroup_expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Integer_covergroup_expressionContext* integer_covergroup_expression();

  class  Cross_set_expressionContext : public antlr4::ParserRuleContext {
  public:
    Cross_set_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Covergroup_expressionContext *covergroup_expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Cross_set_expressionContext* cross_set_expression();

  class  Covergroup_expressionContext : public antlr4::ParserRuleContext {
  public:
    Covergroup_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Covergroup_expressionContext* covergroup_expression();

  class  Let_declarationContext : public antlr4::ParserRuleContext {
  public:
    Let_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LET();
    Let_identifierContext *let_identifier();
    antlr4::tree::TerminalNode *EQ();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *SEMI();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    Let_port_listContext *let_port_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Let_declarationContext* let_declaration();

  class  Let_identifierContext : public antlr4::ParserRuleContext {
  public:
    Let_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Let_identifierContext* let_identifier();

  class  Let_port_listContext : public antlr4::ParserRuleContext {
  public:
    Let_port_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Let_port_itemContext *> let_port_item();
    Let_port_itemContext* let_port_item(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Let_port_listContext* let_port_list();

  class  Let_port_itemContext : public antlr4::ParserRuleContext {
  public:
    Let_port_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Let_formal_typeContext *let_formal_type();
    IdentifierContext *identifier();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);
    std::vector<Variable_dimensionContext *> variable_dimension();
    Variable_dimensionContext* variable_dimension(size_t i);
    antlr4::tree::TerminalNode *EQ();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Let_port_itemContext* let_port_item();

  class  Let_formal_typeContext : public antlr4::ParserRuleContext {
  public:
    Let_formal_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Data_type_or_implicitContext *data_type_or_implicit();
    antlr4::tree::TerminalNode *UNTYPED();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Let_formal_typeContext* let_formal_type();

  class  Let_expressionContext : public antlr4::ParserRuleContext {
  public:
    Let_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Let_identifierContext *let_identifier();
    Package_scopeContext *package_scope();
    antlr4::tree::TerminalNode *LPAREN();
    Let_list_of_argumentsContext *let_list_of_arguments();
    antlr4::tree::TerminalNode *RPAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Let_expressionContext* let_expression();

  class  Let_list_of_argumentsContext : public antlr4::ParserRuleContext {
  public:
    Let_list_of_argumentsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Let_actual_argContext *> let_actual_arg();
    Let_actual_argContext* let_actual_arg(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DOT();
    antlr4::tree::TerminalNode* DOT(size_t i);
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LPAREN();
    antlr4::tree::TerminalNode* LPAREN(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RPAREN();
    antlr4::tree::TerminalNode* RPAREN(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Let_list_of_argumentsContext* let_list_of_arguments();

  class  Let_actual_argContext : public antlr4::ParserRuleContext {
  public:
    Let_actual_argContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Let_actual_argContext* let_actual_arg();

  class  Gate_instantiationContext : public antlr4::ParserRuleContext {
  public:
    Gate_instantiationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cmos_switchtypeContext *cmos_switchtype();
    std::vector<Cmos_switch_instanceContext *> cmos_switch_instance();
    Cmos_switch_instanceContext* cmos_switch_instance(size_t i);
    antlr4::tree::TerminalNode *SEMI();
    Delay3Context *delay3();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    Enable_gatetypeContext *enable_gatetype();
    std::vector<Enable_gate_instanceContext *> enable_gate_instance();
    Enable_gate_instanceContext* enable_gate_instance(size_t i);
    Drive_strengthContext *drive_strength();
    Mos_switchtypeContext *mos_switchtype();
    std::vector<Mos_switch_instanceContext *> mos_switch_instance();
    Mos_switch_instanceContext* mos_switch_instance(size_t i);
    N_input_gatetypeContext *n_input_gatetype();
    std::vector<N_input_gate_instanceContext *> n_input_gate_instance();
    N_input_gate_instanceContext* n_input_gate_instance(size_t i);
    Delay2Context *delay2();
    N_output_gatetypeContext *n_output_gatetype();
    std::vector<N_output_gate_instanceContext *> n_output_gate_instance();
    N_output_gate_instanceContext* n_output_gate_instance(size_t i);
    Pass_en_switchtypeContext *pass_en_switchtype();
    std::vector<Pass_enable_switch_instanceContext *> pass_enable_switch_instance();
    Pass_enable_switch_instanceContext* pass_enable_switch_instance(size_t i);
    Pass_switchtypeContext *pass_switchtype();
    std::vector<Pass_switch_instanceContext *> pass_switch_instance();
    Pass_switch_instanceContext* pass_switch_instance(size_t i);
    antlr4::tree::TerminalNode *PULLDOWN();
    std::vector<Pull_gate_instanceContext *> pull_gate_instance();
    Pull_gate_instanceContext* pull_gate_instance(size_t i);
    Pulldown_strengthContext *pulldown_strength();
    antlr4::tree::TerminalNode *PULLUP();
    Pullup_strengthContext *pullup_strength();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Gate_instantiationContext* gate_instantiation();

  class  Cmos_switch_instanceContext : public antlr4::ParserRuleContext {
  public:
    Cmos_switch_instanceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    Output_terminalContext *output_terminal();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    Input_terminalContext *input_terminal();
    Ncontrol_terminalContext *ncontrol_terminal();
    Pcontrol_terminalContext *pcontrol_terminal();
    antlr4::tree::TerminalNode *RPAREN();
    Name_of_instanceContext *name_of_instance();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Cmos_switch_instanceContext* cmos_switch_instance();

  class  Enable_gate_instanceContext : public antlr4::ParserRuleContext {
  public:
    Enable_gate_instanceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    Output_terminalContext *output_terminal();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    Input_terminalContext *input_terminal();
    Enable_terminalContext *enable_terminal();
    antlr4::tree::TerminalNode *RPAREN();
    Name_of_instanceContext *name_of_instance();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Enable_gate_instanceContext* enable_gate_instance();

  class  Mos_switch_instanceContext : public antlr4::ParserRuleContext {
  public:
    Mos_switch_instanceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    Output_terminalContext *output_terminal();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    Input_terminalContext *input_terminal();
    Enable_terminalContext *enable_terminal();
    antlr4::tree::TerminalNode *RPAREN();
    Name_of_instanceContext *name_of_instance();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Mos_switch_instanceContext* mos_switch_instance();

  class  N_input_gate_instanceContext : public antlr4::ParserRuleContext {
  public:
    N_input_gate_instanceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    Output_terminalContext *output_terminal();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<Input_terminalContext *> input_terminal();
    Input_terminalContext* input_terminal(size_t i);
    antlr4::tree::TerminalNode *RPAREN();
    Name_of_instanceContext *name_of_instance();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  N_input_gate_instanceContext* n_input_gate_instance();

  class  N_output_gate_instanceContext : public antlr4::ParserRuleContext {
  public:
    N_output_gate_instanceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    std::vector<Output_terminalContext *> output_terminal();
    Output_terminalContext* output_terminal(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    Input_terminalContext *input_terminal();
    antlr4::tree::TerminalNode *RPAREN();
    Name_of_instanceContext *name_of_instance();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  N_output_gate_instanceContext* n_output_gate_instance();

  class  Pass_switch_instanceContext : public antlr4::ParserRuleContext {
  public:
    Pass_switch_instanceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    std::vector<Inout_terminalContext *> inout_terminal();
    Inout_terminalContext* inout_terminal(size_t i);
    antlr4::tree::TerminalNode *COMMA();
    antlr4::tree::TerminalNode *RPAREN();
    Name_of_instanceContext *name_of_instance();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Pass_switch_instanceContext* pass_switch_instance();

  class  Pass_enable_switch_instanceContext : public antlr4::ParserRuleContext {
  public:
    Pass_enable_switch_instanceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    std::vector<Inout_terminalContext *> inout_terminal();
    Inout_terminalContext* inout_terminal(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    Enable_terminalContext *enable_terminal();
    antlr4::tree::TerminalNode *RPAREN();
    Name_of_instanceContext *name_of_instance();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Pass_enable_switch_instanceContext* pass_enable_switch_instance();

  class  Pull_gate_instanceContext : public antlr4::ParserRuleContext {
  public:
    Pull_gate_instanceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    Output_terminalContext *output_terminal();
    antlr4::tree::TerminalNode *RPAREN();
    Name_of_instanceContext *name_of_instance();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Pull_gate_instanceContext* pull_gate_instance();

  class  Pulldown_strengthContext : public antlr4::ParserRuleContext {
  public:
    Pulldown_strengthContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    Strength0Context *strength0();
    antlr4::tree::TerminalNode *COMMA();
    Strength1Context *strength1();
    antlr4::tree::TerminalNode *RPAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Pulldown_strengthContext* pulldown_strength();

  class  Pullup_strengthContext : public antlr4::ParserRuleContext {
  public:
    Pullup_strengthContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    Strength0Context *strength0();
    antlr4::tree::TerminalNode *COMMA();
    Strength1Context *strength1();
    antlr4::tree::TerminalNode *RPAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Pullup_strengthContext* pullup_strength();

  class  Enable_terminalContext : public antlr4::ParserRuleContext {
  public:
    Enable_terminalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Enable_terminalContext* enable_terminal();

  class  Inout_terminalContext : public antlr4::ParserRuleContext {
  public:
    Inout_terminalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Net_lvalueContext *net_lvalue();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Inout_terminalContext* inout_terminal();

  class  Input_terminalContext : public antlr4::ParserRuleContext {
  public:
    Input_terminalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Input_terminalContext* input_terminal();

  class  Ncontrol_terminalContext : public antlr4::ParserRuleContext {
  public:
    Ncontrol_terminalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Ncontrol_terminalContext* ncontrol_terminal();

  class  Output_terminalContext : public antlr4::ParserRuleContext {
  public:
    Output_terminalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Net_lvalueContext *net_lvalue();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Output_terminalContext* output_terminal();

  class  Pcontrol_terminalContext : public antlr4::ParserRuleContext {
  public:
    Pcontrol_terminalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Pcontrol_terminalContext* pcontrol_terminal();

  class  Cmos_switchtypeContext : public antlr4::ParserRuleContext {
  public:
    Cmos_switchtypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CMOS();
    antlr4::tree::TerminalNode *RCMOS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Cmos_switchtypeContext* cmos_switchtype();

  class  Enable_gatetypeContext : public antlr4::ParserRuleContext {
  public:
    Enable_gatetypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BUFIF0();
    antlr4::tree::TerminalNode *BUFIF1();
    antlr4::tree::TerminalNode *NOTIF0();
    antlr4::tree::TerminalNode *NOTIF1();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Enable_gatetypeContext* enable_gatetype();

  class  Mos_switchtypeContext : public antlr4::ParserRuleContext {
  public:
    Mos_switchtypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NMOS();
    antlr4::tree::TerminalNode *PMOS();
    antlr4::tree::TerminalNode *RNMOS();
    antlr4::tree::TerminalNode *RPMOS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Mos_switchtypeContext* mos_switchtype();

  class  N_input_gatetypeContext : public antlr4::ParserRuleContext {
  public:
    N_input_gatetypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AND();
    antlr4::tree::TerminalNode *NAND();
    antlr4::tree::TerminalNode *OR();
    antlr4::tree::TerminalNode *NOR();
    antlr4::tree::TerminalNode *XOR();
    antlr4::tree::TerminalNode *XNOR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  N_input_gatetypeContext* n_input_gatetype();

  class  N_output_gatetypeContext : public antlr4::ParserRuleContext {
  public:
    N_output_gatetypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BUF();
    antlr4::tree::TerminalNode *NOT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  N_output_gatetypeContext* n_output_gatetype();

  class  Pass_en_switchtypeContext : public antlr4::ParserRuleContext {
  public:
    Pass_en_switchtypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TRANIF0();
    antlr4::tree::TerminalNode *TRANIF1();
    antlr4::tree::TerminalNode *RTRANIF1();
    antlr4::tree::TerminalNode *RTRANIF0();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Pass_en_switchtypeContext* pass_en_switchtype();

  class  Pass_switchtypeContext : public antlr4::ParserRuleContext {
  public:
    Pass_switchtypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TRAN();
    antlr4::tree::TerminalNode *RTRAN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Pass_switchtypeContext* pass_switchtype();

  class  Module_instantiationContext : public antlr4::ParserRuleContext {
  public:
    Module_instantiationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    std::vector<Hierarchical_instanceContext *> hierarchical_instance();
    Hierarchical_instanceContext* hierarchical_instance(size_t i);
    antlr4::tree::TerminalNode *SEMI();
    Parameter_value_assignmentContext *parameter_value_assignment();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Module_instantiationContext* module_instantiation();

  class  Parameter_value_assignmentContext : public antlr4::ParserRuleContext {
  public:
    Parameter_value_assignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HASH();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    List_of_parameter_assignmentsContext *list_of_parameter_assignments();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Parameter_value_assignmentContext* parameter_value_assignment();

  class  List_of_parameter_assignmentsContext : public antlr4::ParserRuleContext {
  public:
    List_of_parameter_assignmentsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Ordered_parameter_assignmentContext *> ordered_parameter_assignment();
    Ordered_parameter_assignmentContext* ordered_parameter_assignment(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<Named_parameter_assignmentContext *> named_parameter_assignment();
    Named_parameter_assignmentContext* named_parameter_assignment(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  List_of_parameter_assignmentsContext* list_of_parameter_assignments();

  class  Ordered_parameter_assignmentContext : public antlr4::ParserRuleContext {
  public:
    Ordered_parameter_assignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Param_expressionContext *param_expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Ordered_parameter_assignmentContext* ordered_parameter_assignment();

  class  Named_parameter_assignmentContext : public antlr4::ParserRuleContext {
  public:
    Named_parameter_assignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DOT();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    Param_expressionContext *param_expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Named_parameter_assignmentContext* named_parameter_assignment();

  class  Hierarchical_instanceContext : public antlr4::ParserRuleContext {
  public:
    Hierarchical_instanceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Name_of_instanceContext *name_of_instance();
    antlr4::tree::TerminalNode *LPAREN();
    List_of_port_connectionsContext *list_of_port_connections();
    antlr4::tree::TerminalNode *RPAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Hierarchical_instanceContext* hierarchical_instance();

  class  Name_of_instanceContext : public antlr4::ParserRuleContext {
  public:
    Name_of_instanceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    std::vector<Unpacked_dimensionContext *> unpacked_dimension();
    Unpacked_dimensionContext* unpacked_dimension(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Name_of_instanceContext* name_of_instance();

  class  List_of_port_connectionsContext : public antlr4::ParserRuleContext {
  public:
    List_of_port_connectionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Ordered_port_connectionContext *> ordered_port_connection();
    Ordered_port_connectionContext* ordered_port_connection(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<Named_port_connectionContext *> named_port_connection();
    Named_port_connectionContext* named_port_connection(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  List_of_port_connectionsContext* list_of_port_connections();

  class  Ordered_port_connectionContext : public antlr4::ParserRuleContext {
  public:
    Ordered_port_connectionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Ordered_port_connectionContext* ordered_port_connection();

  class  Named_port_connectionContext : public antlr4::ParserRuleContext {
  public:
    Named_port_connectionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DOT();
    IdentifierContext *identifier();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *DOTSTAR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Named_port_connectionContext* named_port_connection();

  class  Interface_instantiationContext : public antlr4::ParserRuleContext {
  public:
    Interface_instantiationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    std::vector<Hierarchical_instanceContext *> hierarchical_instance();
    Hierarchical_instanceContext* hierarchical_instance(size_t i);
    antlr4::tree::TerminalNode *SEMI();
    Parameter_value_assignmentContext *parameter_value_assignment();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Interface_instantiationContext* interface_instantiation();

  class  Program_instantiationContext : public antlr4::ParserRuleContext {
  public:
    Program_instantiationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    std::vector<Hierarchical_instanceContext *> hierarchical_instance();
    Hierarchical_instanceContext* hierarchical_instance(size_t i);
    antlr4::tree::TerminalNode *SEMI();
    Parameter_value_assignmentContext *parameter_value_assignment();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Program_instantiationContext* program_instantiation();

  class  Checker_instantiationContext : public antlr4::ParserRuleContext {
  public:
    Checker_instantiationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Ps_identifierContext *ps_identifier();
    Name_of_instanceContext *name_of_instance();
    antlr4::tree::TerminalNode *LPAREN();
    List_of_checker_port_connectionsContext *list_of_checker_port_connections();
    antlr4::tree::TerminalNode *RPAREN();
    antlr4::tree::TerminalNode *SEMI();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Checker_instantiationContext* checker_instantiation();

  class  List_of_checker_port_connectionsContext : public antlr4::ParserRuleContext {
  public:
    List_of_checker_port_connectionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Ordered_checker_port_connectionContext *> ordered_checker_port_connection();
    Ordered_checker_port_connectionContext* ordered_checker_port_connection(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<Named_checker_port_connectionContext *> named_checker_port_connection();
    Named_checker_port_connectionContext* named_checker_port_connection(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  List_of_checker_port_connectionsContext* list_of_checker_port_connections();

  class  Ordered_checker_port_connectionContext : public antlr4::ParserRuleContext {
  public:
    Ordered_checker_port_connectionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);
    Property_actual_argContext *property_actual_arg();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Ordered_checker_port_connectionContext* ordered_checker_port_connection();

  class  Named_checker_port_connectionContext : public antlr4::ParserRuleContext {
  public:
    Named_checker_port_connectionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DOT();
    IdentifierContext *identifier();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    Property_actual_argContext *property_actual_arg();
    antlr4::tree::TerminalNode *DOTSTAR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Named_checker_port_connectionContext* named_checker_port_connection();

  class  Generate_regionContext : public antlr4::ParserRuleContext {
  public:
    Generate_regionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GENERATE();
    antlr4::tree::TerminalNode *ENDGENERATE();
    std::vector<Generate_itemContext *> generate_item();
    Generate_itemContext* generate_item(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Generate_regionContext* generate_region();

  class  Loop_generate_constructContext : public antlr4::ParserRuleContext {
  public:
    Loop_generate_constructContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *LPAREN();
    Genvar_initializationContext *genvar_initialization();
    std::vector<antlr4::tree::TerminalNode *> SEMI();
    antlr4::tree::TerminalNode* SEMI(size_t i);
    Constant_expressionContext *constant_expression();
    Genvar_iterationContext *genvar_iteration();
    antlr4::tree::TerminalNode *RPAREN();
    Generate_blockContext *generate_block();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Loop_generate_constructContext* loop_generate_construct();

  class  Genvar_initializationContext : public antlr4::ParserRuleContext {
  public:
    Genvar_initializationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *EQ();
    Constant_expressionContext *constant_expression();
    antlr4::tree::TerminalNode *GENVAR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Genvar_initializationContext* genvar_initialization();

  class  Genvar_iterationContext : public antlr4::ParserRuleContext {
  public:
    Genvar_iterationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    Assignment_operatorContext *assignment_operator();
    Constant_expressionContext *constant_expression();
    Inc_or_dec_operatorContext *inc_or_dec_operator();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Genvar_iterationContext* genvar_iteration();

  class  Conditional_generate_constructContext : public antlr4::ParserRuleContext {
  public:
    Conditional_generate_constructContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    If_generate_constructContext *if_generate_construct();
    Case_generate_constructContext *case_generate_construct();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Conditional_generate_constructContext* conditional_generate_construct();

  class  If_generate_constructContext : public antlr4::ParserRuleContext {
  public:
    If_generate_constructContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *LPAREN();
    Constant_expressionContext *constant_expression();
    antlr4::tree::TerminalNode *RPAREN();
    std::vector<Generate_blockContext *> generate_block();
    Generate_blockContext* generate_block(size_t i);
    antlr4::tree::TerminalNode *ELSE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  If_generate_constructContext* if_generate_construct();

  class  Case_generate_constructContext : public antlr4::ParserRuleContext {
  public:
    Case_generate_constructContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CASE();
    antlr4::tree::TerminalNode *LPAREN();
    Constant_expressionContext *constant_expression();
    antlr4::tree::TerminalNode *RPAREN();
    antlr4::tree::TerminalNode *ENDCASE();
    std::vector<Case_generate_itemContext *> case_generate_item();
    Case_generate_itemContext* case_generate_item(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Case_generate_constructContext* case_generate_construct();

  class  Case_generate_itemContext : public antlr4::ParserRuleContext {
  public:
    Case_generate_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Constant_expressionContext *> constant_expression();
    Constant_expressionContext* constant_expression(size_t i);
    antlr4::tree::TerminalNode *COLON();
    Generate_blockContext *generate_block();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *DEFAULT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Case_generate_itemContext* case_generate_item();

  class  Generate_blockContext : public antlr4::ParserRuleContext {
  public:
    Generate_blockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Generate_itemContext *> generate_item();
    Generate_itemContext* generate_item(size_t i);
    antlr4::tree::TerminalNode *BEGIN();
    antlr4::tree::TerminalNode *END();
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COLON();
    antlr4::tree::TerminalNode* COLON(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Generate_blockContext* generate_block();

  class  Generate_itemContext : public antlr4::ParserRuleContext {
  public:
    Generate_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Module_or_generate_itemContext *module_or_generate_item();
    Interface_or_generate_itemContext *interface_or_generate_item();
    Checker_or_generate_itemContext *checker_or_generate_item();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Generate_itemContext* generate_item();

  class  Udp_declaration_commonContext : public antlr4::ParserRuleContext {
  public:
    Udp_declaration_commonContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PRIMITIVE();
    IdentifierContext *identifier();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Udp_declaration_commonContext* udp_declaration_common();

  class  Udp_nonansi_portsContext : public antlr4::ParserRuleContext {
  public:
    Udp_nonansi_portsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    Udp_port_listContext *udp_port_list();
    antlr4::tree::TerminalNode *RPAREN();
    antlr4::tree::TerminalNode *SEMI();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Udp_nonansi_portsContext* udp_nonansi_ports();

  class  Udp_ansi_portsContext : public antlr4::ParserRuleContext {
  public:
    Udp_ansi_portsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    Udp_declaration_port_listContext *udp_declaration_port_list();
    antlr4::tree::TerminalNode *RPAREN();
    antlr4::tree::TerminalNode *SEMI();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Udp_ansi_portsContext* udp_ansi_ports();

  class  Udp_declarationContext : public antlr4::ParserRuleContext {
  public:
    Udp_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Udp_declaration_commonContext *udp_declaration_common();
    Udp_nonansi_portsContext *udp_nonansi_ports();
    Udp_bodyContext *udp_body();
    antlr4::tree::TerminalNode *ENDPRIMITIVE();
    std::vector<Udp_port_declarationContext *> udp_port_declaration();
    Udp_port_declarationContext* udp_port_declaration(size_t i);
    antlr4::tree::TerminalNode *COLON();
    IdentifierContext *identifier();
    Udp_ansi_portsContext *udp_ansi_ports();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *DOTSTAR();
    antlr4::tree::TerminalNode *RPAREN();
    antlr4::tree::TerminalNode *SEMI();
    antlr4::tree::TerminalNode *EXTERN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Udp_declarationContext* udp_declaration();

  class  Udp_port_listContext : public antlr4::ParserRuleContext {
  public:
    Udp_port_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Udp_port_listContext* udp_port_list();

  class  Udp_declaration_port_listContext : public antlr4::ParserRuleContext {
  public:
    Udp_declaration_port_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Udp_output_declarationContext *udp_output_declaration();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<Udp_input_declarationContext *> udp_input_declaration();
    Udp_input_declarationContext* udp_input_declaration(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Udp_declaration_port_listContext* udp_declaration_port_list();

  class  Udp_port_declarationContext : public antlr4::ParserRuleContext {
  public:
    Udp_port_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Udp_output_declarationContext *udp_output_declaration();
    antlr4::tree::TerminalNode *SEMI();
    Udp_input_declarationContext *udp_input_declaration();
    Udp_reg_declarationContext *udp_reg_declaration();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Udp_port_declarationContext* udp_port_declaration();

  class  Udp_output_declarationContext : public antlr4::ParserRuleContext {
  public:
    Udp_output_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OUTPUT();
    IdentifierContext *identifier();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);
    antlr4::tree::TerminalNode *REG();
    antlr4::tree::TerminalNode *EQ();
    Constant_expressionContext *constant_expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Udp_output_declarationContext* udp_output_declaration();

  class  Udp_input_declarationContext : public antlr4::ParserRuleContext {
  public:
    Udp_input_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INPUT();
    List_of_udp_port_identifiersContext *list_of_udp_port_identifiers();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Udp_input_declarationContext* udp_input_declaration();

  class  Udp_reg_declarationContext : public antlr4::ParserRuleContext {
  public:
    Udp_reg_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REG();
    IdentifierContext *identifier();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Udp_reg_declarationContext* udp_reg_declaration();

  class  Udp_bodyContext : public antlr4::ParserRuleContext {
  public:
    Udp_bodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Combinational_bodyContext *combinational_body();
    Sequential_bodyContext *sequential_body();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Udp_bodyContext* udp_body();

  class  Combinational_bodyContext : public antlr4::ParserRuleContext {
  public:
    Combinational_bodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TABLE();
    antlr4::tree::TerminalNode *ENDTABLE();
    std::vector<Combinational_entryContext *> combinational_entry();
    Combinational_entryContext* combinational_entry(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Combinational_bodyContext* combinational_body();

  class  Combinational_entryContext : public antlr4::ParserRuleContext {
  public:
    Combinational_entryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Level_input_listContext *level_input_list();
    antlr4::tree::TerminalNode *COLON();
    antlr4::tree::TerminalNode *OUTPUT_SYMBOL();
    antlr4::tree::TerminalNode *SEMI();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Combinational_entryContext* combinational_entry();

  class  Sequential_bodyContext : public antlr4::ParserRuleContext {
  public:
    Sequential_bodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TABLE();
    antlr4::tree::TerminalNode *ENDTABLE();
    Udp_initial_statementContext *udp_initial_statement();
    std::vector<Sequential_entryContext *> sequential_entry();
    Sequential_entryContext* sequential_entry(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Sequential_bodyContext* sequential_body();

  class  Udp_initial_statementContext : public antlr4::ParserRuleContext {
  public:
    Udp_initial_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INITIAL();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *EQ();
    Init_valContext *init_val();
    antlr4::tree::TerminalNode *SEMI();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Udp_initial_statementContext* udp_initial_statement();

  class  Init_valContext : public antlr4::ParserRuleContext {
  public:
    Init_valContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BINARY_NUMBER();
    antlr4::tree::TerminalNode *DECIMAL_NUMBER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Init_valContext* init_val();

  class  Sequential_entryContext : public antlr4::ParserRuleContext {
  public:
    Sequential_entryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Seq_input_listContext *seq_input_list();
    std::vector<antlr4::tree::TerminalNode *> COLON();
    antlr4::tree::TerminalNode* COLON(size_t i);
    Current_stateContext *current_state();
    Next_stateContext *next_state();
    antlr4::tree::TerminalNode *SEMI();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Sequential_entryContext* sequential_entry();

  class  Seq_input_listContext : public antlr4::ParserRuleContext {
  public:
    Seq_input_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Level_input_listContext *level_input_list();
    Edge_input_listContext *edge_input_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Seq_input_listContext* seq_input_list();

  class  Level_input_listContext : public antlr4::ParserRuleContext {
  public:
    Level_input_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Level_symbolContext *> level_symbol();
    Level_symbolContext* level_symbol(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Level_input_listContext* level_input_list();

  class  Edge_input_listContext : public antlr4::ParserRuleContext {
  public:
    Edge_input_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Edge_indicatorContext *edge_indicator();
    std::vector<Level_symbolContext *> level_symbol();
    Level_symbolContext* level_symbol(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Edge_input_listContext* edge_input_list();

  class  Edge_indicatorContext : public antlr4::ParserRuleContext {
  public:
    Edge_indicatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    std::vector<Level_symbolContext *> level_symbol();
    Level_symbolContext* level_symbol(size_t i);
    antlr4::tree::TerminalNode *RPAREN();
    antlr4::tree::TerminalNode *EDGE_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Edge_indicatorContext* edge_indicator();

  class  Current_stateContext : public antlr4::ParserRuleContext {
  public:
    Current_stateContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Level_symbolContext *level_symbol();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Current_stateContext* current_state();

  class  Next_stateContext : public antlr4::ParserRuleContext {
  public:
    Next_stateContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OUTPUT_SYMBOL();
    antlr4::tree::TerminalNode *MINUS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Next_stateContext* next_state();

  class  Level_symbolContext : public antlr4::ParserRuleContext {
  public:
    Level_symbolContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OUTPUT_SYMBOL();
    antlr4::tree::TerminalNode *EXTRA_LEVEL_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Level_symbolContext* level_symbol();

  class  Udp_instantiationContext : public antlr4::ParserRuleContext {
  public:
    Udp_instantiationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    std::vector<Udp_instanceContext *> udp_instance();
    Udp_instanceContext* udp_instance(size_t i);
    antlr4::tree::TerminalNode *SEMI();
    Drive_strengthContext *drive_strength();
    Delay2Context *delay2();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Udp_instantiationContext* udp_instantiation();

  class  Udp_instanceContext : public antlr4::ParserRuleContext {
  public:
    Udp_instanceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    Output_terminalContext *output_terminal();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<Input_terminalContext *> input_terminal();
    Input_terminalContext* input_terminal(size_t i);
    antlr4::tree::TerminalNode *RPAREN();
    Name_of_instanceContext *name_of_instance();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Udp_instanceContext* udp_instance();

  class  Continuous_assignContext : public antlr4::ParserRuleContext {
  public:
    Continuous_assignContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ASSIGN();
    List_of_net_assignmentsContext *list_of_net_assignments();
    antlr4::tree::TerminalNode *SEMI();
    Drive_strengthContext *drive_strength();
    Delay3Context *delay3();
    List_of_variable_assignmentsContext *list_of_variable_assignments();
    Delay_controlContext *delay_control();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Continuous_assignContext* continuous_assign();

  class  List_of_net_assignmentsContext : public antlr4::ParserRuleContext {
  public:
    List_of_net_assignmentsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Net_assignmentContext *> net_assignment();
    Net_assignmentContext* net_assignment(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  List_of_net_assignmentsContext* list_of_net_assignments();

  class  List_of_variable_assignmentsContext : public antlr4::ParserRuleContext {
  public:
    List_of_variable_assignmentsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Variable_assignmentContext *> variable_assignment();
    Variable_assignmentContext* variable_assignment(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  List_of_variable_assignmentsContext* list_of_variable_assignments();

  class  Net_aliasContext : public antlr4::ParserRuleContext {
  public:
    Net_aliasContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALIAS();
    std::vector<Net_lvalueContext *> net_lvalue();
    Net_lvalueContext* net_lvalue(size_t i);
    std::vector<antlr4::tree::TerminalNode *> EQ();
    antlr4::tree::TerminalNode* EQ(size_t i);
    antlr4::tree::TerminalNode *SEMI();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Net_aliasContext* net_alias();

  class  Net_assignmentContext : public antlr4::ParserRuleContext {
  public:
    Net_assignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Net_lvalueContext *net_lvalue();
    antlr4::tree::TerminalNode *EQ();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Net_assignmentContext* net_assignment();

  class  Initial_constructContext : public antlr4::ParserRuleContext {
  public:
    Initial_constructContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INITIAL();
    Statement_or_nullContext *statement_or_null();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Initial_constructContext* initial_construct();

  class  Always_constructContext : public antlr4::ParserRuleContext {
  public:
    Always_constructContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Always_keywordContext *always_keyword();
    StatementContext *statement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Always_constructContext* always_construct();

  class  Always_keywordContext : public antlr4::ParserRuleContext {
  public:
    Always_keywordContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALWAYS();
    antlr4::tree::TerminalNode *ALWAYS_COMB();
    antlr4::tree::TerminalNode *ALWAYS_LATCH();
    antlr4::tree::TerminalNode *ALWAYS_FF();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Always_keywordContext* always_keyword();

  class  Final_constructContext : public antlr4::ParserRuleContext {
  public:
    Final_constructContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FINAL();
    Function_statementContext *function_statement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Final_constructContext* final_construct();

  class  Blocking_assignmentContext : public antlr4::ParserRuleContext {
  public:
    Blocking_assignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Variable_lvalueContext *variable_lvalue();
    antlr4::tree::TerminalNode *EQ();
    Delay_or_event_controlContext *delay_or_event_control();
    ExpressionContext *expression();
    Nonrange_variable_lvalueContext *nonrange_variable_lvalue();
    Dynamic_array_newContext *dynamic_array_new();
    Hierarchical_identifierContext *hierarchical_identifier();
    Select_Context *select_();
    Class_newContext *class_new();
    Implicit_class_handleContext *implicit_class_handle();
    antlr4::tree::TerminalNode *DOT();
    Class_scopeContext *class_scope();
    Package_scopeContext *package_scope();
    Operator_assignmentContext *operator_assignment();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Blocking_assignmentContext* blocking_assignment();

  class  Operator_assignmentContext : public antlr4::ParserRuleContext {
  public:
    Operator_assignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Variable_lvalueContext *variable_lvalue();
    Assignment_operatorContext *assignment_operator();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Operator_assignmentContext* operator_assignment();

  class  Assignment_operatorContext : public antlr4::ParserRuleContext {
  public:
    Assignment_operatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EQ();
    antlr4::tree::TerminalNode *PLUSEQ();
    antlr4::tree::TerminalNode *MINUSEQ();
    antlr4::tree::TerminalNode *STAREQ();
    antlr4::tree::TerminalNode *SLASHEQ();
    antlr4::tree::TerminalNode *PERCENTEQ();
    antlr4::tree::TerminalNode *AMPEQ();
    antlr4::tree::TerminalNode *PIPEEQ();
    antlr4::tree::TerminalNode *CARROTEQ();
    antlr4::tree::TerminalNode *LTLTEQ();
    antlr4::tree::TerminalNode *GTGTEQ();
    antlr4::tree::TerminalNode *LTLTLTEQ();
    antlr4::tree::TerminalNode *GTGTGTEQ();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Assignment_operatorContext* assignment_operator();

  class  Nonblocking_assignmentContext : public antlr4::ParserRuleContext {
  public:
    Nonblocking_assignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Variable_lvalueContext *variable_lvalue();
    antlr4::tree::TerminalNode *LTEQ();
    ExpressionContext *expression();
    Delay_or_event_controlContext *delay_or_event_control();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Nonblocking_assignmentContext* nonblocking_assignment();

  class  Procedural_continuous_assignmentContext : public antlr4::ParserRuleContext {
  public:
    Procedural_continuous_assignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ASSIGN();
    Variable_assignmentContext *variable_assignment();
    antlr4::tree::TerminalNode *DEASSIGN();
    Variable_lvalueContext *variable_lvalue();
    antlr4::tree::TerminalNode *FORCE();
    Net_assignmentContext *net_assignment();
    antlr4::tree::TerminalNode *RELEASE();
    Net_lvalueContext *net_lvalue();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Procedural_continuous_assignmentContext* procedural_continuous_assignment();

  class  Variable_assignmentContext : public antlr4::ParserRuleContext {
  public:
    Variable_assignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Variable_lvalueContext *variable_lvalue();
    antlr4::tree::TerminalNode *EQ();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Variable_assignmentContext* variable_assignment();

  class  Action_blockContext : public antlr4::ParserRuleContext {
  public:
    Action_blockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Statement_or_nullContext *statement_or_null();
    antlr4::tree::TerminalNode *ELSE();
    StatementContext *statement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Action_blockContext* action_block();

  class  Seq_blockContext : public antlr4::ParserRuleContext {
  public:
    Seq_blockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BEGIN();
    antlr4::tree::TerminalNode *END();
    std::vector<antlr4::tree::TerminalNode *> COLON();
    antlr4::tree::TerminalNode* COLON(size_t i);
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    std::vector<Block_item_declarationContext *> block_item_declaration();
    Block_item_declarationContext* block_item_declaration(size_t i);
    std::vector<Statement_or_nullContext *> statement_or_null();
    Statement_or_nullContext* statement_or_null(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Seq_blockContext* seq_block();

  class  Par_blockContext : public antlr4::ParserRuleContext {
  public:
    Par_blockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FORK();
    Join_keywordContext *join_keyword();
    std::vector<antlr4::tree::TerminalNode *> COLON();
    antlr4::tree::TerminalNode* COLON(size_t i);
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    std::vector<Block_item_declarationContext *> block_item_declaration();
    Block_item_declarationContext* block_item_declaration(size_t i);
    std::vector<Statement_or_nullContext *> statement_or_null();
    Statement_or_nullContext* statement_or_null(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Par_blockContext* par_block();

  class  Join_keywordContext : public antlr4::ParserRuleContext {
  public:
    Join_keywordContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *JOIN();
    antlr4::tree::TerminalNode *JOIN_ANY();
    antlr4::tree::TerminalNode *JOIN_NONE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Join_keywordContext* join_keyword();

  class  Statement_or_nullContext : public antlr4::ParserRuleContext {
  public:
    Statement_or_nullContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StatementContext *statement();
    antlr4::tree::TerminalNode *SEMI();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Statement_or_nullContext* statement_or_null();

  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Statement_itemContext *statement_item();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *COLON();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  StatementContext* statement();

  class  Statement_itemContext : public antlr4::ParserRuleContext {
  public:
    Statement_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Blocking_assignmentContext *blocking_assignment();
    antlr4::tree::TerminalNode *SEMI();
    Nonblocking_assignmentContext *nonblocking_assignment();
    Procedural_continuous_assignmentContext *procedural_continuous_assignment();
    Case_statementContext *case_statement();
    Conditional_statementContext *conditional_statement();
    Inc_or_dec_expressionContext *inc_or_dec_expression();
    Subroutine_call_statementContext *subroutine_call_statement();
    Disable_statementContext *disable_statement();
    Event_triggerContext *event_trigger();
    Loop_statementContext *loop_statement();
    Jump_statementContext *jump_statement();
    Par_blockContext *par_block();
    Procedural_timing_control_statementContext *procedural_timing_control_statement();
    Seq_blockContext *seq_block();
    Wait_statementContext *wait_statement();
    Procedural_assertion_statementContext *procedural_assertion_statement();
    Clocking_driveContext *clocking_drive();
    Randsequence_statementContext *randsequence_statement();
    Randcase_statementContext *randcase_statement();
    Expect_property_statementContext *expect_property_statement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Statement_itemContext* statement_item();

  class  Function_statementContext : public antlr4::ParserRuleContext {
  public:
    Function_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StatementContext *statement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Function_statementContext* function_statement();

  class  Function_statement_or_nullContext : public antlr4::ParserRuleContext {
  public:
    Function_statement_or_nullContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Function_statementContext *function_statement();
    antlr4::tree::TerminalNode *SEMI();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Function_statement_or_nullContext* function_statement_or_null();

  class  Variable_identifier_listContext : public antlr4::ParserRuleContext {
  public:
    Variable_identifier_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Variable_identifier_listContext* variable_identifier_list();

  class  Procedural_timing_control_statementContext : public antlr4::ParserRuleContext {
  public:
    Procedural_timing_control_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Procedural_timing_controlContext *procedural_timing_control();
    Statement_or_nullContext *statement_or_null();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Procedural_timing_control_statementContext* procedural_timing_control_statement();

  class  Delay_or_event_controlContext : public antlr4::ParserRuleContext {
  public:
    Delay_or_event_controlContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Delay_controlContext *delay_control();
    Event_controlContext *event_control();
    antlr4::tree::TerminalNode *REPEAT();
    antlr4::tree::TerminalNode *LPAREN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RPAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Delay_or_event_controlContext* delay_or_event_control();

  class  Delay_controlContext : public antlr4::ParserRuleContext {
  public:
    Delay_controlContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HASH();
    Delay_valueContext *delay_value();
    antlr4::tree::TerminalNode *LPAREN();
    Mintypmax_expressionContext *mintypmax_expression();
    antlr4::tree::TerminalNode *RPAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Delay_controlContext* delay_control();

  class  Event_controlContext : public antlr4::ParserRuleContext {
  public:
    Event_controlContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AT();
    Hierarchical_identifierContext *hierarchical_identifier();
    antlr4::tree::TerminalNode *LPAREN();
    Event_expressionContext *event_expression();
    antlr4::tree::TerminalNode *RPAREN();
    antlr4::tree::TerminalNode *STAR();
    Ps_or_hierarchical_identifierContext *ps_or_hierarchical_identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Event_controlContext* event_control();

  class  Event_expressionContext : public antlr4::ParserRuleContext {
  public:
    Event_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    Edge_identifierContext *edge_identifier();
    antlr4::tree::TerminalNode *IFF();
    Sequence_instanceContext *sequence_instance();
    antlr4::tree::TerminalNode *LPAREN();
    std::vector<Event_expressionContext *> event_expression();
    Event_expressionContext* event_expression(size_t i);
    antlr4::tree::TerminalNode *RPAREN();
    antlr4::tree::TerminalNode *OR();
    antlr4::tree::TerminalNode *COMMA();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Event_expressionContext* event_expression();
  Event_expressionContext* event_expression(int precedence);
  class  Procedural_timing_controlContext : public antlr4::ParserRuleContext {
  public:
    Procedural_timing_controlContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Delay_controlContext *delay_control();
    Event_controlContext *event_control();
    Cycle_delayContext *cycle_delay();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Procedural_timing_controlContext* procedural_timing_control();

  class  Jump_statementContext : public antlr4::ParserRuleContext {
  public:
    Jump_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RETURN();
    antlr4::tree::TerminalNode *SEMI();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *BREAK();
    antlr4::tree::TerminalNode *CONTINUE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Jump_statementContext* jump_statement();

  class  Wait_statementContext : public antlr4::ParserRuleContext {
  public:
    Wait_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WAIT();
    antlr4::tree::TerminalNode *LPAREN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RPAREN();
    Statement_or_nullContext *statement_or_null();
    antlr4::tree::TerminalNode *FORK();
    antlr4::tree::TerminalNode *SEMI();
    antlr4::tree::TerminalNode *WAIT_ORDER();
    std::vector<Hierarchical_identifierContext *> hierarchical_identifier();
    Hierarchical_identifierContext* hierarchical_identifier(size_t i);
    Action_blockContext *action_block();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Wait_statementContext* wait_statement();

  class  Event_triggerContext : public antlr4::ParserRuleContext {
  public:
    Event_triggerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RARROW();
    Hierarchical_identifierContext *hierarchical_identifier();
    antlr4::tree::TerminalNode *SEMI();
    antlr4::tree::TerminalNode *RARROWARROW();
    Delay_or_event_controlContext *delay_or_event_control();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Event_triggerContext* event_trigger();

  class  Disable_statementContext : public antlr4::ParserRuleContext {
  public:
    Disable_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DISABLE();
    Hierarchical_identifierContext *hierarchical_identifier();
    antlr4::tree::TerminalNode *SEMI();
    antlr4::tree::TerminalNode *FORK();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Disable_statementContext* disable_statement();

  class  Conditional_statementContext : public antlr4::ParserRuleContext {
  public:
    Conditional_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> IF();
    antlr4::tree::TerminalNode* IF(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LPAREN();
    antlr4::tree::TerminalNode* LPAREN(size_t i);
    std::vector<Cond_predicateContext *> cond_predicate();
    Cond_predicateContext* cond_predicate(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RPAREN();
    antlr4::tree::TerminalNode* RPAREN(size_t i);
    std::vector<Statement_or_nullContext *> statement_or_null();
    Statement_or_nullContext* statement_or_null(size_t i);
    Unique_priorityContext *unique_priority();
    std::vector<antlr4::tree::TerminalNode *> ELSE();
    antlr4::tree::TerminalNode* ELSE(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Conditional_statementContext* conditional_statement();

  class  Unique_priorityContext : public antlr4::ParserRuleContext {
  public:
    Unique_priorityContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *UNIQUE();
    antlr4::tree::TerminalNode *UNIQUE0();
    antlr4::tree::TerminalNode *PRIORITY();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Unique_priorityContext* unique_priority();

  class  Cond_predicateContext : public antlr4::ParserRuleContext {
  public:
    Cond_predicateContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Expression_or_cond_patternContext *> expression_or_cond_pattern();
    Expression_or_cond_patternContext* expression_or_cond_pattern(size_t i);
    std::vector<antlr4::tree::TerminalNode *> AMPAMPAMP();
    antlr4::tree::TerminalNode* AMPAMPAMP(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Cond_predicateContext* cond_predicate();

  class  Expression_or_cond_patternContext : public antlr4::ParserRuleContext {
  public:
    Expression_or_cond_patternContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    Cond_patternContext *cond_pattern();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Expression_or_cond_patternContext* expression_or_cond_pattern();

  class  Cond_patternContext : public antlr4::ParserRuleContext {
  public:
    Cond_patternContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *MATCHES();
    PatternContext *pattern();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Cond_patternContext* cond_pattern();

  class  Case_statementContext : public antlr4::ParserRuleContext {
  public:
    Case_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Case_keywordContext *case_keyword();
    antlr4::tree::TerminalNode *LPAREN();
    Case_expressionContext *case_expression();
    antlr4::tree::TerminalNode *RPAREN();
    antlr4::tree::TerminalNode *ENDCASE();
    Unique_priorityContext *unique_priority();
    std::vector<Case_itemContext *> case_item();
    Case_itemContext* case_item(size_t i);
    antlr4::tree::TerminalNode *MATCHES();
    std::vector<Case_pattern_itemContext *> case_pattern_item();
    Case_pattern_itemContext* case_pattern_item(size_t i);
    antlr4::tree::TerminalNode *CASE();
    antlr4::tree::TerminalNode *INSIDE();
    std::vector<Case_inside_itemContext *> case_inside_item();
    Case_inside_itemContext* case_inside_item(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Case_statementContext* case_statement();

  class  Case_keywordContext : public antlr4::ParserRuleContext {
  public:
    Case_keywordContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CASE();
    antlr4::tree::TerminalNode *CASEZ();
    antlr4::tree::TerminalNode *CASEX();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Case_keywordContext* case_keyword();

  class  Case_expressionContext : public antlr4::ParserRuleContext {
  public:
    Case_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Case_expressionContext* case_expression();

  class  Case_itemContext : public antlr4::ParserRuleContext {
  public:
    Case_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Case_item_expressionContext *> case_item_expression();
    Case_item_expressionContext* case_item_expression(size_t i);
    antlr4::tree::TerminalNode *COLON();
    Statement_or_nullContext *statement_or_null();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *DEFAULT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Case_itemContext* case_item();

  class  Case_pattern_itemContext : public antlr4::ParserRuleContext {
  public:
    Case_pattern_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PatternContext *pattern();
    antlr4::tree::TerminalNode *COLON();
    Statement_or_nullContext *statement_or_null();
    antlr4::tree::TerminalNode *AMPAMPAMP();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *DEFAULT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Case_pattern_itemContext* case_pattern_item();

  class  Case_inside_itemContext : public antlr4::ParserRuleContext {
  public:
    Case_inside_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Open_range_listContext *open_range_list();
    antlr4::tree::TerminalNode *COLON();
    Statement_or_nullContext *statement_or_null();
    antlr4::tree::TerminalNode *DEFAULT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Case_inside_itemContext* case_inside_item();

  class  Case_item_expressionContext : public antlr4::ParserRuleContext {
  public:
    Case_item_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Case_item_expressionContext* case_item_expression();

  class  Randcase_statementContext : public antlr4::ParserRuleContext {
  public:
    Randcase_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RANDCASE();
    antlr4::tree::TerminalNode *ENDCASE();
    std::vector<Randcase_itemContext *> randcase_item();
    Randcase_itemContext* randcase_item(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Randcase_statementContext* randcase_statement();

  class  Randcase_itemContext : public antlr4::ParserRuleContext {
  public:
    Randcase_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *COLON();
    Statement_or_nullContext *statement_or_null();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Randcase_itemContext* randcase_item();

  class  Open_range_listContext : public antlr4::ParserRuleContext {
  public:
    Open_range_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Open_value_rangeContext *> open_value_range();
    Open_value_rangeContext* open_value_range(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Open_range_listContext* open_range_list();

  class  Open_value_rangeContext : public antlr4::ParserRuleContext {
  public:
    Open_value_rangeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Value_rangeContext *value_range();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Open_value_rangeContext* open_value_range();

  class  PatternContext : public antlr4::ParserRuleContext {
  public:
    PatternContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DOT();
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    antlr4::tree::TerminalNode *DOTSTAR();
    Constant_expressionContext *constant_expression();
    antlr4::tree::TerminalNode *TAGGED();
    std::vector<PatternContext *> pattern();
    PatternContext* pattern(size_t i);
    antlr4::tree::TerminalNode *QUOTE();
    antlr4::tree::TerminalNode *LBRACE();
    antlr4::tree::TerminalNode *RBRACE();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COLON();
    antlr4::tree::TerminalNode* COLON(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PatternContext* pattern();

  class  Assignment_patternContext : public antlr4::ParserRuleContext {
  public:
    Assignment_patternContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *QUOTE();
    std::vector<antlr4::tree::TerminalNode *> LBRACE();
    antlr4::tree::TerminalNode* LBRACE(size_t i);
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RBRACE();
    antlr4::tree::TerminalNode* RBRACE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<Structure_pattern_keyContext *> structure_pattern_key();
    Structure_pattern_keyContext* structure_pattern_key(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COLON();
    antlr4::tree::TerminalNode* COLON(size_t i);
    std::vector<Array_pattern_keyContext *> array_pattern_key();
    Array_pattern_keyContext* array_pattern_key(size_t i);
    Constant_expressionContext *constant_expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Assignment_patternContext* assignment_pattern();

  class  Structure_pattern_keyContext : public antlr4::ParserRuleContext {
  public:
    Structure_pattern_keyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    Assignment_pattern_keyContext *assignment_pattern_key();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Structure_pattern_keyContext* structure_pattern_key();

  class  Array_pattern_keyContext : public antlr4::ParserRuleContext {
  public:
    Array_pattern_keyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Constant_expressionContext *constant_expression();
    Assignment_pattern_keyContext *assignment_pattern_key();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Array_pattern_keyContext* array_pattern_key();

  class  Assignment_pattern_keyContext : public antlr4::ParserRuleContext {
  public:
    Assignment_pattern_keyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Simple_typeContext *simple_type();
    antlr4::tree::TerminalNode *DEFAULT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Assignment_pattern_keyContext* assignment_pattern_key();

  class  Assignment_pattern_expressionContext : public antlr4::ParserRuleContext {
  public:
    Assignment_pattern_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Assignment_patternContext *assignment_pattern();
    Assignment_pattern_expression_typeContext *assignment_pattern_expression_type();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Assignment_pattern_expressionContext* assignment_pattern_expression();

  class  Assignment_pattern_expression_typeContext : public antlr4::ParserRuleContext {
  public:
    Assignment_pattern_expression_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Ps_type_identifierContext *ps_type_identifier();
    Ps_parameter_identifierContext *ps_parameter_identifier();
    Integer_atom_typeContext *integer_atom_type();
    Type_referenceContext *type_reference();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Assignment_pattern_expression_typeContext* assignment_pattern_expression_type();

  class  Constant_assignment_pattern_expressionContext : public antlr4::ParserRuleContext {
  public:
    Constant_assignment_pattern_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Assignment_pattern_expressionContext *assignment_pattern_expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Constant_assignment_pattern_expressionContext* constant_assignment_pattern_expression();

  class  Assignment_pattern_net_lvalueContext : public antlr4::ParserRuleContext {
  public:
    Assignment_pattern_net_lvalueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *QUOTE();
    antlr4::tree::TerminalNode *LBRACE();
    std::vector<Net_lvalueContext *> net_lvalue();
    Net_lvalueContext* net_lvalue(size_t i);
    antlr4::tree::TerminalNode *RBRACE();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Assignment_pattern_net_lvalueContext* assignment_pattern_net_lvalue();

  class  Assignment_pattern_variable_lvalueContext : public antlr4::ParserRuleContext {
  public:
    Assignment_pattern_variable_lvalueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *QUOTE();
    antlr4::tree::TerminalNode *LBRACE();
    std::vector<Variable_lvalueContext *> variable_lvalue();
    Variable_lvalueContext* variable_lvalue(size_t i);
    antlr4::tree::TerminalNode *RBRACE();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Assignment_pattern_variable_lvalueContext* assignment_pattern_variable_lvalue();

  class  Loop_statementContext : public antlr4::ParserRuleContext {
  public:
    Loop_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FOREVER();
    Statement_or_nullContext *statement_or_null();
    antlr4::tree::TerminalNode *REPEAT();
    antlr4::tree::TerminalNode *LPAREN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RPAREN();
    antlr4::tree::TerminalNode *WHILE();
    antlr4::tree::TerminalNode *FOR();
    std::vector<antlr4::tree::TerminalNode *> SEMI();
    antlr4::tree::TerminalNode* SEMI(size_t i);
    For_initializationContext *for_initialization();
    For_stepContext *for_step();
    antlr4::tree::TerminalNode *DO();
    antlr4::tree::TerminalNode *FOREACH();
    Ps_or_hierarchical_array_identifierContext *ps_or_hierarchical_array_identifier();
    antlr4::tree::TerminalNode *LBRACK();
    Loop_variablesContext *loop_variables();
    antlr4::tree::TerminalNode *RBRACK();
    StatementContext *statement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Loop_statementContext* loop_statement();

  class  For_initializationContext : public antlr4::ParserRuleContext {
  public:
    For_initializationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    List_of_variable_assignmentsContext *list_of_variable_assignments();
    std::vector<For_variable_declarationContext *> for_variable_declaration();
    For_variable_declarationContext* for_variable_declaration(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  For_initializationContext* for_initialization();

  class  For_variable_declarationContext : public antlr4::ParserRuleContext {
  public:
    For_variable_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Data_typeContext *data_type();
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> EQ();
    antlr4::tree::TerminalNode* EQ(size_t i);
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *VAR();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  For_variable_declarationContext* for_variable_declaration();

  class  For_stepContext : public antlr4::ParserRuleContext {
  public:
    For_stepContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<For_step_assignmentContext *> for_step_assignment();
    For_step_assignmentContext* for_step_assignment(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  For_stepContext* for_step();

  class  For_step_assignmentContext : public antlr4::ParserRuleContext {
  public:
    For_step_assignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Operator_assignmentContext *operator_assignment();
    Inc_or_dec_expressionContext *inc_or_dec_expression();
    Function_subroutine_callContext *function_subroutine_call();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  For_step_assignmentContext* for_step_assignment();

  class  Loop_variablesContext : public antlr4::ParserRuleContext {
  public:
    Loop_variablesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Loop_variablesContext* loop_variables();

  class  Subroutine_call_statementContext : public antlr4::ParserRuleContext {
  public:
    Subroutine_call_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Subroutine_callContext *subroutine_call();
    antlr4::tree::TerminalNode *SEMI();
    antlr4::tree::TerminalNode *VOID();
    antlr4::tree::TerminalNode *QUOTE();
    antlr4::tree::TerminalNode *LPAREN();
    Function_subroutine_callContext *function_subroutine_call();
    antlr4::tree::TerminalNode *RPAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Subroutine_call_statementContext* subroutine_call_statement();

  class  Assertion_itemContext : public antlr4::ParserRuleContext {
  public:
    Assertion_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Concurrent_assertion_itemContext *concurrent_assertion_item();
    Deferred_immediate_assertion_itemContext *deferred_immediate_assertion_item();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Assertion_itemContext* assertion_item();

  class  Deferred_immediate_assertion_itemContext : public antlr4::ParserRuleContext {
  public:
    Deferred_immediate_assertion_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Deferred_immediate_assertion_statementContext *deferred_immediate_assertion_statement();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *COLON();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Deferred_immediate_assertion_itemContext* deferred_immediate_assertion_item();

  class  Procedural_assertion_statementContext : public antlr4::ParserRuleContext {
  public:
    Procedural_assertion_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Concurrent_assertion_statementContext *concurrent_assertion_statement();
    Immediate_assertion_statementContext *immediate_assertion_statement();
    Checker_instantiationContext *checker_instantiation();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Procedural_assertion_statementContext* procedural_assertion_statement();

  class  Immediate_assertion_statementContext : public antlr4::ParserRuleContext {
  public:
    Immediate_assertion_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Simple_immediate_assertion_statementContext *simple_immediate_assertion_statement();
    Deferred_immediate_assertion_statementContext *deferred_immediate_assertion_statement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Immediate_assertion_statementContext* immediate_assertion_statement();

  class  Simple_immediate_assertion_statementContext : public antlr4::ParserRuleContext {
  public:
    Simple_immediate_assertion_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Simple_immediate_assert_statementContext *simple_immediate_assert_statement();
    Simple_immediate_assume_statementContext *simple_immediate_assume_statement();
    Simple_immediate_cover_statementContext *simple_immediate_cover_statement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Simple_immediate_assertion_statementContext* simple_immediate_assertion_statement();

  class  Simple_immediate_assert_statementContext : public antlr4::ParserRuleContext {
  public:
    Simple_immediate_assert_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ASSERT();
    antlr4::tree::TerminalNode *LPAREN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RPAREN();
    Action_blockContext *action_block();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Simple_immediate_assert_statementContext* simple_immediate_assert_statement();

  class  Simple_immediate_assume_statementContext : public antlr4::ParserRuleContext {
  public:
    Simple_immediate_assume_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ASSUME();
    antlr4::tree::TerminalNode *LPAREN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RPAREN();
    Action_blockContext *action_block();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Simple_immediate_assume_statementContext* simple_immediate_assume_statement();

  class  Simple_immediate_cover_statementContext : public antlr4::ParserRuleContext {
  public:
    Simple_immediate_cover_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COVER();
    antlr4::tree::TerminalNode *LPAREN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RPAREN();
    Statement_or_nullContext *statement_or_null();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Simple_immediate_cover_statementContext* simple_immediate_cover_statement();

  class  Deferred_immediate_assertion_statementContext : public antlr4::ParserRuleContext {
  public:
    Deferred_immediate_assertion_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Deferred_immediate_assert_statementContext *deferred_immediate_assert_statement();
    Deferred_immediate_assume_statementContext *deferred_immediate_assume_statement();
    Deferred_immediate_cover_statementContext *deferred_immediate_cover_statement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Deferred_immediate_assertion_statementContext* deferred_immediate_assertion_statement();

  class  Deferred_immediate_assert_statementContext : public antlr4::ParserRuleContext {
  public:
    Deferred_immediate_assert_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ASSERT();
    antlr4::tree::TerminalNode *HASH();
    antlr4::tree::TerminalNode *DECIMAL_NUMBER();
    antlr4::tree::TerminalNode *LPAREN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RPAREN();
    Action_blockContext *action_block();
    antlr4::tree::TerminalNode *FINAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Deferred_immediate_assert_statementContext* deferred_immediate_assert_statement();

  class  Deferred_immediate_assume_statementContext : public antlr4::ParserRuleContext {
  public:
    Deferred_immediate_assume_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ASSUME();
    antlr4::tree::TerminalNode *HASH();
    antlr4::tree::TerminalNode *DECIMAL_NUMBER();
    antlr4::tree::TerminalNode *LPAREN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RPAREN();
    Action_blockContext *action_block();
    antlr4::tree::TerminalNode *FINAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Deferred_immediate_assume_statementContext* deferred_immediate_assume_statement();

  class  Deferred_immediate_cover_statementContext : public antlr4::ParserRuleContext {
  public:
    Deferred_immediate_cover_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COVER();
    antlr4::tree::TerminalNode *HASH();
    antlr4::tree::TerminalNode *DECIMAL_NUMBER();
    antlr4::tree::TerminalNode *LPAREN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RPAREN();
    Statement_or_nullContext *statement_or_null();
    antlr4::tree::TerminalNode *FINAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Deferred_immediate_cover_statementContext* deferred_immediate_cover_statement();

  class  Clocking_declarationContext : public antlr4::ParserRuleContext {
  public:
    Clocking_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CLOCKING();
    Clocking_eventContext *clocking_event();
    antlr4::tree::TerminalNode *SEMI();
    antlr4::tree::TerminalNode *ENDCLOCKING();
    antlr4::tree::TerminalNode *DEFAULT();
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    std::vector<Clocking_itemContext *> clocking_item();
    Clocking_itemContext* clocking_item(size_t i);
    antlr4::tree::TerminalNode *COLON();
    antlr4::tree::TerminalNode *GLOBAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Clocking_declarationContext* clocking_declaration();

  class  Clocking_eventContext : public antlr4::ParserRuleContext {
  public:
    Clocking_eventContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AT();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *LPAREN();
    Event_expressionContext *event_expression();
    antlr4::tree::TerminalNode *RPAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Clocking_eventContext* clocking_event();

  class  Clocking_itemContext : public antlr4::ParserRuleContext {
  public:
    Clocking_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DEFAULT();
    Default_skewContext *default_skew();
    antlr4::tree::TerminalNode *SEMI();
    Clocking_directionContext *clocking_direction();
    List_of_clocking_decl_assignContext *list_of_clocking_decl_assign();
    Assertion_item_declarationContext *assertion_item_declaration();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Clocking_itemContext* clocking_item();

  class  Default_skewContext : public antlr4::ParserRuleContext {
  public:
    Default_skewContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INPUT();
    std::vector<Clocking_skewContext *> clocking_skew();
    Clocking_skewContext* clocking_skew(size_t i);
    antlr4::tree::TerminalNode *OUTPUT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Default_skewContext* default_skew();

  class  Clocking_directionContext : public antlr4::ParserRuleContext {
  public:
    Clocking_directionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INPUT();
    std::vector<Clocking_skewContext *> clocking_skew();
    Clocking_skewContext* clocking_skew(size_t i);
    antlr4::tree::TerminalNode *OUTPUT();
    antlr4::tree::TerminalNode *INOUT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Clocking_directionContext* clocking_direction();

  class  List_of_clocking_decl_assignContext : public antlr4::ParserRuleContext {
  public:
    List_of_clocking_decl_assignContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Clocking_decl_assignContext *> clocking_decl_assign();
    Clocking_decl_assignContext* clocking_decl_assign(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  List_of_clocking_decl_assignContext* list_of_clocking_decl_assign();

  class  Clocking_decl_assignContext : public antlr4::ParserRuleContext {
  public:
    Clocking_decl_assignContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *EQ();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Clocking_decl_assignContext* clocking_decl_assign();

  class  Clocking_skewContext : public antlr4::ParserRuleContext {
  public:
    Clocking_skewContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Edge_identifierContext *edge_identifier();
    Delay_controlContext *delay_control();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Clocking_skewContext* clocking_skew();

  class  Clocking_driveContext : public antlr4::ParserRuleContext {
  public:
    Clocking_driveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Clockvar_expressionContext *clockvar_expression();
    antlr4::tree::TerminalNode *LTEQ();
    ExpressionContext *expression();
    Cycle_delayContext *cycle_delay();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Clocking_driveContext* clocking_drive();

  class  Cycle_delayContext : public antlr4::ParserRuleContext {
  public:
    Cycle_delayContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HASHHASH();
    Integral_numberContext *integral_number();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *LPAREN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RPAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Cycle_delayContext* cycle_delay();

  class  ClockvarContext : public antlr4::ParserRuleContext {
  public:
    ClockvarContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Hierarchical_identifierContext *hierarchical_identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ClockvarContext* clockvar();

  class  Clockvar_expressionContext : public antlr4::ParserRuleContext {
  public:
    Clockvar_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ClockvarContext *clockvar();
    Select_Context *select_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Clockvar_expressionContext* clockvar_expression();

  class  Randsequence_statementContext : public antlr4::ParserRuleContext {
  public:
    Randsequence_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RANDSEQUENCE();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    antlr4::tree::TerminalNode *ENDSEQUENCE();
    IdentifierContext *identifier();
    std::vector<ProductionContext *> production();
    ProductionContext* production(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Randsequence_statementContext* randsequence_statement();

  class  ProductionContext : public antlr4::ParserRuleContext {
  public:
    ProductionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *COLON();
    std::vector<Rs_ruleContext *> rs_rule();
    Rs_ruleContext* rs_rule(size_t i);
    antlr4::tree::TerminalNode *SEMI();
    Data_type_or_voidContext *data_type_or_void();
    antlr4::tree::TerminalNode *LPAREN();
    Tf_port_listContext *tf_port_list();
    antlr4::tree::TerminalNode *RPAREN();
    std::vector<antlr4::tree::TerminalNode *> PIPE();
    antlr4::tree::TerminalNode* PIPE(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ProductionContext* production();

  class  Rs_ruleContext : public antlr4::ParserRuleContext {
  public:
    Rs_ruleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Rs_production_listContext *rs_production_list();
    antlr4::tree::TerminalNode *COLONEQ();
    Weight_specificationContext *weight_specification();
    Rs_code_blockContext *rs_code_block();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Rs_ruleContext* rs_rule();

  class  Rs_production_listContext : public antlr4::ParserRuleContext {
  public:
    Rs_production_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Rs_prodContext *> rs_prod();
    Rs_prodContext* rs_prod(size_t i);
    antlr4::tree::TerminalNode *RAND();
    antlr4::tree::TerminalNode *JOIN();
    std::vector<Production_itemContext *> production_item();
    Production_itemContext* production_item(size_t i);
    antlr4::tree::TerminalNode *LPAREN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RPAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Rs_production_listContext* rs_production_list();

  class  Weight_specificationContext : public antlr4::ParserRuleContext {
  public:
    Weight_specificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Integral_numberContext *integral_number();
    Ps_identifierContext *ps_identifier();
    antlr4::tree::TerminalNode *LPAREN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RPAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Weight_specificationContext* weight_specification();

  class  Rs_code_blockContext : public antlr4::ParserRuleContext {
  public:
    Rs_code_blockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LBRACE();
    antlr4::tree::TerminalNode *RBRACE();
    std::vector<Data_declarationContext *> data_declaration();
    Data_declarationContext* data_declaration(size_t i);
    std::vector<Statement_or_nullContext *> statement_or_null();
    Statement_or_nullContext* statement_or_null(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Rs_code_blockContext* rs_code_block();

  class  Rs_prodContext : public antlr4::ParserRuleContext {
  public:
    Rs_prodContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Production_itemContext *production_item();
    Rs_code_blockContext *rs_code_block();
    Rs_if_elseContext *rs_if_else();
    Rs_repeatContext *rs_repeat();
    Rs_caseContext *rs_case();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Rs_prodContext* rs_prod();

  class  Production_itemContext : public antlr4::ParserRuleContext {
  public:
    Production_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *LPAREN();
    List_of_argumentsContext *list_of_arguments();
    antlr4::tree::TerminalNode *RPAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Production_itemContext* production_item();

  class  Rs_if_elseContext : public antlr4::ParserRuleContext {
  public:
    Rs_if_elseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *LPAREN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RPAREN();
    std::vector<Production_itemContext *> production_item();
    Production_itemContext* production_item(size_t i);
    antlr4::tree::TerminalNode *ELSE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Rs_if_elseContext* rs_if_else();

  class  Rs_repeatContext : public antlr4::ParserRuleContext {
  public:
    Rs_repeatContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REPEAT();
    antlr4::tree::TerminalNode *LPAREN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RPAREN();
    Production_itemContext *production_item();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Rs_repeatContext* rs_repeat();

  class  Rs_caseContext : public antlr4::ParserRuleContext {
  public:
    Rs_caseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CASE();
    antlr4::tree::TerminalNode *LPAREN();
    Case_expressionContext *case_expression();
    antlr4::tree::TerminalNode *RPAREN();
    antlr4::tree::TerminalNode *ENDCASE();
    std::vector<Rs_case_itemContext *> rs_case_item();
    Rs_case_itemContext* rs_case_item(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Rs_caseContext* rs_case();

  class  Rs_case_itemContext : public antlr4::ParserRuleContext {
  public:
    Rs_case_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Case_item_expressionContext *> case_item_expression();
    Case_item_expressionContext* case_item_expression(size_t i);
    antlr4::tree::TerminalNode *COLON();
    Production_itemContext *production_item();
    antlr4::tree::TerminalNode *SEMI();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *DEFAULT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Rs_case_itemContext* rs_case_item();

  class  Specify_blockContext : public antlr4::ParserRuleContext {
  public:
    Specify_blockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SPECIFY();
    antlr4::tree::TerminalNode *ENDSPECIFY();
    std::vector<Specify_itemContext *> specify_item();
    Specify_itemContext* specify_item(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Specify_blockContext* specify_block();

  class  Specify_itemContext : public antlr4::ParserRuleContext {
  public:
    Specify_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Specparam_declarationContext *specparam_declaration();
    Pulsestyle_declarationContext *pulsestyle_declaration();
    Showcancelled_declarationContext *showcancelled_declaration();
    Path_declarationContext *path_declaration();
    System_timing_checkContext *system_timing_check();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Specify_itemContext* specify_item();

  class  Pulsestyle_declarationContext : public antlr4::ParserRuleContext {
  public:
    Pulsestyle_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PULSESTYLE_ONEVENT();
    List_of_path_outputsContext *list_of_path_outputs();
    antlr4::tree::TerminalNode *SEMI();
    antlr4::tree::TerminalNode *PULSESTYLE_ONDETECT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Pulsestyle_declarationContext* pulsestyle_declaration();

  class  Showcancelled_declarationContext : public antlr4::ParserRuleContext {
  public:
    Showcancelled_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHOWCANCELLED();
    List_of_path_outputsContext *list_of_path_outputs();
    antlr4::tree::TerminalNode *SEMI();
    antlr4::tree::TerminalNode *NOSHOWCANCELLED();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Showcancelled_declarationContext* showcancelled_declaration();

  class  Path_declarationContext : public antlr4::ParserRuleContext {
  public:
    Path_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Simple_path_declarationContext *simple_path_declaration();
    antlr4::tree::TerminalNode *SEMI();
    Edge_sensitive_path_declarationContext *edge_sensitive_path_declaration();
    State_dependent_path_declarationContext *state_dependent_path_declaration();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Path_declarationContext* path_declaration();

  class  Simple_path_declarationContext : public antlr4::ParserRuleContext {
  public:
    Simple_path_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Parallel_path_descriptionContext *parallel_path_description();
    antlr4::tree::TerminalNode *EQ();
    Path_delay_valueContext *path_delay_value();
    Full_path_descriptionContext *full_path_description();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Simple_path_declarationContext* simple_path_declaration();

  class  Parallel_path_descriptionContext : public antlr4::ParserRuleContext {
  public:
    Parallel_path_descriptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    Specify_input_terminal_descriptorContext *specify_input_terminal_descriptor();
    antlr4::tree::TerminalNode *EQGT();
    Specify_output_terminal_descriptorContext *specify_output_terminal_descriptor();
    antlr4::tree::TerminalNode *RPAREN();
    Polarity_operatorContext *polarity_operator();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Parallel_path_descriptionContext* parallel_path_description();

  class  Full_path_descriptionContext : public antlr4::ParserRuleContext {
  public:
    Full_path_descriptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    List_of_path_inputsContext *list_of_path_inputs();
    antlr4::tree::TerminalNode *STARGT();
    List_of_path_outputsContext *list_of_path_outputs();
    antlr4::tree::TerminalNode *RPAREN();
    Polarity_operatorContext *polarity_operator();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Full_path_descriptionContext* full_path_description();

  class  List_of_path_inputsContext : public antlr4::ParserRuleContext {
  public:
    List_of_path_inputsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Specify_input_terminal_descriptorContext *> specify_input_terminal_descriptor();
    Specify_input_terminal_descriptorContext* specify_input_terminal_descriptor(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  List_of_path_inputsContext* list_of_path_inputs();

  class  List_of_path_outputsContext : public antlr4::ParserRuleContext {
  public:
    List_of_path_outputsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Specify_output_terminal_descriptorContext *> specify_output_terminal_descriptor();
    Specify_output_terminal_descriptorContext* specify_output_terminal_descriptor(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  List_of_path_outputsContext* list_of_path_outputs();

  class  Specify_input_terminal_descriptorContext : public antlr4::ParserRuleContext {
  public:
    Specify_input_terminal_descriptorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Input_identifierContext *input_identifier();
    antlr4::tree::TerminalNode *LBRACK();
    Constant_range_expressionContext *constant_range_expression();
    antlr4::tree::TerminalNode *RBRACK();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Specify_input_terminal_descriptorContext* specify_input_terminal_descriptor();

  class  Specify_output_terminal_descriptorContext : public antlr4::ParserRuleContext {
  public:
    Specify_output_terminal_descriptorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Output_identifierContext *output_identifier();
    antlr4::tree::TerminalNode *LBRACK();
    Constant_range_expressionContext *constant_range_expression();
    antlr4::tree::TerminalNode *RBRACK();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Specify_output_terminal_descriptorContext* specify_output_terminal_descriptor();

  class  Input_identifierContext : public antlr4::ParserRuleContext {
  public:
    Input_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    antlr4::tree::TerminalNode *DOT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Input_identifierContext* input_identifier();

  class  Output_identifierContext : public antlr4::ParserRuleContext {
  public:
    Output_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    antlr4::tree::TerminalNode *DOT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Output_identifierContext* output_identifier();

  class  Path_delay_valueContext : public antlr4::ParserRuleContext {
  public:
    Path_delay_valueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    List_of_path_delay_expressionsContext *list_of_path_delay_expressions();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Path_delay_valueContext* path_delay_value();

  class  List_of_path_delay_expressionsContext : public antlr4::ParserRuleContext {
  public:
    List_of_path_delay_expressionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Path_delay_expressionContext *> path_delay_expression();
    Path_delay_expressionContext* path_delay_expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  List_of_path_delay_expressionsContext* list_of_path_delay_expressions();

  class  Path_delay_expressionContext : public antlr4::ParserRuleContext {
  public:
    Path_delay_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Constant_mintypmax_expressionContext *constant_mintypmax_expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Path_delay_expressionContext* path_delay_expression();

  class  Edge_sensitive_path_declarationContext : public antlr4::ParserRuleContext {
  public:
    Edge_sensitive_path_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Parallel_edge_sensitive_path_descriptionContext *parallel_edge_sensitive_path_description();
    antlr4::tree::TerminalNode *EQ();
    Path_delay_valueContext *path_delay_value();
    Full_edge_sensitive_path_descriptionContext *full_edge_sensitive_path_description();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Edge_sensitive_path_declarationContext* edge_sensitive_path_declaration();

  class  Parallel_edge_sensitive_path_descriptionContext : public antlr4::ParserRuleContext {
  public:
    Parallel_edge_sensitive_path_descriptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> LPAREN();
    antlr4::tree::TerminalNode* LPAREN(size_t i);
    Specify_input_terminal_descriptorContext *specify_input_terminal_descriptor();
    antlr4::tree::TerminalNode *EQGT();
    Specify_output_terminal_descriptorContext *specify_output_terminal_descriptor();
    antlr4::tree::TerminalNode *COLON();
    Data_source_expressionContext *data_source_expression();
    std::vector<antlr4::tree::TerminalNode *> RPAREN();
    antlr4::tree::TerminalNode* RPAREN(size_t i);
    Edge_identifierContext *edge_identifier();
    std::vector<Polarity_operatorContext *> polarity_operator();
    Polarity_operatorContext* polarity_operator(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Parallel_edge_sensitive_path_descriptionContext* parallel_edge_sensitive_path_description();

  class  Full_edge_sensitive_path_descriptionContext : public antlr4::ParserRuleContext {
  public:
    Full_edge_sensitive_path_descriptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> LPAREN();
    antlr4::tree::TerminalNode* LPAREN(size_t i);
    List_of_path_inputsContext *list_of_path_inputs();
    antlr4::tree::TerminalNode *STARGT();
    List_of_path_outputsContext *list_of_path_outputs();
    antlr4::tree::TerminalNode *COLON();
    Data_source_expressionContext *data_source_expression();
    std::vector<antlr4::tree::TerminalNode *> RPAREN();
    antlr4::tree::TerminalNode* RPAREN(size_t i);
    Edge_identifierContext *edge_identifier();
    std::vector<Polarity_operatorContext *> polarity_operator();
    Polarity_operatorContext* polarity_operator(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Full_edge_sensitive_path_descriptionContext* full_edge_sensitive_path_description();

  class  Data_source_expressionContext : public antlr4::ParserRuleContext {
  public:
    Data_source_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Data_source_expressionContext* data_source_expression();

  class  Edge_identifierContext : public antlr4::ParserRuleContext {
  public:
    Edge_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *POSEDGE();
    antlr4::tree::TerminalNode *NEGEDGE();
    antlr4::tree::TerminalNode *EDGE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Edge_identifierContext* edge_identifier();

  class  State_dependent_path_declarationContext : public antlr4::ParserRuleContext {
  public:
    State_dependent_path_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *LPAREN();
    Module_path_expressionContext *module_path_expression();
    antlr4::tree::TerminalNode *RPAREN();
    Simple_path_declarationContext *simple_path_declaration();
    Edge_sensitive_path_declarationContext *edge_sensitive_path_declaration();
    antlr4::tree::TerminalNode *IFNONE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  State_dependent_path_declarationContext* state_dependent_path_declaration();

  class  Polarity_operatorContext : public antlr4::ParserRuleContext {
  public:
    Polarity_operatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PLUS();
    antlr4::tree::TerminalNode *MINUS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Polarity_operatorContext* polarity_operator();

  class  System_timing_checkContext : public antlr4::ParserRuleContext {
  public:
    System_timing_checkContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Setup_timing_checkContext *setup_timing_check();
    Hold_timing_checkContext *hold_timing_check();
    Setuphold_timing_checkContext *setuphold_timing_check();
    Recovery_timing_checkContext *recovery_timing_check();
    Removal_timing_checkContext *removal_timing_check();
    Recrem_timing_checkContext *recrem_timing_check();
    Skew_timing_checkContext *skew_timing_check();
    Timeskew_timing_checkContext *timeskew_timing_check();
    Fullskew_timing_checkContext *fullskew_timing_check();
    Period_timing_checkContext *period_timing_check();
    Width_timing_checkContext *width_timing_check();
    Nochange_timing_checkContext *nochange_timing_check();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  System_timing_checkContext* system_timing_check();

  class  Setup_timing_checkContext : public antlr4::ParserRuleContext {
  public:
    Setup_timing_checkContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SETUP_SYS_TASK();
    antlr4::tree::TerminalNode *LPAREN();
    Data_eventContext *data_event();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    Reference_eventContext *reference_event();
    Timing_check_limitContext *timing_check_limit();
    antlr4::tree::TerminalNode *RPAREN();
    antlr4::tree::TerminalNode *SEMI();
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Setup_timing_checkContext* setup_timing_check();

  class  Hold_timing_checkContext : public antlr4::ParserRuleContext {
  public:
    Hold_timing_checkContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HOLD_SYS_TASK();
    antlr4::tree::TerminalNode *LPAREN();
    Reference_eventContext *reference_event();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    Data_eventContext *data_event();
    Timing_check_limitContext *timing_check_limit();
    antlr4::tree::TerminalNode *RPAREN();
    antlr4::tree::TerminalNode *SEMI();
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Hold_timing_checkContext* hold_timing_check();

  class  Setuphold_timing_checkContext : public antlr4::ParserRuleContext {
  public:
    Setuphold_timing_checkContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SETUP_HOLD_SYS_TASK();
    antlr4::tree::TerminalNode *LPAREN();
    Reference_eventContext *reference_event();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    Data_eventContext *data_event();
    std::vector<Timing_check_limitContext *> timing_check_limit();
    Timing_check_limitContext* timing_check_limit(size_t i);
    antlr4::tree::TerminalNode *RPAREN();
    antlr4::tree::TerminalNode *SEMI();
    IdentifierContext *identifier();
    Timestamp_conditionContext *timestamp_condition();
    Timecheck_conditionContext *timecheck_condition();
    Delayed_referenceContext *delayed_reference();
    Delayed_dataContext *delayed_data();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Setuphold_timing_checkContext* setuphold_timing_check();

  class  Recovery_timing_checkContext : public antlr4::ParserRuleContext {
  public:
    Recovery_timing_checkContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RECOVERY_SYS_TASK();
    antlr4::tree::TerminalNode *LPAREN();
    Reference_eventContext *reference_event();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    Data_eventContext *data_event();
    Timing_check_limitContext *timing_check_limit();
    antlr4::tree::TerminalNode *RPAREN();
    antlr4::tree::TerminalNode *SEMI();
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Recovery_timing_checkContext* recovery_timing_check();

  class  Removal_timing_checkContext : public antlr4::ParserRuleContext {
  public:
    Removal_timing_checkContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REMOVAL_SYS_TASK();
    antlr4::tree::TerminalNode *LPAREN();
    Reference_eventContext *reference_event();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    Data_eventContext *data_event();
    Timing_check_limitContext *timing_check_limit();
    antlr4::tree::TerminalNode *RPAREN();
    antlr4::tree::TerminalNode *SEMI();
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Removal_timing_checkContext* removal_timing_check();

  class  Recrem_timing_checkContext : public antlr4::ParserRuleContext {
  public:
    Recrem_timing_checkContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REC_REM_SYS_TASK();
    antlr4::tree::TerminalNode *LPAREN();
    Reference_eventContext *reference_event();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    Data_eventContext *data_event();
    std::vector<Timing_check_limitContext *> timing_check_limit();
    Timing_check_limitContext* timing_check_limit(size_t i);
    antlr4::tree::TerminalNode *RPAREN();
    antlr4::tree::TerminalNode *SEMI();
    IdentifierContext *identifier();
    Timestamp_conditionContext *timestamp_condition();
    Timecheck_conditionContext *timecheck_condition();
    Delayed_referenceContext *delayed_reference();
    Delayed_dataContext *delayed_data();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Recrem_timing_checkContext* recrem_timing_check();

  class  Skew_timing_checkContext : public antlr4::ParserRuleContext {
  public:
    Skew_timing_checkContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SKEW_SYS_TASK();
    antlr4::tree::TerminalNode *LPAREN();
    Reference_eventContext *reference_event();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    Data_eventContext *data_event();
    Timing_check_limitContext *timing_check_limit();
    antlr4::tree::TerminalNode *RPAREN();
    antlr4::tree::TerminalNode *SEMI();
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Skew_timing_checkContext* skew_timing_check();

  class  Timeskew_timing_checkContext : public antlr4::ParserRuleContext {
  public:
    Timeskew_timing_checkContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TIME_SKEW_SYS_TASK();
    antlr4::tree::TerminalNode *LPAREN();
    Reference_eventContext *reference_event();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    Data_eventContext *data_event();
    Timing_check_limitContext *timing_check_limit();
    antlr4::tree::TerminalNode *RPAREN();
    antlr4::tree::TerminalNode *SEMI();
    IdentifierContext *identifier();
    Event_based_flagContext *event_based_flag();
    Remain_active_flagContext *remain_active_flag();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Timeskew_timing_checkContext* timeskew_timing_check();

  class  Fullskew_timing_checkContext : public antlr4::ParserRuleContext {
  public:
    Fullskew_timing_checkContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FULL_SKEW_SYS_TASK();
    antlr4::tree::TerminalNode *LPAREN();
    Reference_eventContext *reference_event();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    Data_eventContext *data_event();
    std::vector<Timing_check_limitContext *> timing_check_limit();
    Timing_check_limitContext* timing_check_limit(size_t i);
    antlr4::tree::TerminalNode *RPAREN();
    antlr4::tree::TerminalNode *SEMI();
    IdentifierContext *identifier();
    Event_based_flagContext *event_based_flag();
    Remain_active_flagContext *remain_active_flag();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fullskew_timing_checkContext* fullskew_timing_check();

  class  Period_timing_checkContext : public antlr4::ParserRuleContext {
  public:
    Period_timing_checkContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PERIOD_SYS_TASK();
    antlr4::tree::TerminalNode *LPAREN();
    Controlled_reference_eventContext *controlled_reference_event();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    Timing_check_limitContext *timing_check_limit();
    antlr4::tree::TerminalNode *RPAREN();
    antlr4::tree::TerminalNode *SEMI();
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Period_timing_checkContext* period_timing_check();

  class  Width_timing_checkContext : public antlr4::ParserRuleContext {
  public:
    Width_timing_checkContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WIDTH_SYS_TASK();
    antlr4::tree::TerminalNode *LPAREN();
    Controlled_reference_eventContext *controlled_reference_event();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    Timing_check_limitContext *timing_check_limit();
    ThresholdContext *threshold();
    antlr4::tree::TerminalNode *RPAREN();
    antlr4::tree::TerminalNode *SEMI();
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Width_timing_checkContext* width_timing_check();

  class  Nochange_timing_checkContext : public antlr4::ParserRuleContext {
  public:
    Nochange_timing_checkContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NO_CHANGE_SYS_TASK();
    antlr4::tree::TerminalNode *LPAREN();
    Reference_eventContext *reference_event();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    Data_eventContext *data_event();
    Start_edge_offsetContext *start_edge_offset();
    End_edge_offsetContext *end_edge_offset();
    antlr4::tree::TerminalNode *RPAREN();
    antlr4::tree::TerminalNode *SEMI();
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Nochange_timing_checkContext* nochange_timing_check();

  class  Timecheck_conditionContext : public antlr4::ParserRuleContext {
  public:
    Timecheck_conditionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Mintypmax_expressionContext *mintypmax_expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Timecheck_conditionContext* timecheck_condition();

  class  Controlled_reference_eventContext : public antlr4::ParserRuleContext {
  public:
    Controlled_reference_eventContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Controlled_timing_check_eventContext *controlled_timing_check_event();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Controlled_reference_eventContext* controlled_reference_event();

  class  Data_eventContext : public antlr4::ParserRuleContext {
  public:
    Data_eventContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Timing_check_eventContext *timing_check_event();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Data_eventContext* data_event();

  class  Delayed_dataContext : public antlr4::ParserRuleContext {
  public:
    Delayed_dataContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *LBRACK();
    Constant_mintypmax_expressionContext *constant_mintypmax_expression();
    antlr4::tree::TerminalNode *RBRACK();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Delayed_dataContext* delayed_data();

  class  Delayed_referenceContext : public antlr4::ParserRuleContext {
  public:
    Delayed_referenceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *LBRACK();
    Constant_mintypmax_expressionContext *constant_mintypmax_expression();
    antlr4::tree::TerminalNode *RBRACK();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Delayed_referenceContext* delayed_reference();

  class  End_edge_offsetContext : public antlr4::ParserRuleContext {
  public:
    End_edge_offsetContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Mintypmax_expressionContext *mintypmax_expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  End_edge_offsetContext* end_edge_offset();

  class  Event_based_flagContext : public antlr4::ParserRuleContext {
  public:
    Event_based_flagContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Constant_expressionContext *constant_expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Event_based_flagContext* event_based_flag();

  class  Reference_eventContext : public antlr4::ParserRuleContext {
  public:
    Reference_eventContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Timing_check_eventContext *timing_check_event();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Reference_eventContext* reference_event();

  class  Remain_active_flagContext : public antlr4::ParserRuleContext {
  public:
    Remain_active_flagContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Constant_mintypmax_expressionContext *constant_mintypmax_expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Remain_active_flagContext* remain_active_flag();

  class  Timestamp_conditionContext : public antlr4::ParserRuleContext {
  public:
    Timestamp_conditionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Mintypmax_expressionContext *mintypmax_expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Timestamp_conditionContext* timestamp_condition();

  class  Start_edge_offsetContext : public antlr4::ParserRuleContext {
  public:
    Start_edge_offsetContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Mintypmax_expressionContext *mintypmax_expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Start_edge_offsetContext* start_edge_offset();

  class  ThresholdContext : public antlr4::ParserRuleContext {
  public:
    ThresholdContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Constant_expressionContext *constant_expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ThresholdContext* threshold();

  class  Timing_check_limitContext : public antlr4::ParserRuleContext {
  public:
    Timing_check_limitContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Timing_check_limitContext* timing_check_limit();

  class  Timing_check_eventContext : public antlr4::ParserRuleContext {
  public:
    Timing_check_eventContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Specify_terminal_descriptorContext *specify_terminal_descriptor();
    Timing_check_event_controlContext *timing_check_event_control();
    antlr4::tree::TerminalNode *AMPAMPAMP();
    Timing_check_conditionContext *timing_check_condition();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Timing_check_eventContext* timing_check_event();

  class  Controlled_timing_check_eventContext : public antlr4::ParserRuleContext {
  public:
    Controlled_timing_check_eventContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Timing_check_event_controlContext *timing_check_event_control();
    Specify_terminal_descriptorContext *specify_terminal_descriptor();
    antlr4::tree::TerminalNode *AMPAMPAMP();
    Timing_check_conditionContext *timing_check_condition();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Controlled_timing_check_eventContext* controlled_timing_check_event();

  class  Timing_check_event_controlContext : public antlr4::ParserRuleContext {
  public:
    Timing_check_event_controlContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *POSEDGE();
    antlr4::tree::TerminalNode *NEGEDGE();
    antlr4::tree::TerminalNode *EDGE();
    Edge_control_specifierContext *edge_control_specifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Timing_check_event_controlContext* timing_check_event_control();

  class  Specify_terminal_descriptorContext : public antlr4::ParserRuleContext {
  public:
    Specify_terminal_descriptorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Specify_input_terminal_descriptorContext *specify_input_terminal_descriptor();
    Specify_output_terminal_descriptorContext *specify_output_terminal_descriptor();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Specify_terminal_descriptorContext* specify_terminal_descriptor();

  class  Edge_control_specifierContext : public antlr4::ParserRuleContext {
  public:
    Edge_control_specifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EDGE();
    antlr4::tree::TerminalNode *LBRACK();
    std::vector<Edge_descriptorContext *> edge_descriptor();
    Edge_descriptorContext* edge_descriptor(size_t i);
    antlr4::tree::TerminalNode *RBRACK();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Edge_control_specifierContext* edge_control_specifier();

  class  Edge_descriptorContext : public antlr4::ParserRuleContext {
  public:
    Edge_descriptorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DECIMAL_NUMBER();
    antlr4::tree::TerminalNode *SIMPLE_IDENTIFIER();
    antlr4::tree::TerminalNode *ZERO_OR_ONE_Z_OR_X();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Edge_descriptorContext* edge_descriptor();

  class  Timing_check_conditionContext : public antlr4::ParserRuleContext {
  public:
    Timing_check_conditionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Scalar_timing_check_conditionContext *scalar_timing_check_condition();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Timing_check_conditionContext* timing_check_condition();

  class  Scalar_timing_check_conditionContext : public antlr4::ParserRuleContext {
  public:
    Scalar_timing_check_conditionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *TILDE();
    antlr4::tree::TerminalNode *EQEQ();
    Scalar_constantContext *scalar_constant();
    antlr4::tree::TerminalNode *EQEQEQ();
    antlr4::tree::TerminalNode *NEQ();
    antlr4::tree::TerminalNode *NEQEQ();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Scalar_timing_check_conditionContext* scalar_timing_check_condition();

  class  Scalar_constantContext : public antlr4::ParserRuleContext {
  public:
    Scalar_constantContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BINARY_NUMBER();
    antlr4::tree::TerminalNode *DECIMAL_NUMBER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Scalar_constantContext* scalar_constant();

  class  ConcatenationContext : public antlr4::ParserRuleContext {
  public:
    ConcatenationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LBRACE();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *RBRACE();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ConcatenationContext* concatenation();

  class  Constant_concatenationContext : public antlr4::ParserRuleContext {
  public:
    Constant_concatenationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LBRACE();
    std::vector<Constant_expressionContext *> constant_expression();
    Constant_expressionContext* constant_expression(size_t i);
    antlr4::tree::TerminalNode *RBRACE();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Constant_concatenationContext* constant_concatenation();

  class  Constant_multiple_concatenationContext : public antlr4::ParserRuleContext {
  public:
    Constant_multiple_concatenationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LBRACE();
    Constant_expressionContext *constant_expression();
    Constant_concatenationContext *constant_concatenation();
    antlr4::tree::TerminalNode *RBRACE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Constant_multiple_concatenationContext* constant_multiple_concatenation();

  class  Module_path_concatenationContext : public antlr4::ParserRuleContext {
  public:
    Module_path_concatenationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LBRACE();
    std::vector<Module_path_expressionContext *> module_path_expression();
    Module_path_expressionContext* module_path_expression(size_t i);
    antlr4::tree::TerminalNode *RBRACE();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Module_path_concatenationContext* module_path_concatenation();

  class  Module_path_multiple_concatenationContext : public antlr4::ParserRuleContext {
  public:
    Module_path_multiple_concatenationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LBRACE();
    Constant_expressionContext *constant_expression();
    Module_path_concatenationContext *module_path_concatenation();
    antlr4::tree::TerminalNode *RBRACE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Module_path_multiple_concatenationContext* module_path_multiple_concatenation();

  class  Multiple_concatenationContext : public antlr4::ParserRuleContext {
  public:
    Multiple_concatenationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LBRACE();
    ExpressionContext *expression();
    ConcatenationContext *concatenation();
    antlr4::tree::TerminalNode *RBRACE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Multiple_concatenationContext* multiple_concatenation();

  class  Streaming_concatenationContext : public antlr4::ParserRuleContext {
  public:
    Streaming_concatenationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LBRACE();
    Stream_operatorContext *stream_operator();
    Stream_concatenationContext *stream_concatenation();
    antlr4::tree::TerminalNode *RBRACE();
    Slice_sizeContext *slice_size();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Streaming_concatenationContext* streaming_concatenation();

  class  Stream_operatorContext : public antlr4::ParserRuleContext {
  public:
    Stream_operatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GTGT();
    antlr4::tree::TerminalNode *LTLT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Stream_operatorContext* stream_operator();

  class  Slice_sizeContext : public antlr4::ParserRuleContext {
  public:
    Slice_sizeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Simple_typeContext *simple_type();
    Constant_expressionContext *constant_expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Slice_sizeContext* slice_size();

  class  Stream_concatenationContext : public antlr4::ParserRuleContext {
  public:
    Stream_concatenationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LBRACE();
    std::vector<Stream_expressionContext *> stream_expression();
    Stream_expressionContext* stream_expression(size_t i);
    antlr4::tree::TerminalNode *RBRACE();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Stream_concatenationContext* stream_concatenation();

  class  Stream_expressionContext : public antlr4::ParserRuleContext {
  public:
    Stream_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *LBRACK();
    Array_range_expressionContext *array_range_expression();
    antlr4::tree::TerminalNode *RBRACK();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Stream_expressionContext* stream_expression();

  class  Array_range_expressionContext : public antlr4::ParserRuleContext {
  public:
    Array_range_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *COLON();
    antlr4::tree::TerminalNode *PLUSCOLON();
    antlr4::tree::TerminalNode *MINUSCOLON();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Array_range_expressionContext* array_range_expression();

  class  Empty_unpacked_array_concatenationContext : public antlr4::ParserRuleContext {
  public:
    Empty_unpacked_array_concatenationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LBRACE();
    antlr4::tree::TerminalNode *RBRACE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Empty_unpacked_array_concatenationContext* empty_unpacked_array_concatenation();

  class  Function_subroutine_callContext : public antlr4::ParserRuleContext {
  public:
    Function_subroutine_callContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Subroutine_callContext *subroutine_call();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Function_subroutine_callContext* function_subroutine_call();

  class  Tf_callContext : public antlr4::ParserRuleContext {
  public:
    Tf_callContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Ps_or_hierarchical_identifierContext *ps_or_hierarchical_identifier();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);
    antlr4::tree::TerminalNode *LPAREN();
    List_of_argumentsContext *list_of_arguments();
    antlr4::tree::TerminalNode *RPAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Tf_callContext* tf_call();

  class  System_tf_callContext : public antlr4::ParserRuleContext {
  public:
    System_tf_callContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    System_tf_identifierContext *system_tf_identifier();
    antlr4::tree::TerminalNode *LPAREN();
    List_of_argumentsContext *list_of_arguments();
    antlr4::tree::TerminalNode *RPAREN();
    Data_typeContext *data_type();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    Clocking_eventContext *clocking_event();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  System_tf_callContext* system_tf_call();

  class  Subroutine_callContext : public antlr4::ParserRuleContext {
  public:
    Subroutine_callContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Tf_callContext *tf_call();
    System_tf_callContext *system_tf_call();
    Method_callContext *method_call();
    Randomize_callContext *randomize_call();
    antlr4::tree::TerminalNode *STD();
    antlr4::tree::TerminalNode *COLONCOLON();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Subroutine_callContext* subroutine_call();

  class  List_of_argumentsContext : public antlr4::ParserRuleContext {
  public:
    List_of_argumentsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DOT();
    antlr4::tree::TerminalNode* DOT(size_t i);
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LPAREN();
    antlr4::tree::TerminalNode* LPAREN(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RPAREN();
    antlr4::tree::TerminalNode* RPAREN(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  List_of_argumentsContext* list_of_arguments();

  class  Method_callContext : public antlr4::ParserRuleContext {
  public:
    Method_callContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Method_call_rootContext *method_call_root();
    antlr4::tree::TerminalNode *DOT();
    Method_call_bodyContext *method_call_body();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Method_callContext* method_call();

  class  Method_call_bodyContext : public antlr4::ParserRuleContext {
  public:
    Method_call_bodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);
    antlr4::tree::TerminalNode *LPAREN();
    List_of_argumentsContext *list_of_arguments();
    antlr4::tree::TerminalNode *RPAREN();
    Built_in_method_callContext *built_in_method_call();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Method_call_bodyContext* method_call_body();

  class  Built_in_method_callContext : public antlr4::ParserRuleContext {
  public:
    Built_in_method_callContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Array_manipulation_callContext *array_manipulation_call();
    Randomize_callContext *randomize_call();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Built_in_method_callContext* built_in_method_call();

  class  Array_manipulation_callContext : public antlr4::ParserRuleContext {
  public:
    Array_manipulation_callContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Array_method_nameContext *array_method_name();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LPAREN();
    antlr4::tree::TerminalNode* LPAREN(size_t i);
    List_of_argumentsContext *list_of_arguments();
    std::vector<antlr4::tree::TerminalNode *> RPAREN();
    antlr4::tree::TerminalNode* RPAREN(size_t i);
    antlr4::tree::TerminalNode *WITH();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Array_manipulation_callContext* array_manipulation_call();

  class  Randomize_callContext : public antlr4::ParserRuleContext {
  public:
    Randomize_callContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RANDOMIZE();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LPAREN();
    antlr4::tree::TerminalNode* LPAREN(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RPAREN();
    antlr4::tree::TerminalNode* RPAREN(size_t i);
    antlr4::tree::TerminalNode *WITH();
    Constraint_blockContext *constraint_block();
    Variable_identifier_listContext *variable_identifier_list();
    antlr4::tree::TerminalNode *NULL_();
    Identifier_listContext *identifier_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Randomize_callContext* randomize_call();

  class  Method_call_rootContext : public antlr4::ParserRuleContext {
  public:
    Method_call_rootContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PrimaryContext *primary();
    Implicit_class_handleContext *implicit_class_handle();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Method_call_rootContext* method_call_root();

  class  Array_method_nameContext : public antlr4::ParserRuleContext {
  public:
    Array_method_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *UNIQUE();
    antlr4::tree::TerminalNode *AND();
    antlr4::tree::TerminalNode *OR();
    antlr4::tree::TerminalNode *XOR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Array_method_nameContext* array_method_name();

  class  Inc_or_dec_expressionContext : public antlr4::ParserRuleContext {
  public:
    Inc_or_dec_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Inc_or_dec_operatorContext *inc_or_dec_operator();
    Variable_lvalueContext *variable_lvalue();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Inc_or_dec_expressionContext* inc_or_dec_expression();

  class  Constant_expressionContext : public antlr4::ParserRuleContext {
  public:
    Constant_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Constant_primaryContext *constant_primary();
    Unary_operatorContext *unary_operator();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);
    std::vector<Constant_expressionContext *> constant_expression();
    Constant_expressionContext* constant_expression(size_t i);
    Binary_operatorContext *binary_operator();
    antlr4::tree::TerminalNode *QUESTION();
    antlr4::tree::TerminalNode *COLON();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Constant_expressionContext* constant_expression();
  Constant_expressionContext* constant_expression(int precedence);
  class  Constant_mintypmax_expressionContext : public antlr4::ParserRuleContext {
  public:
    Constant_mintypmax_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Constant_expressionContext *> constant_expression();
    Constant_expressionContext* constant_expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COLON();
    antlr4::tree::TerminalNode* COLON(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Constant_mintypmax_expressionContext* constant_mintypmax_expression();

  class  Constant_param_expressionContext : public antlr4::ParserRuleContext {
  public:
    Constant_param_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Constant_mintypmax_expressionContext *constant_mintypmax_expression();
    Data_typeContext *data_type();
    antlr4::tree::TerminalNode *DOLLAR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Constant_param_expressionContext* constant_param_expression();

  class  Param_expressionContext : public antlr4::ParserRuleContext {
  public:
    Param_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Mintypmax_expressionContext *mintypmax_expression();
    Data_typeContext *data_type();
    antlr4::tree::TerminalNode *DOLLAR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Param_expressionContext* param_expression();

  class  Constant_range_expressionContext : public antlr4::ParserRuleContext {
  public:
    Constant_range_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Constant_expressionContext *constant_expression();
    Constant_part_select_rangeContext *constant_part_select_range();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Constant_range_expressionContext* constant_range_expression();

  class  Constant_part_select_rangeContext : public antlr4::ParserRuleContext {
  public:
    Constant_part_select_rangeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Constant_rangeContext *constant_range();
    Constant_indexed_rangeContext *constant_indexed_range();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Constant_part_select_rangeContext* constant_part_select_range();

  class  Constant_rangeContext : public antlr4::ParserRuleContext {
  public:
    Constant_rangeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Constant_expressionContext *> constant_expression();
    Constant_expressionContext* constant_expression(size_t i);
    antlr4::tree::TerminalNode *COLON();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Constant_rangeContext* constant_range();

  class  Constant_indexed_rangeContext : public antlr4::ParserRuleContext {
  public:
    Constant_indexed_rangeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Constant_expressionContext *> constant_expression();
    Constant_expressionContext* constant_expression(size_t i);
    antlr4::tree::TerminalNode *PLUSCOLON();
    antlr4::tree::TerminalNode *MINUSCOLON();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Constant_indexed_rangeContext* constant_indexed_range();

  class  ExpressionContext : public antlr4::ParserRuleContext {
  public:
    ExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PrimaryContext *primary();
    Unary_operatorContext *unary_operator();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);
    Inc_or_dec_expressionContext *inc_or_dec_expression();
    antlr4::tree::TerminalNode *LPAREN();
    Variable_lvalueContext *variable_lvalue();
    Assignment_operatorContext *assignment_operator();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *RPAREN();
    antlr4::tree::TerminalNode *TAGGED();
    IdentifierContext *identifier();
    Binary_operatorContext *binary_operator();
    antlr4::tree::TerminalNode *QUESTION();
    antlr4::tree::TerminalNode *COLON();
    std::vector<antlr4::tree::TerminalNode *> MATCHES();
    antlr4::tree::TerminalNode* MATCHES(size_t i);
    std::vector<PatternContext *> pattern();
    PatternContext* pattern(size_t i);
    std::vector<antlr4::tree::TerminalNode *> AMPAMPAMP();
    antlr4::tree::TerminalNode* AMPAMPAMP(size_t i);
    antlr4::tree::TerminalNode *INSIDE();
    antlr4::tree::TerminalNode *LBRACE();
    Open_range_listContext *open_range_list();
    antlr4::tree::TerminalNode *RBRACE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ExpressionContext* expression();
  ExpressionContext* expression(int precedence);
  class  Value_rangeContext : public antlr4::ParserRuleContext {
  public:
    Value_rangeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *LBRACK();
    antlr4::tree::TerminalNode *COLON();
    antlr4::tree::TerminalNode *RBRACK();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Value_rangeContext* value_range();

  class  Mintypmax_expressionContext : public antlr4::ParserRuleContext {
  public:
    Mintypmax_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COLON();
    antlr4::tree::TerminalNode* COLON(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Mintypmax_expressionContext* mintypmax_expression();

  class  Module_path_expressionContext : public antlr4::ParserRuleContext {
  public:
    Module_path_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Module_path_primaryContext *module_path_primary();
    Unary_module_path_operatorContext *unary_module_path_operator();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);
    std::vector<Module_path_expressionContext *> module_path_expression();
    Module_path_expressionContext* module_path_expression(size_t i);
    Binary_module_path_operatorContext *binary_module_path_operator();
    antlr4::tree::TerminalNode *QUESTION();
    antlr4::tree::TerminalNode *COLON();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Module_path_expressionContext* module_path_expression();
  Module_path_expressionContext* module_path_expression(int precedence);
  class  Module_path_mintypmax_expressionContext : public antlr4::ParserRuleContext {
  public:
    Module_path_mintypmax_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Module_path_expressionContext *> module_path_expression();
    Module_path_expressionContext* module_path_expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COLON();
    antlr4::tree::TerminalNode* COLON(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Module_path_mintypmax_expressionContext* module_path_mintypmax_expression();

  class  Part_select_rangeContext : public antlr4::ParserRuleContext {
  public:
    Part_select_rangeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Constant_rangeContext *constant_range();
    Indexed_rangeContext *indexed_range();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Part_select_rangeContext* part_select_range();

  class  Indexed_rangeContext : public antlr4::ParserRuleContext {
  public:
    Indexed_rangeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *PLUSCOLON();
    Constant_expressionContext *constant_expression();
    antlr4::tree::TerminalNode *MINUSCOLON();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Indexed_rangeContext* indexed_range();

  class  Constant_primaryContext : public antlr4::ParserRuleContext {
  public:
    Constant_primaryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Primary_literalContext *primary_literal();
    Ps_parameter_identifierContext *ps_parameter_identifier();
    Constant_selectContext *constant_select();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *LBRACK();
    Constant_range_expressionContext *constant_range_expression();
    antlr4::tree::TerminalNode *RBRACK();
    Package_scopeContext *package_scope();
    Class_scopeContext *class_scope();
    Constant_concatenationContext *constant_concatenation();
    Constant_multiple_concatenationContext *constant_multiple_concatenation();
    Tf_callContext *tf_call();
    System_tf_callContext *system_tf_call();
    antlr4::tree::TerminalNode *DOT();
    Method_call_bodyContext *method_call_body();
    PrimaryContext *primary();
    Implicit_class_handleContext *implicit_class_handle();
    Randomize_callContext *randomize_call();
    antlr4::tree::TerminalNode *STD();
    antlr4::tree::TerminalNode *COLONCOLON();
    Constant_let_expressionContext *constant_let_expression();
    antlr4::tree::TerminalNode *LPAREN();
    Constant_mintypmax_expressionContext *constant_mintypmax_expression();
    antlr4::tree::TerminalNode *RPAREN();
    antlr4::tree::TerminalNode *QUOTE();
    Constant_expressionContext *constant_expression();
    Simple_typeContext *simple_type();
    SigningContext *signing();
    antlr4::tree::TerminalNode *STRING();
    antlr4::tree::TerminalNode *CONST();
    Constant_assignment_pattern_expressionContext *constant_assignment_pattern_expression();
    Type_referenceContext *type_reference();
    antlr4::tree::TerminalNode *NULL_();
    Constant_primaryContext *constant_primary();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Constant_primaryContext* constant_primary();
  Constant_primaryContext* constant_primary(int precedence);
  class  Module_path_primaryContext : public antlr4::ParserRuleContext {
  public:
    Module_path_primaryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NumberContext *number();
    IdentifierContext *identifier();
    Module_path_concatenationContext *module_path_concatenation();
    Module_path_multiple_concatenationContext *module_path_multiple_concatenation();
    Function_subroutine_callContext *function_subroutine_call();
    antlr4::tree::TerminalNode *LPAREN();
    Module_path_mintypmax_expressionContext *module_path_mintypmax_expression();
    antlr4::tree::TerminalNode *RPAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Module_path_primaryContext* module_path_primary();

  class  PrimaryContext : public antlr4::ParserRuleContext {
  public:
    PrimaryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Primary_literalContext *primary_literal();
    Hierarchical_identifierContext *hierarchical_identifier();
    Select_Context *select_();
    Class_qualifierContext *class_qualifier();
    Package_scopeContext *package_scope();
    Empty_unpacked_array_concatenationContext *empty_unpacked_array_concatenation();
    ConcatenationContext *concatenation();
    antlr4::tree::TerminalNode *LBRACK();
    Range_expressionContext *range_expression();
    antlr4::tree::TerminalNode *RBRACK();
    Multiple_concatenationContext *multiple_concatenation();
    Tf_callContext *tf_call();
    System_tf_callContext *system_tf_call();
    Implicit_class_handleContext *implicit_class_handle();
    antlr4::tree::TerminalNode *DOT();
    Method_call_bodyContext *method_call_body();
    Randomize_callContext *randomize_call();
    antlr4::tree::TerminalNode *STD();
    antlr4::tree::TerminalNode *COLONCOLON();
    Let_expressionContext *let_expression();
    antlr4::tree::TerminalNode *LPAREN();
    Mintypmax_expressionContext *mintypmax_expression();
    antlr4::tree::TerminalNode *RPAREN();
    antlr4::tree::TerminalNode *QUOTE();
    ExpressionContext *expression();
    Simple_typeContext *simple_type();
    SigningContext *signing();
    antlr4::tree::TerminalNode *STRING();
    antlr4::tree::TerminalNode *CONST();
    Assignment_pattern_expressionContext *assignment_pattern_expression();
    Streaming_concatenationContext *streaming_concatenation();
    Sequence_method_callContext *sequence_method_call();
    antlr4::tree::TerminalNode *THIS();
    antlr4::tree::TerminalNode *DOLLAR();
    antlr4::tree::TerminalNode *NULL_();
    PrimaryContext *primary();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PrimaryContext* primary();
  PrimaryContext* primary(int precedence);
  class  Class_qualifierContext : public antlr4::ParserRuleContext {
  public:
    Class_qualifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LOCAL();
    antlr4::tree::TerminalNode *COLONCOLON();
    Implicit_class_handleContext *implicit_class_handle();
    antlr4::tree::TerminalNode *DOT();
    Class_scopeContext *class_scope();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Class_qualifierContext* class_qualifier();

  class  Range_expressionContext : public antlr4::ParserRuleContext {
  public:
    Range_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    Part_select_rangeContext *part_select_range();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Range_expressionContext* range_expression();

  class  Primary_literalContext : public antlr4::ParserRuleContext {
  public:
    Primary_literalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NumberContext *number();
    antlr4::tree::TerminalNode *TIME_LITERAL();
    antlr4::tree::TerminalNode *UNBASED_UNSIZED_LITERAL();
    antlr4::tree::TerminalNode *STRING_LITERAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Primary_literalContext* primary_literal();

  class  Implicit_class_handleContext : public antlr4::ParserRuleContext {
  public:
    Implicit_class_handleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *THIS();
    antlr4::tree::TerminalNode *SUPER();
    antlr4::tree::TerminalNode *DOT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Implicit_class_handleContext* implicit_class_handle();

  class  Bit_selectContext : public antlr4::ParserRuleContext {
  public:
    Bit_selectContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> LBRACK();
    antlr4::tree::TerminalNode* LBRACK(size_t i);
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RBRACK();
    antlr4::tree::TerminalNode* RBRACK(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Bit_selectContext* bit_select();

  class  Select_Context : public antlr4::ParserRuleContext {
  public:
    Select_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Bit_selectContext *> bit_select();
    Bit_selectContext* bit_select(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DOT();
    antlr4::tree::TerminalNode* DOT(size_t i);
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    antlr4::tree::TerminalNode *LBRACK();
    Part_select_rangeContext *part_select_range();
    antlr4::tree::TerminalNode *RBRACK();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Select_Context* select_();

  class  Nonrange_selectContext : public antlr4::ParserRuleContext {
  public:
    Nonrange_selectContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Bit_selectContext *> bit_select();
    Bit_selectContext* bit_select(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DOT();
    antlr4::tree::TerminalNode* DOT(size_t i);
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Nonrange_selectContext* nonrange_select();

  class  Constant_bit_selectContext : public antlr4::ParserRuleContext {
  public:
    Constant_bit_selectContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> LBRACK();
    antlr4::tree::TerminalNode* LBRACK(size_t i);
    std::vector<Constant_expressionContext *> constant_expression();
    Constant_expressionContext* constant_expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RBRACK();
    antlr4::tree::TerminalNode* RBRACK(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Constant_bit_selectContext* constant_bit_select();

  class  Constant_selectContext : public antlr4::ParserRuleContext {
  public:
    Constant_selectContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Constant_bit_selectContext *> constant_bit_select();
    Constant_bit_selectContext* constant_bit_select(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DOT();
    antlr4::tree::TerminalNode* DOT(size_t i);
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    antlr4::tree::TerminalNode *LBRACK();
    Constant_part_select_rangeContext *constant_part_select_range();
    antlr4::tree::TerminalNode *RBRACK();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Constant_selectContext* constant_select();

  class  Constant_let_expressionContext : public antlr4::ParserRuleContext {
  public:
    Constant_let_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Let_expressionContext *let_expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Constant_let_expressionContext* constant_let_expression();

  class  Net_lvalueContext : public antlr4::ParserRuleContext {
  public:
    Net_lvalueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Ps_or_hierarchical_identifierContext *ps_or_hierarchical_identifier();
    Constant_selectContext *constant_select();
    antlr4::tree::TerminalNode *LBRACE();
    std::vector<Net_lvalueContext *> net_lvalue();
    Net_lvalueContext* net_lvalue(size_t i);
    antlr4::tree::TerminalNode *RBRACE();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    Assignment_pattern_net_lvalueContext *assignment_pattern_net_lvalue();
    Assignment_pattern_expression_typeContext *assignment_pattern_expression_type();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Net_lvalueContext* net_lvalue();

  class  Variable_lvalueContext : public antlr4::ParserRuleContext {
  public:
    Variable_lvalueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Hierarchical_identifierContext *hierarchical_identifier();
    Select_Context *select_();
    Implicit_class_handleContext *implicit_class_handle();
    antlr4::tree::TerminalNode *DOT();
    Package_scopeContext *package_scope();
    antlr4::tree::TerminalNode *LBRACE();
    std::vector<Variable_lvalueContext *> variable_lvalue();
    Variable_lvalueContext* variable_lvalue(size_t i);
    antlr4::tree::TerminalNode *RBRACE();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    Assignment_pattern_variable_lvalueContext *assignment_pattern_variable_lvalue();
    Assignment_pattern_expression_typeContext *assignment_pattern_expression_type();
    Streaming_concatenationContext *streaming_concatenation();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Variable_lvalueContext* variable_lvalue();

  class  Nonrange_variable_lvalueContext : public antlr4::ParserRuleContext {
  public:
    Nonrange_variable_lvalueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Hierarchical_identifierContext *hierarchical_identifier();
    Nonrange_selectContext *nonrange_select();
    Implicit_class_handleContext *implicit_class_handle();
    antlr4::tree::TerminalNode *DOT();
    Package_scopeContext *package_scope();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Nonrange_variable_lvalueContext* nonrange_variable_lvalue();

  class  Unary_operatorContext : public antlr4::ParserRuleContext {
  public:
    Unary_operatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PLUS();
    antlr4::tree::TerminalNode *MINUS();
    antlr4::tree::TerminalNode *EXCLAM();
    antlr4::tree::TerminalNode *TILDE();
    antlr4::tree::TerminalNode *AMP();
    antlr4::tree::TerminalNode *TILDEAMP();
    antlr4::tree::TerminalNode *PIPE();
    antlr4::tree::TerminalNode *TILDEPIPE();
    antlr4::tree::TerminalNode *CARROT();
    antlr4::tree::TerminalNode *TILDECARROT();
    antlr4::tree::TerminalNode *CARROTTILDE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Unary_operatorContext* unary_operator();

  class  Binary_operatorContext : public antlr4::ParserRuleContext {
  public:
    Binary_operatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PLUS();
    antlr4::tree::TerminalNode *MINUS();
    antlr4::tree::TerminalNode *STAR();
    antlr4::tree::TerminalNode *SLASH();
    antlr4::tree::TerminalNode *PERCENT();
    antlr4::tree::TerminalNode *EQEQ();
    antlr4::tree::TerminalNode *NEQ();
    antlr4::tree::TerminalNode *EQEQEQ();
    antlr4::tree::TerminalNode *NEQEQ();
    antlr4::tree::TerminalNode *EQEQQ();
    antlr4::tree::TerminalNode *NEQQ();
    antlr4::tree::TerminalNode *AMPAMP();
    antlr4::tree::TerminalNode *PIPEPIPE();
    antlr4::tree::TerminalNode *STARSTAR();
    antlr4::tree::TerminalNode *LT();
    antlr4::tree::TerminalNode *LTEQ();
    antlr4::tree::TerminalNode *GT();
    antlr4::tree::TerminalNode *GTEQ();
    antlr4::tree::TerminalNode *AMP();
    antlr4::tree::TerminalNode *PIPE();
    antlr4::tree::TerminalNode *CARROT();
    antlr4::tree::TerminalNode *CARROTTILDE();
    antlr4::tree::TerminalNode *TILDECARROT();
    antlr4::tree::TerminalNode *GTGT();
    antlr4::tree::TerminalNode *LTLT();
    antlr4::tree::TerminalNode *GTGTGT();
    antlr4::tree::TerminalNode *LTLTLT();
    antlr4::tree::TerminalNode *RARROW();
    antlr4::tree::TerminalNode *DARROW();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Binary_operatorContext* binary_operator();

  class  Inc_or_dec_operatorContext : public antlr4::ParserRuleContext {
  public:
    Inc_or_dec_operatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PLUSPLUS();
    antlr4::tree::TerminalNode *MINUSMINUS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Inc_or_dec_operatorContext* inc_or_dec_operator();

  class  Unary_module_path_operatorContext : public antlr4::ParserRuleContext {
  public:
    Unary_module_path_operatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EXCLAM();
    antlr4::tree::TerminalNode *TILDE();
    antlr4::tree::TerminalNode *AMP();
    antlr4::tree::TerminalNode *TILDEAMP();
    antlr4::tree::TerminalNode *PIPE();
    antlr4::tree::TerminalNode *TILDEPIPE();
    antlr4::tree::TerminalNode *CARROT();
    antlr4::tree::TerminalNode *TILDECARROT();
    antlr4::tree::TerminalNode *CARROTTILDE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Unary_module_path_operatorContext* unary_module_path_operator();

  class  Binary_module_path_operatorContext : public antlr4::ParserRuleContext {
  public:
    Binary_module_path_operatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EQEQ();
    antlr4::tree::TerminalNode *NEQ();
    antlr4::tree::TerminalNode *AMPAMP();
    antlr4::tree::TerminalNode *PIPEPIPE();
    antlr4::tree::TerminalNode *AMP();
    antlr4::tree::TerminalNode *PIPE();
    antlr4::tree::TerminalNode *CARROT();
    antlr4::tree::TerminalNode *CARROTTILDE();
    antlr4::tree::TerminalNode *TILDECARROT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Binary_module_path_operatorContext* binary_module_path_operator();

  class  NumberContext : public antlr4::ParserRuleContext {
  public:
    NumberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Integral_numberContext *integral_number();
    antlr4::tree::TerminalNode *REAL_NUMBER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  NumberContext* number();

  class  Integral_numberContext : public antlr4::ParserRuleContext {
  public:
    Integral_numberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DECIMAL_NUMBER();
    antlr4::tree::TerminalNode *OCTAL_NUMBER();
    antlr4::tree::TerminalNode *BINARY_NUMBER();
    antlr4::tree::TerminalNode *HEX_NUMBER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Integral_numberContext* integral_number();

  class  Attribute_instanceContext : public antlr4::ParserRuleContext {
  public:
    Attribute_instanceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    std::vector<antlr4::tree::TerminalNode *> STAR();
    antlr4::tree::TerminalNode* STAR(size_t i);
    std::vector<Attr_specContext *> attr_spec();
    Attr_specContext* attr_spec(size_t i);
    antlr4::tree::TerminalNode *RPAREN();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Attribute_instanceContext* attribute_instance();

  class  Attr_specContext : public antlr4::ParserRuleContext {
  public:
    Attr_specContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *EQ();
    Constant_expressionContext *constant_expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Attr_specContext* attr_spec();

  class  Hierarchical_identifierContext : public antlr4::ParserRuleContext {
  public:
    Hierarchical_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    antlr4::tree::TerminalNode *ROOT_DOT_SYS_TASK();
    std::vector<Constant_bit_selectContext *> constant_bit_select();
    Constant_bit_selectContext* constant_bit_select(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DOT();
    antlr4::tree::TerminalNode* DOT(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Hierarchical_identifierContext* hierarchical_identifier();

  class  IdentifierContext : public antlr4::ParserRuleContext {
  public:
    IdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SIMPLE_IDENTIFIER();
    antlr4::tree::TerminalNode *ESCAPED_IDENTIFIER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IdentifierContext* identifier();

  class  Package_scopeContext : public antlr4::ParserRuleContext {
  public:
    Package_scopeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *COLONCOLON();
    antlr4::tree::TerminalNode *UNIT_SYS_TASK();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Package_scopeContext* package_scope();

  class  Ps_identifierContext : public antlr4::ParserRuleContext {
  public:
    Ps_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    Package_scopeContext *package_scope();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Ps_identifierContext* ps_identifier();

  class  Ps_or_hierarchical_array_identifierContext : public antlr4::ParserRuleContext {
  public:
    Ps_or_hierarchical_array_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Hierarchical_identifierContext *hierarchical_identifier();
    Implicit_class_handleContext *implicit_class_handle();
    antlr4::tree::TerminalNode *DOT();
    Class_scopeContext *class_scope();
    Package_scopeContext *package_scope();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Ps_or_hierarchical_array_identifierContext* ps_or_hierarchical_array_identifier();

  class  Ps_or_hierarchical_identifierContext : public antlr4::ParserRuleContext {
  public:
    Ps_or_hierarchical_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    Package_scopeContext *package_scope();
    Hierarchical_identifierContext *hierarchical_identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Ps_or_hierarchical_identifierContext* ps_or_hierarchical_identifier();

  class  Ps_parameter_identifierContext : public antlr4::ParserRuleContext {
  public:
    Ps_parameter_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    Package_scopeContext *package_scope();
    Class_scopeContext *class_scope();
    std::vector<antlr4::tree::TerminalNode *> DOT();
    antlr4::tree::TerminalNode* DOT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LBRACK();
    antlr4::tree::TerminalNode* LBRACK(size_t i);
    std::vector<Constant_expressionContext *> constant_expression();
    Constant_expressionContext* constant_expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RBRACK();
    antlr4::tree::TerminalNode* RBRACK(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Ps_parameter_identifierContext* ps_parameter_identifier();

  class  Ps_type_identifierContext : public antlr4::ParserRuleContext {
  public:
    Ps_type_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *LOCAL();
    antlr4::tree::TerminalNode *COLONCOLON();
    Package_scopeContext *package_scope();
    Class_scopeContext *class_scope();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Ps_type_identifierContext* ps_type_identifier();

  class  System_tf_identifierContext : public antlr4::ParserRuleContext {
  public:
    System_tf_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SYSTEM_TF_IDENTIFIER();
    antlr4::tree::TerminalNode *ERROR_SYS_TASK();
    antlr4::tree::TerminalNode *FATAL_SYS_TASK();
    antlr4::tree::TerminalNode *WARNING_SYS_TASK();
    antlr4::tree::TerminalNode *INFO_SYS_TASK();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  System_tf_identifierContext* system_tf_identifier();


  bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;

  bool property_exprSempred(Property_exprContext *_localctx, size_t predicateIndex);
  bool sequence_exprSempred(Sequence_exprContext *_localctx, size_t predicateIndex);
  bool block_event_expressionSempred(Block_event_expressionContext *_localctx, size_t predicateIndex);
  bool select_expressionSempred(Select_expressionContext *_localctx, size_t predicateIndex);
  bool event_expressionSempred(Event_expressionContext *_localctx, size_t predicateIndex);
  bool constant_expressionSempred(Constant_expressionContext *_localctx, size_t predicateIndex);
  bool expressionSempred(ExpressionContext *_localctx, size_t predicateIndex);
  bool module_path_expressionSempred(Module_path_expressionContext *_localctx, size_t predicateIndex);
  bool constant_primarySempred(Constant_primaryContext *_localctx, size_t predicateIndex);
  bool primarySempred(PrimaryContext *_localctx, size_t predicateIndex);

  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};
