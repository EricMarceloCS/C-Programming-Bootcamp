#include <stdio.h>


void getNumberOfWords(char *pStrArray) {
    int count;
    int i = 0;
    char c = pStrArray[i];
    if(strlen(pStrArray) > 0){
        count = 1;
    } else {
        count = 0;
    }

    while(c != '\0') {
        if(c == ' ') {
            count++;
        }
        c = pStrArray[++i];
    }

    printf("The number of words in the string is %d.\n", count);
}

int main() {

    char strArray[20];

    puts("Enter a string to see the number of words: ");
    gets(strArray);

    getNumberOfWords(&strArray);

    return 0;
}
