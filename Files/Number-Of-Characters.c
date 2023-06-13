#include <stdio.h>
#include <stdlib.h>

int main() {

    FILE* fp;
    int count = 0;
    char character;

    fp = fopen("exercisefile.txt", "r");

    if(fp != NULL) {

        while((character = fgetc(fp)) != EOF) {
            printf("%c", character);
            count++;
        }
        fclose(fp);
    }

    printf("There are %d characters in the file.\n", count);

    return 0;
}
