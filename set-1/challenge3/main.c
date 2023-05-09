#include "defs.h"

int main(int argc, char* argv[]){
    char hexIn[] = "1b37373331363f78151b7f2b783431333d78397828372d363c78373e783a393b3736";
    int len = strlen(hexIn);
    char* charIn = (char*)calloc(len, sizeof(char));
    charIn = hexadecimalACharacter(hexIn);
    printf("valor de la  clave : %d\n", singlebytexorcipher(charIn));
    return 0;
}