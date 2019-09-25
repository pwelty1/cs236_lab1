#include <iostream>
#include <string>
#include <cctype>
#include <ctype.h>
#include <vector>
#include <fstream>
#include <locale> 

#include "token.h"
#include "scanner.h"


using namespace std;

int main (int argc, char* argv[]){
  //string fileName = argv[1];
  //Scanner read_n_poo(fileName);
  //cout<< "Total Tokens = " << read_n_poo.getNumTkns()<< endl;
  int fir; //badly named loop variable
  //char *input[] = calloc(strlen(argv), sizeof(char)); //initializing an array
  for( fir = 1; fir< argc; fir++){ //removing the first element of argv
    string fileName = argv[fir];
    Scanner read_n_poo(fileName);
    cout<< "Total Tokens = " << read_n_poo.getNumTkns()<< endl;
  }
  
  //Token ver;
  //TokenType t = COMMENT;

  //ver.toString();

  return 0;
}
