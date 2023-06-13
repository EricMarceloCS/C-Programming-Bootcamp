#include <stdio.h>

int main() {

    int appearances = 0;
    char target, current;
    char filename[20];
    FILE* fp;

    printf("Enter the name of the file: ");
    scanf("%s", &filename);
    printf("Enter the character search target: ");
    scanf(" %c", &target);

    fp = fopen(filename, "r");

    if(fp != NULL) {
        while((current = fgetc(fp)) != EOF) {
            printf("%c", current);
            if(current == target) {
                appearances++;
            }
        }

        fclose(fp);
    }

    printf("Character %c appeared %d times\n", target, appearances);
    return 0;
}
