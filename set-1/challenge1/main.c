
#include "defs.h"

int main(int argc, char* argv[]){
  char inputStr[] ="49276d206b696c6c696e6720796f757220627261696e206c696b65206120706f69736f6e6f7573206d757368726f6f6d";
  printf("Valor del string en hexadecimal a base 64 : %s\n", hexadecimalAbase64(inputStr));
  return 0;
}
