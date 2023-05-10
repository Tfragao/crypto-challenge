#include "defs.h"

int main(int argc, char* argv[]) {
     FILE *fp;
     char inputBuffer[BUFFER_SIZE];
     fp = fopen("testfile6.txt", "r");
    if (NULL == fp) {
        printf("file can't be opened\n");
        return -1;
    }
    while(fgets(inputBuffer,100, fp) != NULL) {
        inputBuffer[strlen(inputBuffer) - 1] = '\0';
        
    }
    printf("%s\n", inputBuffer);
    fclose(fp);
    return 0;
}