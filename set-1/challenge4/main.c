#include "../auxiliares/defs.h"

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