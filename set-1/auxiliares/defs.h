#ifndef DEFS
#define DEFS

#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
#include <ctype.h>

#define SIX_BITS_GROUPING 6 
#define MASK 0x3F
#define INT_SIZE 32

int   hexadecimalAentero(char hex);
char* hexadecimalAbase64(char *inputStr);
char* hexadecimalACharacter(char *inputStr);
char* characterToHexadecimal(char *inputStr);
int decimalABinario(int decimal);
char* fixedxor(char *inputStr1, char *inputStr2);
int isnotprintable(char x);
int singlebytexorcipher(char* input, int length);


#endif  /*DEFS*/