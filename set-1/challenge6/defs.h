#ifndef DEFS
#define DEFS

#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
#include <ctype.h>

#define SIX_BITS_GROUPING 6 
#define MASK 0x3F
#define INT_SIZE 32
#define ALL_POSSIBLE_CHARACTERS 256
#define MIN_KEY_SIZE 2
#define MAX_KEY_SIZE 40
#define BUFFER_SIZE 64*60

extern int   hexadecimalAentero(char hex);
extern char* hexadecimalAbase64(char *inputStr);
extern char* hexadecimalACharacter(char *inputStr);
extern char* characterToHexadecimal(char *inputStr);
extern int decimalABinario(int decimal);
extern char* fixedxor(char *inputStr1, char *inputStr2);
extern int isnotprintable(char x);
extern int singlebytexorcipher(char* input);
extern char* repeatingkeyxor(char *inputStr);
extern int hamming(char *input1, char *input2, int len);


#endif  /*DEFS*/