#include "type.h"

#define R(production_rule) #production_rule//case rule: return #rule


char *print_rule( enum prod_rule r ) {
    
    switch(r) {
        R(root);
        R(DESTRUCTOR);
        R(NESTED_UNQUALIFIED);
        R(NESTED_TEMPLATE);
        R(NESTED_CLASS_SPEC);
        R(NESTED_NAMESPACE_SPEC);
        R(NESTED_CLASS);
        R(NESTED_NAMESPACE);
        R(POSTFIX_ARRAY);
        R(POSTFIX_CALL);
        R(POSTFIX_CAST);
        R(POSTFIX_DOT);
        R(POSTFIX_ARROW);
        R(POSTFIX_PLUSPLUS);
        R(POSTFIX_MINUSMINUS);
        R(EXPRESSION_ASSIGN);
        R(UNARY_PLUSPLUS);
        R(UNARY_MINUSMINUS);
        R(UNARY_STAR);
        R(UNARY_AND);
        R(UNARY_CAST);
        R(UNARY_SIZEOF_EXPR);
        R(UNARY_SIZEOF_TYPE);
        R(NEW_TYPE);
        R(NEW_TYPE_CC);
        R(NEW_PARAM);
        R(NEW_PARAM_CC);
        R(NEW_TYPE_ID);
        R(NEW_DECL);
        R(DIRECT_NEW);
        R(DELETE_EXPR);
        R(DELETE_CC_EXPR);
        R(DELETE_BRACKET_EXPR);
        R(DELETE_CC_BRACKET_EXPR);
        R(CAST_EXPR);
        R(PM_DOTSTAR);
        R(PM_ARROWSTAR);
        R(MULT_STAR);
        R(MULT_DIV);
        R(MULT_PERC);
        R(ADD_PLUS);
        R(ADD_MINUS);
        R(SHIFT_EXPR_SL);
        R(SHIFT_EXPR_SR);
        R(RELATION_LT);
        R(RELATION_GT);
        R(RELATION_LTEQ);
        R(RELATION_GTEQ);
        R(EQUAL);
        R(NEQUAL);
        R(AND_EQUAL);
        R(EXLUSIVE_OR);
        R(INCLUSIVE_OR);
        R(LOGICAL_AND);
        R(LOGICAL_OR);
        R(CONDITIONAL_OR);
        R(ASSIGNMENT_EXPR);
        R(EXPRESSION);
        R(COMPOUND);
        R(STATEMENT_LABELED);
        R(STATEMENT_CASE);
        R(STATEMENT_DEFAULT);
        R(STATEMENT_SEQ);
        R(STATEMENT_IF);
        R(STATEMENT_IF_ELSE);
        R(STATEMENT_SWITCH);
        R(CONDITION);
        R(WHILE_STATEMENT);
        R(DOWHILE_STATEMENT);
        R(FOR_STATEMENT);
        R(RETURN_STATEMENT);
        R(GOTO_STATEMENT);
        R(DECL_SEQ);
        R(DECL_SPEC_INIT);
        R(DECL_SPEC_SEQ);
        R(SIMPLE_TYPE_NESTED);
        R(SIMPLE_TYPE_CC);
        R(ELAB_TYPE_CC_NESTED);
        R(ELAB_TYPE_CC);
        R(ELAB_TYPE_CC_ENUM_NESTED);
        R(ELAB_TYPE_CC_ENUM);
        R(ELAB_TYPE_ENUM);
        R(ELAB_TYPENAME);
        R(ELAB_TYPENAME_ARGS);
        R(ENUM_SPEC);
        R(ENUM_LIST);
        R(ENUM_DEF);
        R(ORIG_NS_DEF);
        R(EXTEN_NS_DEF);
        R(UNNAMED_NS_DEF);
        R(QUAL_CC_NS_NESTED);
        R(QUAL_CC_NS);
        R(QUAL_NS);
        R(USING_DECL_1);
        R(USING_DECL_2);
        R(USING_DECL_3);
        R(USING_DECL_4);
        R(USING_DECL_5);
        R(USING_DIREC_1);
        R(USING_DIREC_2);
        R(USING_DIREC_3);
        R(USING_DIREC_4);
        R(INITR_LIST);
        R(INIT_DECL);
        R(INIT_PTR);
        R(DIRECT_DECL1);
        R(DIRECT_DECL2);
        R(DIRECT_DECL3);
        R(DIRECT_DECL4);
        R(DIR_CLASS_DECL1);
        R(DIR_CLASS_DECL2);
        R(DIR_CLASS_DECL3);
        R(DIRECT_DECL5);
        R(PTR_OP1);
        R(PTR_OP2);
        R(PTR_OP3);
        R(PTR_OP4);
        R(CV_SEQ);
        R(DECL_ID);
        R(DECL_IDN);
        R(DECL_TN);
        R(TYPE_ID);
        R(TYPE_SPEC);
        R(ABS_DECL);
        R(DIR_ABS1);
        R(DIR_ABS2);
        R(DIR_ABS3);
        R(DIR_ABS4);
        R(DIR_ABS5);
        R(PARAM_DECL_LIST);
        R(PARAM_DECL1);
        R(PARAM_DECL2);
        R(PARAM_DECL3);
        R(PARAM_DECL4);
        R(FUNC_DEF1);
        R(FUNC_DEF2);
        R(FUNC_DEF3);
        R(FUNC_DEF4);
        R(INIT);
        R(INIT_CLAUSE);
        R(INIT_LIST);
        R(CLASS_SPEC);
        R(CLASS_HEAD1);
        R(CLASS_HEAD2);
        R(CLASS_HEAD3);
        R(MEMBER_SPEC);
        R(ACCESS_SPEC);
        R(MEMBER_DECL1);
        R(MEMBER_DECL2);
        R(MEMBER_DECL_LIST);
        R(MEMBER_DECLARATOR1);
        R(MEMBER_DECLARATOR2);
        R(MEMBER_DECLARATOR3);
        R(CONST_INIT);
        R(BASE_CLAUSE);
        R(BASE_SPEC_LIST);
        R(BASE_SPEC1);
        R(BASE_SPEC2);
        R(BASE_SPEC3);
        R(BASE_SPEC4);
        R(BASE_SPEC5);
        R(CONV_FUNC);
        R(CONV_TYPE);
        R(CONV_DECL);
        R(CTOR_INIT);
        R(MEM_INIT_LIST);
        R(MEM_INIT);
        R(MEM_INIT_ID1);
        R(MEM_INIT_ID2);
        R(MEM_INIT_ID3);
        R(OP_FUNC);
        R(PARENS);
        R(BRACKETS);
        R(TYPE_PARAM1);
        R(TYPE_PARAM2);
        R(NEW_ARRAY);
        R(DELETE_ARRAY);
        R(TRY_BLOCK);
        R(FUNC_TRY_BLOCK);
        R(HANDLER_SEQ);
        R(HANDLER);
        R(EXCEP_DECL1)
        R(EXCEP_DECL2);
        R(THROW_EXPR);
        R(EXCEP_SPEC);
        R(TYPE_ID_LIST);
        default: return "Rule Not Found";
    }
}