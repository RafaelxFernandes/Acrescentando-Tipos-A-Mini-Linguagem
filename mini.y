%{
    #include <string>
    #include <stdio.h>
    #include <stdlib.h>
    #include <iostream>
    #include <vector>
    #include <map>
    #include <sstream>
    
    using namespace std;
    
    extern "C" int yylex();
    
    #define YYSTYPE Atributos

    typedef string Tipo;
    
    int linha = 1;
    int coluna = 1;
    
    struct Atributos {
        string v;
        string c;
        Tipo t;
        int linha;
    };

    vector<string> variaveis;

    map<string, Tipo> tsVar;    

    map<string, Tipo> resOpr = {
        { "+II", "I" }, { "+ID", "D" }, { "+DI", "D" }, { "+DD", "D" },
        { "+CC", "S" }, { "+CS", "S" }, { "+SC", "S" }, { "+SS", "S" },
        { "+CI", "I" }, { "+IC", "I" }, { "+IS", "S" }, { "+SI", "S" },
        { "-II", "I" }, { "-ID", "D" }, { "-DI", "D" }, { "-DD", "D" },
        { "-CC", "S" }, { "-CS", "S" }, { "-SC", "S" }, { "-SS", "S" },
        { "-CI", "I" }, { "-IC", "I" },
        { "*II", "I" }, { "*ID", "D" }, { "*DI", "D" }, { "*DD", "D" },
        { "*CC", "S" }, { "*CS", "S" }, { "*SC", "S" }, { "*SS", "S" },
        { "*CI", "I" }, { "*IC", "I" },
        { "/II", "I" }, { "/ID", "D" }, { "/DI", "D" }, { "/DD", "D" },
        { "/CC", "S" }, { "/CS", "S" }, { "/SC", "S" }, { "/SS", "S" },
        { "/CI", "I" }, { "/IC", "I" },
        { "%II", "I" }, { "%ID", "D" }, { "%DI", "D" }, { "%DD", "D" },
        { "%CC", "S" }, { "%CS", "S" }, { "%SC", "S" }, { "%SS", "S" },
        { "%CI", "I" }, { "%IC", "I" },
        { "<II", "B" }, { "<ID", "B" }, { "<DI", "B" }, { "<DD", "B" },
        { "<CC", "B" }, { "<CS", "B" }, { "<SC", "B" }, { "<SS", "B" },
        { "<IC", "B" }, { "<CI", "B" },
        { "<BB", "B" },
        { "<=II", "B" }, { "<=ID", "B" }, { "<=DI", "B" }, { "<=DD", "B" },
        { "<=CC", "B" }, { "<=CS", "B" }, { "<=SC", "B" }, { "<=SS", "B" },
        { "<=IC", "B" }, { "<=CI", "B" },
        { "<=BB", "B" },
        { ">II", "B" }, { ">ID", "B" }, { ">DI", "B" }, { ">DD", "B" },
        { ">CC", "B" }, { ">CS", "B" }, { ">SC", "B" }, { ">SS", "B" },
        { ">IC", "B" }, { ">CI", "B" },
        { ">BB", "B" },
        { ">=II", "B" }, { ">=ID", "B" }, { ">=DI", "B" }, { ">=DD", "B" },
        { ">=CC", "B" }, { ">=CS", "B" }, { ">=SC", "B" }, { ">=SS", "B" },
        { ">=IC", "B" }, { ">=CI", "B" },
        { ">=BB", "B" },
        { "==II", "B" }, { "==ID", "B" }, { "==DI", "B" }, { "==DD", "B" },
        { "==CC", "B" }, { "==CS", "B" }, { "==SC", "B" }, { "==SS", "B" },
        { "==IC", "B" }, { "==CI", "B" },
        { "==BB", "B" },
        { "<>II", "B" }, { "<>ID", "B" }, { "<>DI", "B" }, { "<>DD", "B" },
        { "<>CC", "B" }, { "<>CS", "B" }, { "<>SC", "B" }, { "<>SS", "B" },
        { "<>IC", "B" }, { "<>CI", "B" },
        { "<>BB", "B" }
    };

    map<Tipo, int> nVar;

    int yylex();
    int yyparse();
    
    void yyerror(const char *);
    
    void geraPrograma(Atributos s1);
    
    string concatenaVars(Atributos s1, Atributos s3);
    string geraVarComArray(Atributos s1, Atributos s3);
    string geraTemp(Tipo t);
    string declaraTemp();
    string geraEntrada(Atributos s2);
    string geraSaida(Atributos s2);
    string geraIf(Atributos s2, Atributos s4, Atributos s6);
    string geraIfSemElse(Atributos s2, Atributos s4);
    string geraFor(Atributos s2, Atributos s5, Atributos s7, Atributos s9);
    string toString(int n);
    string guardaTipo(Tipo t);
    string comparaStringString(string param1, string param2, string operador, string res);
    string comparaCharString(string param1, string param2, string operador, string res);
    string concatenaCharString(string param1, string param2, string res);
    string imprimeString();

    Atributos declaraVariavelComTipo(Atributos s1, Atributos s2);
    Atributos declaraRecursivoVariavelComTipo(Atributos s1, Atributos s2, Atributos s3);
    Atributos geraAtribuicao(Atributos s1, Atributos s3);
    Atributos geraAtribuicaoComArray(Atributos s1, Atributos s3, Atributos s6);
    Atributos geraEntradaComArray(Atributos s2, Atributos s4);
    Atributos geraValorComArray(Atributos s1, Atributos s3); 
    Atributos geraCodigoComparacao(Atributos s1, string s2, Atributos s3);
    Atributos geraCodigoOperador(Atributos a, string operador, Atributos b);

    Tipo buscaTipoVar(string s);
    Tipo buscaTipoOperacao(Tipo a, string operador, Tipo b);
    Tipo traduzTipo(Tipo t);

%}

