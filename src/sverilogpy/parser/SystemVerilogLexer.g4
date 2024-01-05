//==================================================================================
// A python System Verilog Parser and AST
// Copyright (C) 2024  RISCY-Lib Contributors
//
// This library is free software; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public
// License as published by the Free Software Foundation; either
// version 2.1 of the License, or (at your option) any later version.
//
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public
// License along with this library; If not, see <https://www.gnu.org/licenses/>.
//==================================================================================

lexer grammar SystemVerilogLexer;

channels {
    COMMENTS,
    DIRECTIVES
}

//==================================================================================
// Default Mode
//==================================================================================

// Keywords
ACCEPT_ON           : 'accept_on'           ;
ALIAS               : 'alias'               ;
ALWAYS              : 'always'              ;
ALWAYS_COMB         : 'always_comb'         ;
ALWAYS_FF           : 'always_ff'           ;
ALWAYS_LATCH        : 'always_latch'        ;
AND                 : 'and'                 ;
ASSERT              : 'assert'              ;
ASSIGN              : 'assign'              ;
ASSUME              : 'assume'              ;
AUTOMATIC           : 'automatic'           ;
BEFORE              : 'before'              ;
BEGIN               : 'begin'               ;
BIND                : 'bind'                ;
BINS                : 'bins'                ;
BINSOF              : 'binsof'              ;
BIT                 : 'bit'                 ;
BREAK               : 'break'               ;
BUF                 : 'buf'                 ;
BUFIF0              : 'bufif0'              ;
BUFIF1              : 'bufif1'              ;
BYTE                : 'byte'                ;
CASE                : 'case'                ;
CASEX               : 'casex'               ;
CASEZ               : 'casez'               ;
CELL                : 'cell'                ;
CHANDLE             : 'chandle'             ;
CHECKER             : 'checker'             ;
CLASS               : 'class'               ;
CLOCKING            : 'clocking'            ;
CMOS                : 'cmos'                ;
CONFIG              : 'config'              ;
CONST               : 'const'               ;
CONSTRAINT          : 'constraint'          ;
CONTEXT             : 'context'             ;
CONTINUE            : 'continue'            ;
COVER               : 'cover'               ;
COVERGROUP          : 'covergroup'          ;
COVERPOINT          : 'coverpoint'          ;
CROSS               : 'cross'               ;
DEASSIGN            : 'deassign'            ;
DEFAULT             : 'default'             ;
DEFPARAM            : 'defparam'            ;
DESIGN              : 'design'              ;
DISABLE             : 'disable'             ;
DIST                : 'dist'                ;
DO                  : 'do'                  ;
DPI                 : '"DPI"'               ;
DPI_C               : '"DPI-C"'             ;
EDGE                : 'edge'                ;
ELSE                : 'else'                ;
END                 : 'end'                 ;
ENDCASE             : 'endcase'             ;
ENDCHECKER          : 'endchecker'          ;
ENDCLASS            : 'endclass'            ;
ENDCLOCKING         : 'endclocking'         ;
ENDCONFIG           : 'endconfig'           ;
ENDFUNCTION         : 'endfunction'         ;
ENDGENERATE         : 'endgenerate'         ;
ENDGROUP            : 'endgroup'            ;
ENDINTERFACE        : 'endinterface'        ;
ENDMODULE           : 'endmodule'           ;
ENDPACKAGE          : 'endpackage'          ;
ENDPRIMITIVE        : 'endprimitive'        ;
ENDPROGRAM          : 'endprogram'          ;
ENDPROPERTY         : 'endproperty'         ;
ENDSPECIFY          : 'endspecify'          ;
ENDSEQUENCE         : 'endsequence'         ;
ENDTABLE            : 'endtable'            ;
ENDTASK             : 'endtask'             ;
ENUM                : 'enum'                ;
EVENT               : 'event'               ;
EVENTUALLY          : 'eventually'          ;
EXPECT              : 'expect'              ;
EXPORT              : 'export'              ;
EXTENDS             : 'extends'             ;
EXTERN              : 'extern'              ;
FINAL               : 'final'               ;
FIRST_MATCH         : 'first_match'         ;
FOR                 : 'for'                 ;
FORCE               : 'force'               ;
FOREACH             : 'foreach'             ;
FOREVER             : 'forever'             ;
FORK                : 'fork'                ;
FORKJOIN            : 'forkjoin'            ;
FUNCTION            : 'function'            ;
GENERATE            : 'generate'            ;
GENVAR              : 'genvar'              ;
GLOBAL              : 'global'              ;
HIGHZ0              : 'highz0'              ;
HIGHZ1              : 'highz1'              ;
IF                  : 'if'                  ;
IFF                 : 'iff'                 ;
IFNONE              : 'ifnone'              ;
IGNORE_BINS         : 'ignore_bins'         ;
ILLEGAL_BINS        : 'illegal_bins'        ;
IMPLEMENTS          : 'implements'          ;
IMPLIES             : 'implies'             ;
IMPORT              : 'import'              ;
INCDIR              : 'incdir'              ;
DASH_INCDIR         : '-incdir'             ;
INCLUDE             : 'include'             -> pushMode(LIBRARY_MODE);
INITIAL             : 'initial'             ;
INOUT               : 'inout'               ;
INPUT               : 'input'               ;
INSIDE              : 'inside'              ;
INSTANCE            : 'instance'            ;
INT                 : 'int'                 ;
INTEGER             : 'integer'             ;
INTERCONNECT        : 'interconnect'        ;
INTERFACE           : 'interface'           ;
INTERSECT           : 'intersect'           ;
JOIN                : 'join'                ;
JOIN_ANY            : 'join_any'            ;
JOIN_NONE           : 'join_none'           ;
LARGE               : 'large'               ;
LET                 : 'let'                 ;
LIBLIST             : 'liblist'             ;
LIBRARY             : 'library'             -> pushMode(LIBRARY_MODE);
LOCAL               : 'local'               ;
LOCALPARAM          : 'localparam'          ;
LOGIC               : 'logic'               ;
LONGINT             : 'longint'             ;
MACROMODULE         : 'macromodule'         ;
MATCHES             : 'matches'             ;
MEDIUM              : 'medium'              ;
MODPORT             : 'modport'             ;
MODULE              : 'module'              ;
NAND                : 'nand'                ;
NEGEDGE             : 'negedge'             ;
NETTYPE             : 'nettype'             ;
NEW                 : 'new'                 ;
NEXTTIME            : 'nexttime'            ;
NMOS                : 'nmos'                ;
NOR                 : 'nor'                 ;
NOSHOWCANCELLED     : 'noshowcancelled'     ;
NOT                 : 'not'                 ;
NOTIF0              : 'notif0'              ;
NOTIF1              : 'notif1'              ;
NULL                : 'null'                ;
OPTION              : 'option'              ;
OR                  : 'or'                  ;
OUTPUT              : 'output'              ;
PACKAGE             : 'package'             ;
PACKED              : 'packed'              ;
PARAMETER           : 'parameter'           ;
PMOS                : 'pmos'                ;
POSEDGE             : 'posedge'             ;
PRIMITIVE           : 'primitive'           ;
PRIORITY            : 'priority'            ;
PROGRAM             : 'program'             ;
PROPERTY            : 'property'            ;
PROTECTED           : 'protected'           ;
PULL0               : 'pull0'               ;
PULL1               : 'pull1'               ;
PULLDOWN            : 'pulldown'            ;
PULLUP              : 'pullup'              ;
PULSESTYLE_ONDETECT : 'pulsestyle_ondetect' ;
PULSESTYLE_ONEVENT  : 'pulsestyle_onevent'  ;
PURE                : 'pure'                ;
RAND                : 'rand'                ;
RANDC               : 'randc'               ;
RANDCASE            : 'randcase'            ;
RANDOMIZE           : 'randomize'           ;
RANDSEQUENCE        : 'randsequence'        ;
RCMOS               : 'rcmos'               ;
REAL                : 'real'                ;
REALTIME            : 'realtime'            ;
REF                 : 'ref'                 ;
REG                 : 'reg'                 ;
REJECT_ON           : 'reject_on'           ;
RELEASE             : 'release'             ;
REPEAT              : 'repeat'              ;
RESTRICT            : 'restrict'            ;
RETURN              : 'return'              ;
RNMOS               : 'rnmos'               ;
RPMOS               : 'rpmos'               ;
RTRAN               : 'rtran'               ;
RTRANIF0            : 'rtranif0'            ;
RTRANIF1            : 'rtranif1'            ;
S_ALWAYS            : 's_always'            ;
S_EVENTUALLY        : 's_eventually'        ;
S_NEXTTIME          : 's_nexttime'          ;
S_UNTIL             : 's_until'             ;
S_UNTIL_WITH        : 's_until_with'        ;
SCALARED            : 'scalared'            ;
SEQUENCE            : 'sequence'            ;
SHORTINT            : 'shortint'            ;
SHORTREAL           : 'shortreal'           ;
SHOWCANCELLED       : 'showcancelled'       ;
SIGNED              : 'signed'              ;
SMALL               : 'small'               ;
SOFT                : 'soft'                ;
SOLVE               : 'solve'               ;
SPECIFY             : 'specify'             ;
SPECPARAM           : 'specparam'           ;
STATIC              : 'static'              ;
STD                 : 'std'                 ;
STRING              : 'string'              ;
STRONG              : 'strong'              ;
STRONG0             : 'strong0'             ;
STRONG1             : 'strong1'             ;
STRUCT              : 'struct'              ;
SUPER               : 'super'               ;
SUPPLY0             : 'supply0'             ;
SUPPLY1             : 'supply1'             ;
SYNC_ACCEPT_ON      : 'sync_accept_on'      ;
SYNC_REJECT_ON      : 'sync_reject_on'      ;
TABLE               : 'table'               -> pushMode(UDP_TABLE_MODE) ;
TAGGED              : 'tagged'              ;
TASK                : 'task'                ;
THIS                : 'this'                ;
THROUGHOUT          : 'throughout'          ;
TIME                : 'time'                ;
TIMEPRECISION       : 'timeprecision'       ;
TIMEUNIT            : 'timeunit'            ;
TRAN                : 'tran'                ;
TRANIF0             : 'tranif0'             ;
TRANIF1             : 'tranif1'             ;
TRI                 : 'tri'                 ;
TRI0                : 'tri0'                ;
TRI1                : 'tri1'                ;
TRIAND              : 'triand'              ;
TRIOR               : 'trior'               ;
TRIREG              : 'trireg'              ;
TYPE                : 'type'                ;
TYPE_OPTION         : 'type_option'         ;
TYPEDEF             : 'typedef'             ;
UNION               : 'union'               ;
UNIQUE              : 'unique'              ;
UNIQUE0             : 'unique0'             ;
UNSIGNED            : 'unsigned'            ;
UNTIL               : 'until'               ;
UNTIL_WITH          : 'until_with'          ;
UNTYPED             : 'untyped'             ;
USE                 : 'use'                 ;
UWIRE               : 'uwire'               ;
VAR                 : 'var'                 ;
VECTORED            : 'vectored'            ;
VIRTUAL             : 'virtual'             ;
VOID                : 'void'                ;
WAIT                : 'wait'                ;
WAIT_ORDER          : 'wait_order'          ;
WAND                : 'wand'                ;
WEAK                : 'weak'                ;
WEAK0               : 'weak0'               ;
WEAK1               : 'weak1'               ;
WHILE               : 'while'               ;
WILDCARD            : 'wildcard'            ;
WIRE                : 'wire'                ;
WITH                : 'with'                ;
WITHIN              : 'within'              ;
WOR                 : 'wor'                 ;
XNOR                : 'xnor'                ;
XOR                 : 'xor'                 ;

