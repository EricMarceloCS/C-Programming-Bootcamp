#include <stdio.h>


int main() {

    FILE* fp;
    char character;
    int lines = 0;
    fp = fopen("exercisefile.txt", "r");

    if(fp != NULL) {

        while((character = fgetc(fp)) != EOF) {
            printf("%c", character);
            if(character == '\n') {
                lines++;
            }
        }
        fclose(fp);
    }

    printf("There are %d lines.\n", lines);

    return 0;
}