%start S

%token CINT CDOUBLE TK_ID TK_VAR TK_CONSOLE TK_SHIFTR TK_SHIFTL TK_ENDL
%token TK_FOR TK_IN TK_2PT TK_IF TK_THEN TK_ELSE TK_BEGIN TK_END 
%token TK_MAIG TK_MEIG TK_IG TK_DIF TK_AND TK_OR TK_NOT
%token TK_INT TK_CHAR TK_STRING TK_BOOLEAN TK_REAL CCHAR CSTRING 

%right "not"
%nonassoc "and" "or"
%nonassoc '<' '>' "<=" "=>"  "==" "!="
%left '+' '-'
%left '*' '/' '%'

%%

S           : DECLVAR CMDS                                      { $$.c = $1.c + imprimeString() + $2.c; $$.v = $1.v; geraPrograma($$); }
            ;  

CMDS        : CMDS CMD                                          { $$.c = $1.c + $2.c; $$.v = $1.v; }
            | CMD       
            ;
    
CMD         : ENTRADA
            | SAIDA
            | ATR
            | FOR
            | IF
            ;

CMDX        : ENTRADA
            | SAIDA
            | ATR
            | FOR
            | IF
            ;

BLOCO       : TK_BEGIN CMDS TK_END                              { $$.c = $2.c; }
            ;
    
DECLVAR     : DECLVAR TIPO VARS ';'                             { $$ = declaraRecursivoVariavelComTipo($1, $2, $3); }
            | TIPO VARS ';'                                     { $$ = declaraVariavelComTipo($1, $2); }
            ;

TIPO        : TK_INT                                            { $$.c = "int"; $$.v = $1.v; $$.t = "I"; }
            | TK_CHAR                                           { $$.c = "char"; $$.v = $1.v; $$.t = "C"; }
            | TK_STRING                                         { $$.c = "string"; $$.v = $1.v; $$.t = "S"; }
            | TK_BOOLEAN                                        { $$.c = "int"; $$.v = $1.v; $$.t = "B"; }
            | TK_REAL                                           { $$.c = "double"; $$.v = $1.v; $$.t = "D"; }
            ;
    