// Operators
PLUS          : '+'   ;
PLUSCOLON     : '+:'  ;
PLUSPLUS      : '++'  ;
MINUS         : '-'   ;
MINUSCOLON    : '-:'  ;
MINUSMINUS    : '--'  ;
STAR          : '*'   ;
SLASH         : '/'   ;
BSLASH        : '\\'  ;
PERCENT       : '%'   ;
EQ            : '='   ;
EQEQ          : '=='  ;
NEQ           : '!='  ;
EQEQEQ        : '===' ;
NEQEQ         : '!==' ;
EQEQQ         : '==?' ;
NEQQ          : '!=?' ;
LT            : '<'   ;
LTEQ          : '<='  ;
GT            : '>'   ;
GTEQ          : '>='  ;
LTLTEQ        : '<<=' ;
GTGTEQ        : '>>=' ;
LTLTLTEQ      : '<<<=';
GTGTGTEQ      : '>>>=';
CARROTEQ      : '^='  ;
PERCENTEQ     : '%='  ;
PLUSEQ        : '+=' ;
MINUSEQ       : '-=' ;
STAREQ        : '*=' ;
SLASHEQ       : '/=' ;
AMPEQ         : '&=' ;
PIPEEQ        : '|=' ;
AMPAMP        : '&&'  ;
AMPAMPAMP     : '&&&' ;
PIPEPIPE      : '||'  ;
STARSTAR      : '**'  ;
TILDEPIPE     : '~|'  ;
TILDEAMP      : '~&'  ;
EXCLAM        : '!'   ;
AMP           : '&'   ;
PIPE          : '|'   ;
CARROT        : '^'   ;
CARROTTILDE   : '^~'  ;
TILDECARROT   : '~^'  ;
GTGT          : '>>'  ;
LTLT          : '<<'  ;
GTGTGT        : '>>>' ;
LTLTLT        : '<<<' ;
RARROW        : '->'  ;
RARROWARROW   : '->>' ;
DARROW        : '<->' ;
TILDE         : '~'   ;
DOLLAR        : '$'   ;
STARGT        : '*>'  ;
EQGT          : '=>'  ;
COLONEQ       : ':='  ;
DOTSTAR       : '.*'  ;
PIPEARROW     : '|->' ;
PIPEEQARROW   : '|=>' ;
HASHMINUSHASH : '#-#' ;
HASHEQHASH    : '#=#' ;
COLONSLASH    : ':/'  ;
STARCOLONSTAR : '*::*' ;

