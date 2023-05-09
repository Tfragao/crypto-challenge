#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
#include <ctype.h>
#include<math.h>
#include "defs.h"

int hexadecimalAentero(char hex){
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

char* hexadecimalACharacter(char *inputStr) {
    int k = 0;
    int length = strlen(inputStr);
    //Solo necesito metade del tamaño total del character recibido para guardar el valor en hexadecimal
    char *outputStr = (char*)calloc(length/2, sizeof(char)); 

    for(int i = 0; i < length; i = i + 2) {
        outputStr[k++] = hexadecimalAentero(inputStr[i])*16 + hexadecimalAentero(inputStr[i + 1]);
    }
    outputStr[k] ='\0';
    return outputStr;
}

char* characterToHexadecimal(char *inputStr) {
    int k = 0;
    int length = strlen(inputStr);
    //Necesito del doble de tamaño para guardar el valor en hexadecimal de los char recibidos
    char *outputStr = (char*)calloc(length * 2, sizeof(char));

    for(int i = 0; i < length; i++) {
        if(inputStr[i] < 0xF) {
            outputStr[k++] = '0';
        }
        sprintf(&outputStr[k++], "%x", inputStr[i]);
        if(inputStr[i] > 0xF){
            k++;
        }
    }
    outputStr[k] = '\0';
    return outputStr;
}

int isnotprintable(char x){
	char *notallowed = ")({}/<>+=*^%#~`#$|@_;:\\&[]";
	return ((!isprint(x) && x != '\n') || (strchr(notallowed, x) != NULL));
}

char* repeatingkeyxor(char *inputStr) {
    char *key = "ICE";
    int len = strlen(inputStr);
    int keyLength = strlen(key);

    int j = 0, k = 0;
    char *buffer = (char*)calloc(len, sizeof(char));
    for(int i = 0; i < len;i++) {
        int xored = inputStr[i] ^ key[k];
        buffer[j++] = (char)xored;
        k = (k + 1) % keyLength;
    }
    free(buffer);
    return buffer;
}