VARS        : VARS ',' VAR                                      { $$.c = concatenaVars($1, $3); $$.v = $1.v; }
            | VAR 
            ;
        
VAR         : TK_ID '[' CINT ']'                                { $$.c = geraVarComArray($1, $3); variaveis.push_back($1.v); }
            | TK_ID                                             { $$.c = $1.v; variaveis.push_back($1.v); }
            ;
        
ENTRADA     : TK_CONSOLE ENTRADAS                               { $$.c = $2.c; }    
            ;

ENTRADAS    : TK_SHIFTR TK_ID ';'                               { $$.c = geraEntrada($2); }
            | TK_SHIFTR TK_ID ENTRADAS                          { $$.c = geraEntrada($2) + $3.c; } 
            | TK_SHIFTR TK_ID '[' E ']' ';'                     { $$ = geraEntradaComArray($2, $4); } 
            | TK_SHIFTR TK_ID '[' E ']' ENTRADAS                { $$ = geraEntradaComArray($2, $4); $$.c += $5.c; }
            ;
  
SAIDA       : TK_CONSOLE SAIDAS                                 { $$.c = $2.c; }
            ;

SAIDAS      : TK_SHIFTL E ';'                                   { $$.c = geraSaida($2); }
            | TK_SHIFTL E TK_ENDL ';'                           { $$.c = geraSaida($2); }
            | TK_SHIFTL E SAIDAS                                { $$.c = geraSaida($2) + $3.c; }
            | TK_SHIFTL TK_ENDL ';'                             { $$.c = "cout << endl;\n "; }
            |                                                   { $$.c = ""; $$.v = ""; }
            ;

FOR         : TK_FOR TK_ID TK_IN '[' E TK_2PT E ']' BLOCO ';'   { $$.c = geraFor($2, $5, $7, $9); }
            | TK_FOR TK_ID TK_IN '[' E TK_2PT E ']' CMDX        { $$.c = geraFor($2, $5, $7, $9); }   
            ;
            
IF          : TK_IF R TK_THEN BLOCO TK_ELSE BLOCO ';'           { $$.c = geraIf($2, $4, $6); }
            | TK_IF R TK_THEN BLOCO TK_ELSE CMD                 { $$.c = geraIf($2, $4, $6); }
            | TK_IF R TK_THEN BLOCO ';'                         { $$.c = geraIfSemElse($2, $4); }
            | TK_IF R TK_THEN CMD                               { $$.c = geraIfSemElse($2, $4); }
            ;
  
ATR         : TK_ID '=' E ';'                                   { $$ = geraAtribuicao($1, $3) ; }
            | TK_ID '[' E ']' '=' E ';'                         { $$ = geraAtribuicaoComArray($1, $3, $6); }
            ;
  
E           : E '+' E                                           { $$ = geraCodigoOperador($1, $2.v, $3); }
            | E '-' E                                           { $$ = geraCodigoOperador($1, $2.v, $3); }
            | E '*' E                                           { $$ = geraCodigoOperador($1, $2.v, $3); }
            | E '/' E                                           { $$ = geraCodigoOperador($1, $2.v, $3); }
            | E '%' E                                           { $$ = geraCodigoOperador($1, $2.v, $3); }
            | V
            ;

R           : E
            | C 
            | L
            ;

C           : E '<' E                                           { $$ = geraCodigoOperador($1, $2.v, $3); }
            | E '>' E                                           { $$ = geraCodigoOperador($1, $2.v, $3); }
            | E TK_MAIG E                                       { $$ = geraCodigoOperador($1, ">=", $3); }
            | E TK_MEIG E                                       { $$ = geraCodigoOperador($1, "<=", $3); }
            | E TK_IG E                                         { $$ = geraCodigoOperador($1, "==", $3); }
            | E TK_DIF E                                        { $$ = geraCodigoOperador($1, "<>", $3); }
            ;

L           : C TK_AND C                                        { $$ = geraCodigoComparacao($1, "and", $3); }
            | C TK_OR C                                         { $$ = geraCodigoComparacao($1, "or", $3); }
            ;

