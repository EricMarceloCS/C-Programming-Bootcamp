#include <stdio.h>

int main() {

    int count[26] = {0};
    FILE* fp;
    int index;
    char filename[20];
    char character;

    printf("Enter the filename: ");
    scanf("%s", filename);

    fp = fopen(filename, "r");

    if(fp != NULL) {
        while((character = fgetc(fp)) != EOF) {
            printf("%c", character);
            index = character - 'a';
            if(index >= 0 && index < 26) {
                count[index]++;
            }
        }

        fclose(fp);
    }

    for(int i = 0; i < 26; i++) {
        printf("%c : %d\n", i + 'a', count[i]);
    }
    return 0;
}
