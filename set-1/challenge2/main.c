#include "../commons/defs.h"

int main(int argc, char* argv[]){
    char in1[] = "1c0111001f010100061a024b53535009181c";
    char in2[] = "686974207468652062756c6c277320657965";
    printf("fixed xor produced :  %s\n", fixedxor(in1, in2));

    return 0;
}