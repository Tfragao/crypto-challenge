#include "defs.h"

int main(int argc, char* argv[]) {
    FILE *fp;
    char inputStr[100];
    fp = fopen("testfile.txt", "r");
    if (NULL == fp) {
        printf("file can't be opened\n");
        return -1;
    }
    
    while(fgets(inputStr,100, fp) != NULL) {
        int i =0;
       inputStr[strlen(inputStr) - 1] = '\0';
       singlebytexorcipher(inputStr);
    }
    fclose(fp);
    return 0;
}