%{
    int token( int );
%}

DIGITO  [0-9]
LETRA   [A-Za-z_]
INT     {DIGITO}+
DOUBLE  {DIGITO}+("."{DIGITO}+)?
ID      {LETRA}({LETRA}|{DIGITO})*

STRING  \"(\"\"|\\\"|[^\n\"])*\"

%%

"\t"       { coluna += 4; }
" "        { coluna++; }
"\n"	   { linha++; coluna = 1; }

{INT} 	   { return token( CINT ); }
{DOUBLE}   { return token( CDOUBLE ); }

">="       { return TK_MAIG; }
"<="       { return TK_MEIG; }
"=="       { return TK_IG; }
"!="       { return TK_DIF; }
"&&"       { return TK_AND; }
"||"       { return TK_OR; }

"var"	   { return token( TK_VAR ); }
"int"      { return token( TK_INT ); }
"char"     { return token( TK_CHAR ); }
"string"   { return token( TK_STRING ); }
"boolean"  { return token( TK_BOOLEAN ); }
"real"     { return token( TK_REAL ); }
"console"  { return token( TK_CONSOLE ); }
">>"       { return token( TK_SHIFTR ); }
"<<"       { return token( TK_SHIFTL ); }
"for"      { return token( TK_FOR ); }
"in"       { return token( TK_IN ); }
".."       { return token( TK_2PT ); }
"if"       { return token( TK_IF ); }
"then"     { return token( TK_THEN ); }
"else"     { return token( TK_ELSE ); }
"endl"     { return token( TK_ENDL ); }
"begin"    { return token( TK_BEGIN ); }
"end"      { return token( TK_END ); }

{STRING}   { return token( CSTRING ); }

{ID}       { return token( TK_ID ); }

.          { return token( *yytext ); }

%%

int token( int tk ) {
    yylval.v = yytext;
    coluna += strlen(yytext);
    yylval.linha = linha;
    yylval.c = "";
    return tk;
}