V           : TK_ID '[' E ']'                                   { $$ = geraValorComArray($1, $3); }
            | TK_ID                                             { $$.c = ""; $$.v = $1.v; $$.t = buscaTipoVar($1.v); }
            | CINT                                              { $$.c = ""; $$.v = $1.v; $$.t = "I"; }
            | CDOUBLE                                           { $$.c = ""; $$.v = $1.v; $$.t = "D"; }
            | CSTRING                                           { $$.c = ""; $$.v = $1.v; $$.t = "S"; }
            | CCHAR                                             { $$.c = ""; $$.v = $1.v; $$.t = "C"; }
            | '(' E ')'                                         { $$ = $2; }
            ;

%%

#include "lex.yy.c"

string cabecalho = 
"#include <iostream>\n" 
"#include <string.h>\n\n"
"using namespace std;\n\n"
"int main() {\n";

string fim_programa = 
"  return 0;\n"
"}";

void yyerror( const char* st ){
    puts( st ); 
    
    printf( "Linha %d, coluna %d, proximo a: %s\n", linha, coluna, yytext );
    
    exit( 0 );
}

void geraPrograma(Atributos s1){
  cout << cabecalho
       << declaraTemp()
       << s1.c 
       << fim_programa
       << endl;
}

string concatenaVars(Atributos s1, Atributos s3){
    Atributos gerado;
    
    gerado.c = s1.c + ", " + s3.c;

    return gerado.c;
}

string geraVarComArray(Atributos s1, Atributos s3){
    Atributos gerado;
    
    gerado.c = s1.v + "[" + s3.v + "]";
    
    return gerado.c;
}

string geraTemp(Tipo t){    
    string nome = " temp_" + t + toString( nVar[t]++ );

    return nome;
}

string declaraTemp() {
    string saida;
    string res;
    string nomeTipo;

    for( auto p : nVar ){
        for( int i = 0; i < p.second; i ++ ) {
            if(p.first == "I"){
                nomeTipo = "int";
                saida = nomeTipo + " temp_" + p.first + toString( i ) + ";\n";
            } else if(p.first == "D"){
                nomeTipo = "double";
                saida = nomeTipo + " temp_" + p.first + toString( i ) + ";\n";
            } else if(p.first == "S"){
                nomeTipo = "char";
                saida = nomeTipo + " temp_" + p.first + toString( i ) + "[257];\n";
            } else if(p.first == "C"){
                nomeTipo = "char";
                saida = nomeTipo + " temp_" + p.first + toString( i ) + ";\n";
            } else if(p.first == "B"){
                nomeTipo = "int";
                saida = nomeTipo + " temp_" + p.first + toString( i ) + ";\n";
            }
            
            res += saida;
        }

    }

    return res;
}


string geraEntrada(Atributos s2){
    Atributos gerado;
    
    gerado.c = "cin >> " + s2.v + ";\n";
    
    return gerado.c;
}

string geraSaida(Atributos s2){
    Atributos gerado;
    
    gerado.c = s2.c + "cout << " + s2.v + ";\n";
    
    return gerado.c;
}

string geraIf(Atributos s2, Atributos s4, Atributos s6){
    Atributos gerado;
    
    gerado.c = s2.c
                + "if (" + s2.v + ") goto meio;" + ";\n"
                + s6.c + "goto fim;\n"
                + "meio:\n" + s4.c
                + "fim:\n";
    
    return gerado.c;
}

string geraIfSemElse(Atributos s2, Atributos s4){
    Atributos gerado;
    
    gerado.c =  s2.c
                + "if (" + s2.v + ") goto meio;\n"
                + "goto fim;\n"
                + "meio:\n" + s4.c
                + "fim:\n";
    
    return gerado.c;
}

