#include <iostream>
#include <string>
#include <cctype>
#include <ctype.h>
#include <vector>
#include <fstream>
#include <locale> 

#include "Token.h"
#include "Scanner.h"


using namespace std;

int main (int argc, char* argv[]){
  string fileName = argv[1];
  
  Scanner read_n_poo(fileName);
  cout<< "Total Tokens = " << read_n_poo.getNumTkns()<< endl;
  
  
  //Token ver;
  //TokenType t = COMMENT;

  //ver.toString();

  return 0;
}
