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

char* hexadecimalAbase64(char *inputStr){
  int k = 0;
  char valoresBase64[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
  int length = strlen(inputStr);
  char *outputStr = (char *) calloc(length + 1 , sizeof(char));

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

char* fixedxor(char *inputStr1, char *inputStr2){
    int i = 0;
    if(strlen(inputStr1) != strlen(inputStr2)) {
        printf("Input string must be the same\n");
        return NULL;
    }
    
   char *input1InChar = hexadecimalACharacter(inputStr1);
   char *input2InChar = hexadecimalACharacter(inputStr2);
   char *outputStr = (char*)calloc(strlen(inputStr1)/2, sizeof(char));
   
    for(i = 0; i < strlen(inputStr1)/2;i++) {
        outputStr[i] = input1InChar[i]  ^  input2InChar[i];
        //printf("%d\n", outputStr[i]);
    }
    outputStr[i] = '\0';
    free(outputStr);
    return characterToHexadecimal(outputStr);
}

int singlebytexorcipher(char* inputStr){

	int key = -1;
	int length = strlen(inputStr);
	char *outputStr = calloc(length + 1, sizeof(char));

	if(inputStr == NULL || outputStr == NULL){
		printf("NULL pointer check failed\n");
		return key;
	}
	for(int j = 0; j < ALL_POSSIBLE_CHARACTERS; j++){
		int isstring = 1;
		for (int i = 0; i < length; i++){
			outputStr[i] =  inputStr[i] ^ j;
			if(isnotprintable(outputStr[i])){
				isstring = 0;
				break;
			}
		}
		if(isstring){
			key = j;
			break;
		}
	}
	free(outputStr);
	return key;
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

int hamming(char *input1, char *input2, int len){
    int distance = 0;
    for(int i = 0; i < len; i++) {
        int xor = input1[i] ^ input2[i];
        while(xor != 0 ){  // nos interesa contar los unos (1's)
            if(xor & 0x1 == 1) {
                distance++;
            }
            xor = xor >> 1;
        } 
    }
    return distance;
}

int decimalABinario(int decimal)
{  
    unsigned long long int valorBinario = 0;
    int contador = 0;
    while (decimal != 0) {
        int rem = decimal % 2;
        unsigned long long int factorDiez = pow(10, contador);
        valorBinario += rem * factorDiez;
        decimal /= 2;
        contador++;
    }
    return valorBinario;
}