string geraFor(Atributos s2, Atributos s5, Atributos s7, Atributos s9){
    Atributos gerado;
    
    static int nVarCont = 0;
    
    string cond = geraTemp("I");
    
    gerado.c = s5.c + s7.c + s2.v + " = " + s5.v + ";\n"
                + "meio" + to_string(nVarCont++) + ": \n" + cond + " = " + s2.v + " > " + s7.v + ";\n"
                + "if( " + cond + " ) goto fim" + to_string(nVarCont) + ";\n"
                + s9.c + s2.v + " = " + s2.v + " + 1;\n"
                + "goto meio" + to_string(nVarCont) + ";\n"
                + "fim" + to_string(nVarCont) + ": \n";
    
    return gerado.c;
}

Atributos geraAtribuicao(Atributos s1, Atributos s3){
    Atributos gerado;
    
    gerado.v = s1.v;
    
    gerado.c = s1.c + s3.c + " " + gerado.v + " = " + s3.v + ";\n";

    if(s3.t == "S"){
        gerado.c = s1.c + s3.c + "strncpy(" + s1.v + ", "  + s3.v  + ", 255);\n";
    }
    
    return gerado;
}

Atributos geraAtribuicaoComArray(Atributos s1, Atributos s3, Atributos s6){
    Atributos gerado;
    
    gerado.v = s6.v;

    gerado.c = s3.c + s6.c + s1.v + "[" + s3.v + "] = " + s6.v  + ";\n";
    
    return gerado;
}

Atributos geraEntradaComArray(Atributos s2, Atributos s4){
    Atributos gerado;
    
    gerado.v = geraTemp("I");
    
    gerado.c = s4.c + "cin >> " + gerado.v + ";\n" + s2.v + "[" + s4.v + "] = " + gerado.v + ";\n";
    
    return gerado;
}

Atributos geraValorComArray(Atributos s1, Atributos s3){
    Atributos gerado;
    
    gerado.v = geraTemp("I");
    
    gerado.c = s3.c + gerado.v + " = " + s1.v + "[" + s3.v + "];\n";
    
    return gerado;
}

Atributos geraCodigoComparacao(Atributos param1, string opr, Atributos param2){
    Atributos gerado;

    gerado.v = geraTemp("I");
    
    gerado.c = param1.c + param2.c + gerado.v + " = " + param1.v + " " + opr + " " + param2.v + ";\n";
    
    return gerado;
}

//Funcoes acrescentadas para o 'Acrescentando tipos a mini linguagem'
string toString(int n){
    char buf[20] = "";

    sprintf(buf, "%d", n);

    return buf;
}

string guardaTipo(Tipo t){
    for(auto p = variaveis.begin(); p != variaveis.end(); ++p){
        tsVar[*p] = t;
    }

    variaveis.clear();

    return t;
}

string comparaStringString(string param1, string param2, string operador, string res){    
    string compVar = geraTemp("I");

    string comp = compVar + " = strncmp(" + param1 + ", " + param2 + ", 255);\n";

    string saida = res + " = " + compVar + " " + operador + " 0;\n";

    return comp + saida;
}

string comparaCharString(string param1, string param2, string operador, string res){
    string compVar = geraTemp("I");
    string charVar = geraTemp("S");

    string charParaString = charVar + "[0] = " + param1 + ";\n" + charVar + "[1] = 0;\n";

    string comp = compVar + " = strncmp(" + charVar + ", " + param2 + ", 255);\n";

    string saida = res + " = " + compVar + " " + operador + " 0;\n";

    return charParaString + comp + saida;
}

string concatenaCharString(string param1, string param2, string res){
    string temp = geraTemp("I");

    string charParaString = res + "[0] = " + param1 + ";\n" + res + "[1] = 0;\n";

    string cat = "strncat(" + res + ", " + param2 + ", 255);\n";

    return charParaString + cat;
}

string imprimeString(){

    string saida = "";

    for(auto p : tsVar){
        if(p.second == "S") {
            saida += p.first + "[255] = 0;\n";
        }
    }
    
    return saida;
}

