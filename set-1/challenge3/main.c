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

int isnotprintable(char x){
	char *notallowed = ")({}/<>+=*^%#~`#$|@_;:\\&[]";
	return ((!isprint(x) && x != '\n') || (strchr(notallowed, x) != NULL));
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



int main(int argc, char* argv[]){
    char hexIn[] = "1b37373331363f78151b7f2b783431333d78397828372d363c78373e783a393b3736";
    int len = strlen(hexIn);
    char* charIn = (char*)calloc(len, sizeof(char));
    charIn = hexadecimalACharacter(hexIn);
    printf("valor de la  clave : %d\n", singlebytexorcipher(charIn));
    return 0;
}