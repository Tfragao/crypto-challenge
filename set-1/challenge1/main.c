#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
#include <ctype.h>

#define SIX_BITS_GROUPING 6 
#define MASK 0x3F

int hexadecimalAentero(char hex)
{
  /* Me aseguro que los caracteres estan en minusculas */
  hex = tolower((int)hex);
  if(hex >= '0' && hex <= '9') {
     return hex - '0';
  }
  else if(hex >= 'a' && hex <= 'f') {  //Rango para los valores hexadecimal de A(10) a F(15)
    return hex - 'a' + 10;
  }
  return 0;
}

char *hexadecimalAbase64(char *inputStr)
{
  int k = 0;
  char valoresBase64[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
  int length = strlen(inputStr);
  char *outputStr = (char *) calloc(length*4/3, sizeof(char));

  if(length % 6 != 0){
    //TODO : Que hacer cuando el tamaño no es divisible por 6
  }
  else{
    for(int i = 0; i < length; i=i+6){
      long temp = hexadecimalAentero(inputStr[i])*16 + hexadecimalAentero(inputStr[i+1]);
      temp = temp<<8 | (hexadecimalAentero(inputStr[i+2])*16 + hexadecimalAentero(inputStr[i+3]));
      temp = temp<<8 | (hexadecimalAentero(inputStr[i+4])*16 + hexadecimalAentero(inputStr[i+5]));

      for(int j = 3; j >= 0; j--){
        outputStr[k++] = valoresBase64[temp>> j * SIX_BITS_GROUPING & MASK];
      }
    }
  }
  outputStr[k] = '\0';
  free(outputStr);
  return outputStr;
}

int main(){
  char inputStr[] ="49276d206b696c6c696e6720796f757220627261696e206c696b65206120706f69736f6e6f7573206d757368726f6f6d";
  printf("Valor del string en hexadecimal a base 64 : %s\n", hexadecimalAbase64(inputStr));
  return 0;
}
