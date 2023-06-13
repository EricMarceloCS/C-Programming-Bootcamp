#include <stdio.h>

int main() {
    FILE* fp;
    int num1, num2;
    int count = 0;
    fp = fopen("exerciseFile1.txt", "r");

    if(fp != NULL) {
        while(++count <= 10) {
            fscanf(fp, "%d%d", &num1, &num2);
            printf("Read: %d %d\n", num1, num2);
        }

        fclose(fp);
    }
    return 0;
}