Atributos geraCodigoOperador(Atributos a, string operador, Atributos b){
    Atributos gerado;

    string temp = geraTemp("I");
    string temp2 = geraTemp("I");
    
    gerado.t = buscaTipoOperacao(a.t, operador, b.t);

    gerado.v = geraTemp(gerado.t);

    if((a.t == "S") && (b.t == "S")){
        string inicializa = a.c + b.c + gerado.v + "[255] = 0;\n" + "strncpy(" + gerado.v + ", " + a.v + ", 255);\n";

        string cat = temp + " = strlen(" + gerado.v + ");\n";
        
        cat += temp2 + " = 255 - " + temp + ";\n";

        cat += "strncat(" + gerado.v + ", " + b.v + ", " + temp2 + ");\n";
            
        gerado.c = a.c + b.c + inicializa + cat;

        return gerado;

    } else if((a.t == "C") && (b.t == "S")){
        string tempS = geraTemp("S");

        string aux = gerado.v;

        gerado.c = a.c + b.c + aux 
                    + "sprintf(" + tempS + ", " + "\"" + "%c" + "\"" + ", " + a.v + ");\n" 
                    + "strncpy(" + gerado.v + ", " + aux + ", 255);\n" 
                    + temp + " = strlen(" + gerado.v + ");\n" 
                    + temp2 + " = 255 - " + temp + ";\n" 
                    + "strncat(" + gerado.v + ", " + b.v + ", " + temp2 + ");\n";

        return gerado;

    } else if((a.t == "S") && (b.t == "C")){
        string tempS = geraTemp("S");

        string aux = gerado.v;

        gerado.c = a.c + b.c + aux 
                    + "sprintf(" + tempS + ", " + "\"" + "%c" + "\"" + ", " + a.v + ");\n" 
                    + "strncpy(" + gerado.v + aux + ", 255);\n" 
                    + temp + " = strlen(" + gerado.v + ");\n" 
                    + temp2 + " = 255 - " + temp + ";\n" 
                    + "strncat(" + gerado.v + ", " + b.v + ", " + temp2 + ");\n";
                    
        return gerado;

    } 

    gerado.c = a.c + b.c + " " + gerado.v + " = " + a.v + operador + b.v + ";\n";

    if(gerado.t == ""){
        a.t = traduzTipo(a.t);
        b.t = traduzTipo(b.t);

        string erro = "Operacao '" + operador + "' inválida entre " + a.t + " e " + b.t;
        yyerror(erro.c_str());
    }

    return gerado;
}

Atributos declaraVariavelComTipo(Atributos s1, Atributos s2){
    Atributos gerado;
    string saida;
    
    gerado.v = "";
   
    gerado.t = guardaTipo(s1.t);

    gerado.c = s1.c + " " + s2.c + ";\n";

    if(gerado.t == "S"){
        string aux = "";
        string token;
        gerado.c = "";

        char delimitador = ',';

        stringstream ss(s2.c);

        while(getline(ss, token, delimitador)){
            gerado.c += "char " + token + "[257];\n";
        }
    }

    return gerado;
}

Atributos declaraRecursivoVariavelComTipo(Atributos s1, Atributos s2, Atributos s3){
    Atributos gerado;

    gerado.v = "";

    gerado.t = guardaTipo(s2.t);

    gerado.c = s1.c + " " + s2.c + " " +s3.c + ";\n";

     if(gerado.t == "S"){
        string aux = "";
        string token;

        char delimitador = ',';

        stringstream ss(s3.c);

        while(getline(ss, token, delimitador)){
            gerado.c += "char " + token + "[257];\n";
        }

    }

    return gerado;
}

Tipo buscaTipoVar(string s){
    if(tsVar[s] == ""){
        cout << "Tipo da variável " << s << " não encontrado!" << endl;
    } else {
        return tsVar[s];
    }
}

Tipo buscaTipoOperacao(Tipo a, string operador, Tipo b){
    return resOpr[operador + a + b];
}

Tipo traduzTipo(Tipo t){
    if(t == "I"){
        t = "int";
    } else if(t == "D"){
        t = "real";
    } else if(t == "S"){
        t = "string";
    } else if(t == "C"){
        t = "char";
    } else if(t == "B"){
        t = "boolean";
    }

    return t;
}

int main(int argc, char* st[]){ 
    yyparse();
    return 0;
}