APOSTROPHE   : '`'  ;

COLONCOLON  : '::'  ;
COLON       : ':'   ;
SEMI        : ';'   ;
COMMA       : ','   ;
DOT         : '.'   ;
QUESTION    : '?'   ;
QUOTE       : '\''  ;
DQUOTE      : '"'   ;
HASH        : '#'   ;
HASHHASH    : '##'  ;
AT          : '@'   ;
ATAT        : '@@'  ;

LPAREN      : '('   ;
RPAREN      : ')'   ;
LBRACK      : '['   ;
RBRACK      : ']'   ;
LBRACE      : '{'   ;
RBRACE      : '}'   ;

// System Tasks
ERROR_SYS_TASK      : '$error' ;
FATAL_SYS_TASK      : '$fatal' ;
INFO_SYS_TASK       : '$info' ;
WARNING_SYS_TASK    : '$warning' ;
SETUP_SYS_TASK      : '$setup' ;
HOLD_SYS_TASK       : '$hold' ;
SETUP_HOLD_SYS_TASK : '$setuphold' ;
RECOVERY_SYS_TASK   : '$recovery' ;
REMOVAL_SYS_TASK    : '$removal' ;
REC_REM_SYS_TASK    : '$recrem' ;
SKEW_SYS_TASK       : '$skew' ;
TIME_SKEW_SYS_TASK  : '$timeskew' ;
FULL_SKEW_SYS_TASK  : '$fullskew' ;
PERIOD_SYS_TASK     : '$period' ;
WIDTH_SYS_TASK      : '$width' ;
NO_CHANGE_SYS_TASK  : '$nochange' ;

