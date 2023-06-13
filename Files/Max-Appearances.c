#include <stdio.h>

int main() {
    FILE* fp;
    int frequencyAppearances[26] = {0};
    char character;
    int index;
    int maxAppearances = 0;
    int maxIndex = 0;
    char filename[20];

    printf("Enter the file name: ");
    scanf("%s", &filename);

    fp = fopen(filename, "r");

    if(fp != NULL) {

        while((character = fgetc(fp)) != EOF) {
            printf("%c", character);
            index = character - 'a';
            if(index >= 0 && index < 26) {
                frequencyAppearances[index]++;
                if(frequencyAppearances[index] > maxAppearances) {
                    maxAppearances = frequencyAppearances[index];
                    maxIndex = index;
                }
            }
        }
        fclose(fp);
    }

    printf("%c appeared %d times\n", maxIndex + 'a', frequencyAppearances[maxIndex]);
    return 0;
}
