#include "../auxiliares/defs.h"

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

int main(int argc, char* argv[]){
    char in1[] = "1c0111001f010100061a024b53535009181c";
    char in2[] = "686974207468652062756c6c277320657965";
    printf("fixed xor produced :  %s\n", fixedxor(in1, in2));

    return 0;
}