// Heirachical Bases
ROOT_SYS_OBJ   : '$root' ;
UNIT_SYS_OBJ   : '$unit' ;

//==================================================================================
// Useful Fragments
//==================================================================================
fragment ASCII_ANY                    : [\u0000-\u007f];
fragment ASCII_NO_NEWLINE             : [\u0000-\u0008\u000b-\u000c\u000e-\u007f];
fragment ASCII_PRINTABLE_EXCEPT_SPACE : [\u0021-\u007e];

//==================================================================================
// Literals
//==================================================================================
fragment SIGN : [+\-] ;
fragment NON_ZERO_DECIMAL_DIGIT : [1-9] ;
fragment DECIMAL_DIGIT : [0-9] ;
fragment NON_ZERO_UNSIGNED_NUMBER : NON_ZERO_DECIMAL_DIGIT ('_' | DECIMAL_DIGIT)* ;

UNSIGNED_NUMBER : DECIMAL_DIGIT ('_' | DECIMAL_DIGIT)* ;

BINARY_BASE  : '\'' [sS]? [bB]  -> pushMode(BINARY_NUM_MODE)  ;
DECIMAL_BASE : '\'' [sS]? [dD]  -> pushMode(DECIMAL_NUM_MODE) ;
OCTAL_BASE   : '\'' [sS]? [oO]  -> pushMode(OCTAL_NUM_MODE)   ;
HEX_BASE     : '\'' [sS]? [hH]  -> pushMode(HEX_NUM_MODE)     ;

