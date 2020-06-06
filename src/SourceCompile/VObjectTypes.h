
// This file is automatically generated by generate_parser_listener.tcl
// DO NOT EDIT

#ifndef VOBJECTTYPES_H
#define VOBJECTTYPES_H
enum VObjectType {
      sl0 = 0,
      sl1 = 1,
      slAccelerate_directive = 2,
      slAction_block = 3,
      slActual_arg_expr = 4,
      slActual_arg_list = 5,
      slAlways_construct = 6,
      slAlwaysKeywd_Always = 7,
      slAlwaysKeywd_Comb = 8,
      slAlwaysKeywd_FF = 9,
      slAlwaysKeywd_Latch = 10,
      slAnd_call = 11,
      slAnonymous_program = 12,
      slAnonymous_program_item = 13,
      slAnsi_port_declaration = 14,
      slArray_manipulation_call = 15,
      slArray_member_label = 16,
      slArray_method_name = 17,
      slArray_pattern_key = 18,
      slArray_range_expression = 19,
      slAssert_property_statement = 20,
      slAssertion_item = 21,
      slAssertion_item_declaration = 22,
      slAssertion_variable_declaration = 23,
      slAssign = 24,
      slAssignment_pattern = 25,
      slAssignment_pattern_expression = 26,
      slAssignment_pattern_expression_type = 27,
      slAssignment_pattern_key = 28,
      slAssignment_pattern_net_lvalue = 29,
      slAssignment_pattern_variable_lvalue = 30,
      slAssignOp_Add = 31,
      slAssignOp_ArithShiftLeft = 32,
      slAssignOp_ArithShiftRight = 33,
      slAssignOp_Assign = 34,
      slAssignOp_BitwAnd = 35,
      slAssignOp_BitwLeftShift = 36,
      slAssignOp_BitwOr = 37,
      slAssignOp_BitwRightShift = 38,
      slAssignOp_BitwXor = 39,
      slAssignOp_Div = 40,
      slAssignOp_Modulo = 41,
      slAssignOp_Mult = 42,
      slAssignOp_Sub = 43,
      slAssociative_dimension = 44,
      slAssume_property_statement = 45,
      slAttr_name = 46,
      slAttr_spec = 47,
      slAttribute_instance = 48,
      slAutoexpand_vectornets_directive = 49,
      slBegin_keywords_directive = 50,
      slBind_directive = 51,
      slBind_instantiation = 52,
      slBinModOp_BitwAnd = 53,
      slBinModOp_BitwOr = 54,
      slBinModOp_BitwXor = 55,
      slBinModOp_Equiv = 56,
      slBinModOp_LogicAnd = 57,
      slBinModOp_LogicOr = 58,
      slBinModOp_NotEqual = 59,
      slBinModOp_ReductXnor1 = 60,
      slBinModOp_ReductXnor2 = 61,
      slBinOp_ArithShiftLeft = 62,
      slBinOp_ArithShiftRight = 63,
      slBinOp_BitwAnd = 64,
      slBinOp_BitwOr = 65,
      slBinOp_BitwXor = 66,
      slBinOp_Div = 67,
      slBinOp_Equiv = 68,
      slBinOp_Equivalence = 69,
      slBinOp_FourStateLogicEqual = 70,
      slBinOp_FourStateLogicNotEqual = 71,
      slBinOp_Great = 72,
      slBinOp_GreatEqual = 73,
      slBinOp_Imply = 74,
      slBinOp_Less = 75,
      slBinOp_LessEqual = 76,
      slBinOp_LogicAnd = 77,
      slBinOp_LogicOr = 78,
      slBinOp_Minus = 79,
      slBinOp_Mult = 80,
      slBinOp_MultMult = 81,
      slBinOp_Not = 82,
      slBinOp_Percent = 83,
      slBinOp_Plus = 84,
      slBinOp_ReductNand = 85,
      slBinOp_ReductNor = 86,
      slBinOp_ReductXnor1 = 87,
      slBinOp_ReductXnor2 = 88,
      slBinOp_ShiftLeft = 89,
      slBinOp_ShiftRight = 90,
      slBinOp_WildcardEqual = 91,
      slBinOp_WildcardNotEqual = 92,
      slBinOp_WildEqual = 93,
      slBinOp_WildNotEqual = 94,
      slBins_Bins = 95,
      slBins_expression = 96,
      slBins_Ignore = 97,
      slBins_Illegal = 98,
      slBins_or_empty = 99,
      slBins_or_options = 100,
      slBins_selection = 101,
      slBins_selection_or_option = 102,
      slBit_select = 103,
      slBlock_event_expression = 104,
      slBlock_item_declaration = 105,
      slBlocking_assignment = 106,
      slBoolean_abbrev = 107,
      slBreakStmt = 108,
      slBuilt_in_method_call = 109,
      slCase = 110,
      slCase_generate_construct = 111,
      slCase_generate_item = 112,
      slCase_inside_item = 113,
      slCase_item = 114,
      slCase_keyword = 115,
      slCase_pattern_item = 116,
      slCase_statement = 117,
      slCaseX = 118,
      slCaseZ = 119,
      slCast = 120,
      slCasting_type = 121,
      slCell_clause = 122,
      slCelldefine_directive = 123,
      slChandle_type = 124,
      slChargeStrength_Large = 125,
      slChargeStrength_Medium = 126,
      slChargeStrength_Small = 127,
      slChecker = 128,
      slChecker_declaration = 129,
      slChecker_generate_item = 130,
      slChecker_instantiation = 131,
      slChecker_or_generate_item = 132,
      slChecker_or_generate_item_declaration = 133,
      slChecker_port_item = 134,
      slChecker_port_list = 135,
      slClass = 136,
      slClass_constraint = 137,
      slClass_constructor_declaration = 138,
      slClass_constructor_prototype = 139,
      slClass_declaration = 140,
      slClass_item = 141,
      slClass_keyword = 142,
      slClass_method = 143,
      slClass_new = 144,
      slClass_property = 145,
      slClass_scope = 146,
      slClass_type = 147,
      slClassItemQualifier_Local = 148,
      slClassItemQualifier_Protected = 149,
      slClassItemQualifier_Static = 150,
      slClocking_decl_assign = 151,
      slClocking_declaration = 152,
      slClocking_drive = 153,
      slClocking_event = 154,
      slClocking_item = 155,
      slClocking_skew = 156,
      slClockingDir_Inout = 157,
      slClockingDir_Input = 158,
      slClockingDir_InputOutput = 159,
      slClockingDir_Output = 160,
      slClockvar = 161,
      slClockvar_expression = 162,
      slCmos_switch_instance = 163,
      slCmosSwitchType_Cmos = 164,
      slCmosSwitchType_RCmos = 165,
      slColumnPartSelectOp = 166,
      slCombinational_body = 167,
      slCombinational_entry = 168,
      slComma_operator = 169,
      slComments = 170,
      slComplex_func_call = 171,
      slConcatenation = 172,
      slConcurrent_assertion_item = 173,
      slConcurrent_assertion_item_declaration = 174,
      slConcurrent_assertion_statement = 175,
      slCond_predicate = 176,
      slConditional_generate_construct = 177,
      slConditional_operator = 178,
      slConditional_statement = 179,
      slConfig = 180,
      slConfig_declaration = 181,
      slConfig_rule_statement = 182,
      slConsecutive_repetition = 183,
      slConst_or_range_expression = 184,
      slConst_type = 185,
      slConstant_assignment_pattern_expression = 186,
      slConstant_bit_select = 187,
      slConstant_cast = 188,
      slConstant_concatenation = 189,
      slConstant_expression = 190,
      slConstant_indexed_range = 191,
      slConstant_mintypmax_expression = 192,
      slConstant_multiple_concatenation = 193,
      slConstant_param_expression = 194,
      slConstant_part_select_range = 195,
      slConstant_primary = 196,
      slConstant_range = 197,
      slConstant_range_expression = 198,
      slConstant_select = 199,
      slConstantSelect = 200,
      slConstraint_block = 201,
      slConstraint_block_item = 202,
      slConstraint_declaration = 203,
      slConstraint_expression = 204,
      slConstraint_primary = 205,
      slConstraint_prototype = 206,
      slConstraint_set = 207,
      slConstSelect = 208,
      slContext_keyword = 209,
      slContinueStmt = 210,
      slContinuous_assign = 211,
      slControlled_timing_check_event = 212,
      slCover_cross = 213,
      slCover_point = 214,
      slCover_property_statement = 215,
      slCover_sequence_statement = 216,
      slCoverage_event = 217,
      slCoverage_option = 218,
      slCoverage_spec = 219,
      slCoverage_spec_or_option = 220,
      slCovergroup_declaration = 221,
      slCR = 222,
      slCross_body = 223,
      slCross_body_item = 224,
      slCross_item = 225,
      slCycle_delay = 226,
      slCycle_delay_const_range_expression = 227,
      slCycle_delay_range = 228,
      slData_declaration = 229,
      slData_type = 230,
      slData_type_or_implicit = 231,
      slData_type_or_void = 232,
      slDeassign = 233,
      slDecPartSelectOp = 234,
      slDefault_clause = 235,
      slDefault_decay_time_directive = 236,
      slDefault_nettype_directive = 237,
      slDefault_trireg_strenght_directive = 238,
      slDefault_value = 239,
      slDefaultSkew_Intput = 240,
      slDefaultSkew_IntputOutput = 241,
      slDefaultSkew_Output = 242,
      slDeferred_immediate_assert_statement = 243,
      slDeferred_immediate_assertion_item = 244,
      slDeferred_immediate_assertion_statement = 245,
      slDeferred_immediate_assume_statement = 246,
      slDeferred_immediate_cover_statement = 247,
      slDefine_directive = 248,
      slDefparam_assignment = 249,
      slDelay2 = 250,
      slDelay3 = 251,
      slDelay_control = 252,
      slDelay_mode_distributed_directive = 253,
      slDelay_mode_path_directive = 254,
      slDelay_mode_unit_directive = 255,
      slDelay_mode_zero_directive = 256,
      slDelay_or_event_control = 257,
      slDelay_value = 258,
      slDelayed_data = 259,
      slDelayed_reference = 260,
      slDescription = 261,
      slDesign_statement = 262,
      slDirective_in_macro = 263,
      slDisable_portfaults_directive = 264,
      slDisable_statement = 265,
      slDist_item = 266,
      slDist_list = 267,
      slDistWeight_AssignRange = 268,
      slDistWeight_AssignValue = 269,
      slDo = 270,
      slDollar_fullskew_timing_check = 271,
      slDollar_hold_timing_check = 272,
      slDollar_keyword = 273,
      slDollar_nochange_timing_check = 274,
      slDollar_period_timing_check = 275,
      slDollar_recovery_timing_check = 276,
      slDollar_recrem_timing_check = 277,
      slDollar_removal_timing_check = 278,
      slDollar_root_keyword = 279,
      slDollar_setup_timing_check = 280,
      slDollar_setuphold_timing_check = 281,
      slDollar_skew_timing_check = 282,
      slDollar_timeskew_timing_check = 283,
      slDollar_width_timing_check = 284,
      slDpi_import_export = 285,
      slDrive_strength = 286,
      slDynamic_array_new = 287,
      slEdge_control_specifier = 288,
      slEdge_descriptor = 289,
      slEdge_Edge = 290,
      slEdge_indicator = 291,
      slEdge_input_list = 292,
      slEdge_Negedge = 293,
      slEdge_Posedge = 294,
      slEdge_sensitive_path_declaration = 295,
      slEdge_symbol = 296,
      slElaboration_system_task = 297,
      slElse_directive = 298,
      slElseif_directive = 299,
      slElseif_directive_in_macro_body = 300,
      slElsif_directive = 301,
      slElsif_directive_in_macro_body = 302,
      slEmpty_queue = 303,
      slEnable_gate_instance = 304,
      slEnable_portfaults_directive = 305,
      slEnableGateType_Bufif0 = 306,
      slEnableGateType_Bufif1 = 307,
      slEnableGateType_Notif0 = 308,
      slEnableGateType_Notif1 = 309,
      slEnd = 310,
      slEnd_edge_offset = 311,
      slEnd_keywords_directive = 312,
      slEndcase = 313,
      slEndcelldefine_directive = 314,
      slEndchecker = 315,
      slEndclass = 316,
      slEndclocking = 317,
      slEndconfig = 318,
      slEndfunction = 319,
      slEndgenerate = 320,
      slEndgroup = 321,
      slEndif_directive = 322,
      slEndinterface = 323,
      slEndmodule = 324,
      slEndpackage = 325,
      slEndprimitive = 326,
      slEndprogram = 327,
      slEndproperty = 328,
      slEndprotect_directive = 329,
      slEndprotected_directive = 330,
      slEndsequence = 331,
      slEndspecify = 332,
      slEndtable = 333,
      slEndtask = 334,
      slEnum_base_type = 335,
      slEnum_keyword = 336,
      slEnum_name_declaration = 337,
      slEscaped_identifier = 338,
      slEscaped_macro_definition_body = 339,
      slEscaped_macro_definition_body_alt1 = 340,
      slEscaped_macro_definition_body_alt2 = 341,
      slEscapedCR = 342,
      slEvent_based_flag = 343,
      slEvent_control = 344,
      slEvent_expression = 345,
      slEvent_trigger = 346,
      slEvent_type = 347,
      slEveryRule = 348,
      slExpand_vectornets_directive = 349,
      slExpect_property_statement = 350,
      slExpression = 351,
      slExpression_or_cond_pattern = 352,
      slExpression_or_dist = 353,
      slExtern_constraint_declaration = 354,
      slExtern_qualifier = 355,
      slExtern_tf_declaration = 356,
      slFile_path_spec = 357,
      slFinal_construct = 358,
      slFor = 359,
      slFor_initialization = 360,
      slFor_step = 361,
      slFor_step_assignment = 362,
      slFor_variable_declaration = 363,
      slForce = 364,
      slForeach = 365,
      slForever = 366,
      slFull_edge_sensitive_path_description = 367,
      slFull_path_description = 368,
      slFunction_body_declaration = 369,
      slFunction_data_type = 370,
      slFunction_data_type_or_implicit = 371,
      slFunction_declaration = 372,
      slFunction_name_decl = 373,
      slFunction_prototype = 374,
      slFunction_statement_or_null = 375,
      slGate_instantiation = 376,
      slGenerate_block = 377,
      slGenerate_interface_block = 378,
      slGenerate_interface_case_statement = 379,
      slGenerate_interface_conditional_statement = 380,
      slGenerate_interface_item = 381,
      slGenerate_interface_loop_statement = 382,
      slGenerate_interface_named_block = 383,
      slGenerate_item = 384,
      slGenerate_module_block = 385,
      slGenerate_module_case_statement = 386,
      slGenerate_module_conditional_statement = 387,
      slGenerate_module_item = 388,
      slGenerate_module_loop_statement = 389,
      slGenerate_module_named_block = 390,
      slGenerate_region = 391,
      slGenerated_interface_instantiation = 392,
      slGenerated_module_instantiation = 393,
      slGenericElementType = 394,
      slGenvar_assignment = 395,
      slGenvar_decl_assignment = 396,
      slGenvar_declaration = 397,
      slGenvar_initialization = 398,
      slGenvar_interface_case_item = 399,
      slGenvar_iteration = 400,
      slGenvar_module_case_item = 401,
      slGoto_repetition = 402,
      slHierarchical_btf_identifier = 403,
      slHierarchical_identifier = 404,
      slHierarchical_instance = 405,
      slIdentifier = 406,
      slIdentifier_in_macro_body = 407,
      slIdentifier_list = 408,
      slIf_generate_construct = 409,
      slIfdef_directive = 410,
      slIfdef_directive_in_macro_body = 411,
      slIfndef_directive = 412,
      slIfndef_directive_in_macro_body = 413,
      slImmediate_assertion_statement = 414,
      slImplicit_class_handle = 415,
      slImplicit_data_type = 416,
      slInc_or_dec_expression = 417,
      slIncDec_MinusMinus = 418,
      slIncDec_PlusPlus = 419,
      slInclude_directive = 420,
      slInclude_statement = 421,
      slIncPartSelectOp = 422,
      slIndexed_range = 423,
      slInitial_construct = 424,
      slInitVal_1TickB0 = 425,
      slInitVal_1Tickb0 = 426,
      slInitVal_1TickB1 = 427,
      slInitVal_1Tickb1 = 428,
      slInitVal_1TickBX = 429,
      slInitVal_1TickBx = 430,
      slInitVal_1TickbX = 431,
      slInitVal_1Tickbx = 432,
      slInitVal_Integral = 433,
      slInout_declaration = 434,
      slInput_declaration = 435,
      slInsideOp = 436,
      slInst_clause = 437,
      slInst_name = 438,
      slIntConst = 439,
      slInteger_type = 440,
      slIntegerAtomType_Byte = 441,
      slIntegerAtomType_Int = 442,
      slIntegerAtomType_LongInt = 443,
      slIntegerAtomType_Shortint = 444,
      slIntegerAtomType_Time = 445,
      slInterface = 446,
      slInterface_ansi_header = 447,
      slInterface_class_declaration = 448,
      slInterface_class_item = 449,
      slInterface_class_keyword = 450,
      slInterface_class_method = 451,
      slInterface_class_type = 452,
      slInterface_declaration = 453,
      slInterface_identifier = 454,
      slInterface_instantiation = 455,
      slInterface_item = 456,
      slInterface_nonansi_header = 457,
      slInterface_or_generate_item = 458,
      slInterface_port_declaration = 459,
      slInterface_port_header = 460,
      slIntVec_TypeBit = 461,
      slIntVec_TypeLogic = 462,
      slIntVec_TypeReg = 463,
      slJoin_any_keyword = 464,
      slJoin_keyword = 465,
      slJoin_none_keyword = 466,
      slJump_statement = 467,
      slLet_declaration = 468,
      slLet_formal_type = 469,
      slLet_port_item = 470,
      slLet_port_list = 471,
      slLevel_input_list = 472,
      slLevel_symbol = 473,
      slLiblist_clause = 474,
      slLibrary_declaration = 475,
      slLibrary_descriptions = 476,
      slLibrary_text = 477,
      slLifetime_Automatic = 478,
      slLifetime_Static = 479,
      slLine_directive = 480,
      slList_of_arguments = 481,
      slList_of_checker_port_connections = 482,
      slList_of_clocking_decl_assign = 483,
      slList_of_cross_items = 484,
      slList_of_defparam_assignments = 485,
      slList_of_interface_identifiers = 486,
      slList_of_net_assignments = 487,
      slList_of_net_decl_assignments = 488,
      slList_of_param_assignments = 489,
      slList_of_parameter_assignments = 490,
      slList_of_path_delay_expressions = 491,
      slList_of_path_inputs = 492,
      slList_of_path_outputs = 493,
      slList_of_port_connections = 494,
      slList_of_port_declarations = 495,
      slList_of_port_identifiers = 496,
      slList_of_ports = 497,
      slList_of_specparam_assignments = 498,
      slList_of_tf_variable_identifiers = 499,
      slList_of_type_assignments = 500,
      slList_of_variable_assignments = 501,
      slList_of_variable_decl_assignments = 502,
      slList_of_variable_identifiers = 503,
      slList_of_variable_port_identifiers = 504,
      slList_of_virtual_interface_decl = 505,
      slLocal_parameter_declaration = 506,
      slLoop_generate_construct = 507,
      slLoop_statement = 508,
      slLoop_variables = 509,
      slMacro_actual_args = 510,
      slMacro_arg = 511,
      slMacro_arguments = 512,
      slMacro_definition = 513,
      slMacroInstanceNoArgs = 514,
      slMacroInstanceWithArgs = 515,
      slMatches = 516,
      slMethod_call = 517,
      slMethod_call_body = 518,
      slMethod_call_root = 519,
      slMethod_prototype = 520,
      slMethodQualifier_ClassItem = 521,
      slMethodQualifier_Virtual = 522,
      slMintypmax_expression = 523,
      slModport_hierarchical_ports_declaration = 524,
      slModport_item = 525,
      slModport_ports_declaration = 526,
      slModport_simple_port = 527,
      slModport_simple_ports_declaration = 528,
      slModport_tf_port = 529,
      slModport_tf_ports_declaration = 530,
      slModule = 531,
      slModule_ansi_header = 532,
      slModule_common_item = 533,
      slModule_declaration = 534,
      slModule_instantiation = 535,
      slModule_item = 536,
      slModule_keyword = 537,
      slModule_nonansi_header = 538,
      slModule_or_generate_item = 539,
      slModule_or_generate_item_declaration = 540,
      slModule_path_concatenation = 541,
      slModule_path_expression = 542,
      slModule_path_mintypmax_expression = 543,
      slModule_path_multiple_concatenation = 544,
      slModule_path_primary = 545,
      slModuleInstance = 546,
      slMos_switch_instance = 547,
      slMosSwitchType_NMos = 548,
      slMosSwitchType_PMos = 549,
      slMosSwitchType_RNMos = 550,
      slMosSwitchType_RPMos = 551,
      slMultiline_args_macro_definition = 552,
      slMultiline_no_args_macro_definition = 553,
      slMultiple_concatenation = 554,
      slN_input_gate_instance = 555,
      slN_output_gate_instance = 556,
      slName_of_instance = 557,
      slNamed_checker_port_connection = 558,
      slNamed_parameter_assignment = 559,
      slNamed_port_connection = 560,
      slNet_alias = 561,
      slNet_assignment = 562,
      slNet_decl_assignment = 563,
      slNet_declaration = 564,
      slNet_lvalue = 565,
      slNet_port_header = 566,
      slNet_port_type = 567,
      slNet_type_declaration = 568,
      slNetType_Supply0 = 569,
      slNetType_Supply1 = 570,
      slNetType_Tri = 571,
      slNetType_Tri0 = 572,
      slNetType_Tri1 = 573,
      slNetType_TriAnd = 574,
      slNetType_TriOr = 575,
      slNetType_TriReg = 576,
      slNetType_Uwire = 577,
      slNetType_Wand = 578,
      slNetType_Wire = 579,
      slNetType_Wor = 580,
      slNext_state = 581,
      slNInpGate_And = 582,
      slNInpGate_Nand = 583,
      slNInpGate_Nor = 584,
      slNInpGate_Or = 585,
      slNInpGate_Xnor = 586,
      slNInpGate_Xor = 587,
      slNoaccelerate_directive = 588,
      slNoexpand_vectornets_directive = 589,
      slNon_consecutive_repetition = 590,
      slNon_port_interface_item = 591,
      slNon_port_module_item = 592,
      slNon_port_program_item = 593,
      slNonblocking_assignment = 594,
      slNonIntType_Real = 595,
      slNonIntType_RealTime = 596,
      slNonIntType_ShortReal = 597,
      slNonrange_select = 598,
      slNonrange_variable_lvalue = 599,
      slNoremove_gatenames_directive = 600,
      slNoremove_netnames_directive = 601,
      slNosuppress_faults_directive = 602,
      slNotifier = 603,
      slNoType = 604,
      slNounconnected_drive_directive = 605,
      slNOutGate_Buf = 606,
      slNOutGate_Not = 607,
      slNull_keyword = 608,
      slNull_rule = 609,
      slNumber = 610,
      slNumber_1TickB0 = 611,
      slNumber_1Tickb0 = 612,
      slNumber_1TickB1 = 613,
      slNumber_1Tickb1 = 614,
      slNumber_1TickBX = 615,
      slNumber_1TickBx = 616,
      slNumber_1TickbX = 617,
      slNumber_1Tickbx = 618,
      slNumber_Integral = 619,
      slNumber_Real = 620,
      slNumber_Tick0 = 621,
      slNumber_Tick1 = 622,
      slNumber_TickB0 = 623,
      slNumber_Tickb0 = 624,
      slNumber_TickB1 = 625,
      slNumber_Tickb1 = 626,
      slOpen_range_list = 627,
      slOperator_assignment = 628,
      slOr_call = 629,
      slOr_operator = 630,
      slOrdered_checker_port_connection = 631,
      slOrdered_parameter_assignment = 632,
      slOrdered_port_connection = 633,
      slOutput_declaration = 634,
      slOutput_symbol = 635,
      slOverload_declaration = 636,
      slOverload_proto_formals = 637,
      slOverloadOp_Div = 638,
      slOverloadOp_Equal = 639,
      slOverloadOp_Equiv = 640,
      slOverloadOp_Greater = 641,
      slOverloadOp_GreaterEqual = 642,
      slOverloadOp_Less = 643,
      slOverloadOp_LessEqual = 644,
      slOverloadOp_Minus = 645,
      slOverloadOp_MinusMinus = 646,
      slOverloadOp_Mult = 647,
      slOverloadOp_NotEqual = 648,
      slOverloadOp_Percent = 649,
      slOverloadOp_Plus = 650,
      slOverloadOp_PlusPlus = 651,
      slOverloadOp_StarStar = 652,
      slPackage = 653,
      slPackage_declaration = 654,
      slPackage_export_declaration = 655,
      slPackage_import_declaration = 656,
      slPackage_import_item = 657,
      slPackage_item = 658,
      slPackage_or_generate_item_declaration = 659,
      slPackage_scope = 660,
      slPacked_dimension = 661,
      slPacked_keyword = 662,
      slPaired_parens = 663,
      slPar_block = 664,
      slParallel_edge_sensitive_path_description = 665,
      slParallel_path_description = 666,
      slParam_assignment = 667,
      slParam_expression = 668,
      slParameter_declaration = 669,
      slParameter_override = 670,
      slParameter_port_declaration = 671,
      slParameter_port_list = 672,
      slParameter_value_assignment = 673,
      slPart_select_op = 674,
      slPart_select_op_column = 675,
      slPart_select_range = 676,
      slPass_enable_switch_instance = 677,
      slPass_switch_instance = 678,
      slPassEnSwitch_RTranif0 = 679,
      slPassEnSwitch_RTranif1 = 680,
      slPassEnSwitch_Tranif0 = 681,
      slPassEnSwitch_Tranif1 = 682,
      slPassSwitch_RTran = 683,
      slPassSwitch_Tran = 684,
      slPath_declaration = 685,
      slPath_delay_expression = 686,
      slPath_delay_value = 687,
      slPattern = 688,
      slPort = 689,
      slPort_declaration = 690,
      slPort_expression = 691,
      slPort_reference = 692,
      slPortDir_Inout = 693,
      slPortDir_Inp = 694,
      slPortDir_Out = 695,
      slPortDir_Ref = 696,
      slPortInst = 697,
      slPound_delay = 698,
      slPound_delay_value = 699,
      slPragma_directive = 700,
      slPragma_expression = 701,
      slPragma_value = 702,
      slPrimary = 703,
      slPrimary_literal = 704,
      slPrimitive = 705,
      slPrimitiveInstance = 706,
      slPriority = 707,
      slProcedural_assertion_statement = 708,
      slProcedural_continuous_assignment = 709,
      slProcedural_timing_control = 710,
      slProcedural_timing_control_statement = 711,
      slProduction = 712,
      slProduction_item = 713,
      slProgram = 714,
      slProgram_ansi_header = 715,
      slProgram_declaration = 716,
      slProgram_generate_item = 717,
      slProgram_instantiation = 718,
      slProgram_item = 719,
      slProgram_nonansi_header = 720,
      slProperty_actual_arg = 721,
      slProperty_case_item = 722,
      slProperty_declaration = 723,
      slProperty_expr = 724,
      slProperty_formal_type = 725,
      slProperty_instance = 726,
      slProperty_lvar_port_direction = 727,
      slProperty_port_item = 728,
      slProperty_port_list = 729,
      slProperty_spec = 730,
      slPropQualifier_ClassItem = 731,
      slPropQualifier_Rand = 732,
      slPropQualifier_Randc = 733,
      slProtect_directive = 734,
      slProtected_directive = 735,
      slPs_identifier = 736,
      slPs_or_hierarchical_array_identifier = 737,
      slPs_or_hierarchical_identifier = 738,
      slPs_or_hierarchical_sequence_identifier = 739,
      slPs_type_identifier = 740,
      slPull_gate_instance = 741,
      slPulldownStrength_0 = 742,
      slPulldownStrength_01 = 743,
      slPulldownStrength_10 = 744,
      slPullupStrength_1 = 745,
      slPullupStrength_01 = 746,
      slPullupStrength_10 = 747,
      slPulse_control_specparam = 748,
      slPulsestyle_declaration = 749,
      slPure_keyword = 750,
      slPure_virtual_qualifier = 751,
      slQueue_dimension = 752,
      slRandcase_item = 753,
      slRandcase_statement = 754,
      slRandomize_call = 755,
      slRandomQualifier_Rand = 756,
      slRandomQualifier_RandC = 757,
      slRandsequence_statement = 758,
      slRange_expression = 759,
      slRange_list = 760,
      slRealConst = 761,
      slRef_declaration = 762,
      slReference_event = 763,
      slRelease = 764,
      slRemain_active_flag = 765,
      slRemove_gatename_directive = 766,
      slRemove_netname_directive = 767,
      slRepeat = 768,
      slRepeat_range = 769,
      slResetall_directive = 770,
      slRestrict_property_statement = 771,
      slReturnStmt = 772,
      slRs_case = 773,
      slRs_case_item = 774,
      slRs_code_block = 775,
      slRs_if_else = 776,
      slRs_prod = 777,
      slRs_production_list = 778,
      slRs_repeat = 779,
      slRs_rule = 780,
      slScalar_1TickB0 = 781,
      slScalar_1Tickb0 = 782,
      slScalar_1TickB1 = 783,
      slScalar_1Tickb1 = 784,
      slScalar_Integral = 785,
      slScalar_TickB0 = 786,
      slScalar_Tickb0 = 787,
      slScalar_TickB1 = 788,
      slScalar_Tickb1 = 789,
      slScalar_timing_check_condition = 790,
      slSelect = 791,
      slSelect_condition = 792,
      slSelect_expression = 793,
      slSeq_block = 794,
      slSeq_input_list = 795,
      slSeqFormatType_Data = 796,
      slSeqFormatType_Sequence = 797,
      slSeqFormatType_Untyped = 798,
      slSeqLvarPortDir_Inout = 799,
      slSeqLvarPortDir_Input = 800,
      slSeqLvarPortDir_Output = 801,
      slSequence_actual_arg = 802,
      slSequence_declaration = 803,
      slSequence_expr = 804,
      slSequence_instance = 805,
      slSequence_list_of_arguments = 806,
      slSequence_match_item = 807,
      slSequence_method_call = 808,
      slSequence_port_item = 809,
      slSequence_port_list = 810,
      slSequential_body = 811,
      slSequential_entry = 812,
      slShowcancelled_declaration = 813,
      slSigned_directive = 814,
      slSigning_Signed = 815,
      slSigning_Unsigned = 816,
      slSimple_args_macro_definition = 817,
      slSimple_args_macro_definition_in_macro_body = 818,
      slSimple_immediate_assert_statement = 819,
      slSimple_immediate_assertion_statement = 820,
      slSimple_immediate_assume_statement = 821,
      slSimple_immediate_cover_statement = 822,
      slSimple_macro_definition_body = 823,
      slSimple_macro_definition_body_in_macro_body = 824,
      slSimple_no_args_macro_definition = 825,
      slSimple_no_args_macro_definition_in_macro_body = 826,
      slSimple_path_declaration = 827,
      slSimple_type = 828,
      slSlice_size = 829,
      slSlline = 830,
      slSolve_before_list = 831,
      slSource_text = 832,
      slSpaces = 833,
      slSpecify_block = 834,
      slSpecify_input_terminal_descriptor = 835,
      slSpecify_item = 836,
      slSpecify_output_terminal_descriptor = 837,
      slSpecify_terminal_descriptor = 838,
      slSpecparam_assignment = 839,
      slSpecparam_declaration = 840,
      slStamptime_condition = 841,
      slStart_edge_offset = 842,
      slState_dependent_path_declaration = 843,
      slStatement = 844,
      slStatement_item = 845,
      slStatement_or_null = 846,
      slStream_concatenation = 847,
      slStream_expression = 848,
      slStream_operator = 849,
      slStreaming_concatenation = 850,
      slStrength0_Pull0 = 851,
      slStrength0_Strong0 = 852,
      slStrength0_Supply0 = 853,
      slStrength0_Weak0 = 854,
      slStrength1_Pull1 = 855,
      slStrength1_Strong1 = 856,
      slStrength1_Supply1 = 857,
      slStrength1_Weak1 = 858,
      slString = 859,
      slString_blob = 860,
      slString_type = 861,
      slString_value = 862,
      slStringConst = 863,
      slStringLiteral = 864,
      slStruct_keyword = 865,
      slStruct_union = 866,
      slStruct_union_member = 867,
      slStructure_pattern_key = 868,
      slSubroutine_call = 869,
      slSubroutine_call_statement = 870,
      slSuper_dot_new = 871,
      slSuper_keyword = 872,
      slSuppress_faults_directive = 873,
      slSurelog_macro_not_defined = 874,
      slSv_file_directive = 875,
      slSv_interface = 876,
      slSv_line_directive = 877,
      slSv_package = 878,
      slSystem_task = 879,
      slSystem_task_names = 880,
      slSystem_timing_check = 881,
      slT0x_path_delay_expression = 882,
      slT0z_path_delay_expression = 883,
      slT01_path_delay_expression = 884,
      slT1x_path_delay_expression = 885,
      slT1z_path_delay_expression = 886,
      slT10_path_delay_expression = 887,
      slT_path_delay_expression = 888,
      slTagged_keyword = 889,
      slTagged_union_expression = 890,
      slTask_body_declaration = 891,
      slTask_declaration = 892,
      slTask_name_decl = 893,
      slTask_prototype = 894,
      slText_blob = 895,
      slTf_item_declaration = 896,
      slTf_port_declaration = 897,
      slTf_port_item = 898,
      slTf_port_list = 899,
      slTfall_path_delay_expression = 900,
      slTfPortDir_ConstRef = 901,
      slTfPortDir_Inout = 902,
      slTfPortDir_Inp = 903,
      slTfPortDir_Out = 904,
      slTfPortDir_Ref = 905,
      slThis = 906,
      slThis_dot_super = 907,
      slThis_keyword = 908,
      slThreshold = 909,
      slTime_literal = 910,
      slTime_unit = 911,
      slTimescale_directive = 912,
      slTimeUnitsDecl_TimePrecision = 913,
      slTimeUnitsDecl_TimePrecisionTimeUnit = 914,
      slTimeUnitsDecl_TimeUnit = 915,
      slTimeUnitsDecl_TimeUnitDiv = 916,
      slTimeUnitsDecl_TimeUnitTimePrecision = 917,
      slTiming_check_condition = 918,
      slTiming_check_event = 919,
      slTiming_check_limit = 920,
      slTimingCheckEventControl_Edge = 921,
      slTimingCheckEventControl_Negedge = 922,
      slTimingCheckEventControl_Posedge = 923,
      slTop_directives = 924,
      slTop_level_library_rule = 925,
      slTop_level_rule = 926,
      slTrans_list = 927,
      slTrans_range_list = 928,
      slTrans_set = 929,
      slTrise_path_delay_expression = 930,
      slTx0_path_delay_expression = 931,
      slTx1_path_delay_expression = 932,
      slTxz_path_delay_expression = 933,
      slType_declaration = 934,
      slType_reference = 935,
      slTz0_path_delay_expression = 936,
      slTz1_path_delay_expression = 937,
      slTz_path_delay_expression = 938,
      slTzx_path_delay_expression = 939,
      slUdp_ansi_declaration = 940,
      slUdp_body = 941,
      slUdp_declaration = 942,
      slUdp_declaration_port_list = 943,
      slUdp_initial_statement = 944,
      slUdp_input_declaration = 945,
      slUdp_instance = 946,
      slUdp_instantiation = 947,
      slUdp_nonansi_declaration = 948,
      slUdp_output_declaration = 949,
      slUdp_port_declaration = 950,
      slUdp_port_list = 951,
      slUdp_reg_declaration = 952,
      slUnary_BitwAnd = 953,
      slUnary_BitwOr = 954,
      slUnary_BitwXor = 955,
      slUnary_Minus = 956,
      slUnary_Not = 957,
      slUnary_Plus = 958,
      slUnary_ReductNand = 959,
      slUnary_ReductNor = 960,
      slUnary_ReductXnor1 = 961,
      slUnary_ReductXnor2 = 962,
      slUnary_Tilda = 963,
      slUnaryModOp_BitwAnd = 964,
      slUnaryModOp_BitwOr = 965,
      slUnaryModOp_BitwXor = 966,
      slUnaryModOp_Not = 967,
      slUnaryModOp_ReductNand = 968,
      slUnaryModOp_ReductNor = 969,
      slUnaryModOp_ReductXNor1 = 970,
      slUnaryModOp_ReductXnor2 = 971,
      slUnaryModOp_Tilda = 972,
      slUnbased_unsized_literal = 973,
      slUnconnected_drive_directive = 974,
      slUndef_directive = 975,
      slUndefineall_directive = 976,
      slUnion_keyword = 977,
      slUnique = 978,
      slUnique0 = 979,
      slUnique_call = 980,
      slUnique_priority = 981,
      slUniqueness_constraint = 982,
      slUnpacked_dimension = 983,
      slUnsigned_directive = 984,
      slUnsized_dimension = 985,
      slUnterminated_string = 986,
      slUse_clause = 987,
      slUse_clause_config = 988,
      slUselib_directive = 989,
      slValue_range = 990,
      slVar_data_type = 991,
      slVariable_assignment = 992,
      slVariable_decl_assignment = 993,
      slVariable_declaration = 994,
      slVariable_dimension = 995,
      slVariable_lvalue = 996,
      slVariable_port_header = 997,
      slVariable_port_type = 998,
      slVirtual_interface_declaration = 999,
      slWait_statement = 1000,
      slWhile = 1001,
      slX = 1002,
      slXor_call = 1003,
      slZ = 1004,
};

#endif /* VOBJECTTYPES_H */