// Real Number processing
fragment FIXED_POINT_NUMBER : UNSIGNED_NUMBER '.' UNSIGNED_NUMBER ;
REAL_NUMBER : FIXED_POINT_NUMBER | UNSIGNED_NUMBER ('.' UNSIGNED_NUMBER)? [eE] SIGN? UNSIGNED_NUMBER ;

// Unsized literals
UNBASED_UNSIZED_LITERAL : '\'' [01xXzZ] ;

// Strings
fragment ESC_SEQ : '\\' . ;
STRING_LITERAL : '"' ( ~["\\] | ESC_SEQ )* '"' ;

// Time Units
fragment TIME_UNIT : [munpf]? 's' ;
TIME_LITERAL : ( UNSIGNED_NUMBER | FIXED_POINT_NUMBER ) TIME_UNIT ;


//==================================================================================
// Identifiers
//==================================================================================
ESCAPED_IDENTIFIER : '\\' ASCII_PRINTABLE_EXCEPT_SPACE* WHITE_SPACE;
SIMPLE_IDENTIFIER : [a-zA-Z_] [a-zA-Z0-9$_]* ;
SYSTEM_TF_IDENTIFIER : '$' [a-zA-Z0-9$_]+ ;

//==================================================================================
// Comments
//==================================================================================
BLOCK_COMMENT  : '/*' ASCII_ANY*? '*/' -> channel(COMMENTS) ;
INLINE_COMMENT : '//' ASCII_NO_NEWLINE* -> channel(COMMENTS) ;

//==================================================================================
// Misc
//==================================================================================
WHITE_SPACE : [ \t\r\n]+ -> channel(HIDDEN) ;
ZERO_OR_ONE_Z_OR_X : [01][zZxX] ;

ONE_STEP        : '1step' ;
PATH_PULSE      : 'PATHPULSE$' ;
OPTION_DOT      : 'option.' ;
TYPE_OPTION_DOT : 'type_option.' ;
SAMPLE          : 'sample' ;

//==================================================================================
// Binary number processing
//==================================================================================
mode BINARY_NUM_MODE;
BINARY_VALUE : [xXzZ01?] ('_' | [xXzZ01?])* -> popMode ;

//==================================================================================
// Decimal number processing
//==================================================================================
mode DECIMAL_NUM_MODE;
DECIMAL_VALUE     : UNSIGNED_NUMBER -> type(UNSIGNED_NUMBER), popMode;
X_OR_Z_UNDERSCORE : [xXzZ?] '_'*    -> popMode;

//==================================================================================
// Octal Number processing
//==================================================================================
mode OCTAL_NUM_MODE;
OCTAL_VALUE : [xXzZ0-7?] ('_' | [xXz0-7?])* -> popMode ;

//==================================================================================
// Hex Number processing
//==================================================================================
mode HEX_NUM_MODE;
HEX_VALUE : [xXzZ0-9a-fA-F?] ('_' | [0-9a-fA-F?])* -> popMode ;

//==================================================================================
// UDP Table Mode
//==================================================================================
mode UDP_TABLE_MODE;

OUTPUT_SYMBOL : [01xzX] ;
EXTRA_LEVEL_SYMBOL : [?bB] ;
EDGE_SYMBOL : [rRfFpPnN*] ;

UDP_END_TABLE : 'endtable' -> type(ENDTABLE), popMode ;

//==================================================================================
// Library Mode
//==================================================================================
mode LIBRARY_MODE;

// File path Information
fragment ASCII_PRINTABLE          : [\u0020-\u007e];
fragment ESC_ASCII_PRINTABLE      : '\\' ASCII_PRINTABLE;
FILE_PATH_SPEC : ( [a-zA-Z0-9_./] | ESC_ASCII_PRINTABLE)+ | STRING_LITERAL ;
