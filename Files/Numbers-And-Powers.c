#include <stdio.h>


int main() {

    FILE* fp;
    int num = 0;
    fp = fopen("exerciseFile1.txt", "w");

    if(fp != NULL) {

        while(++num <= 10) {
            fprintf(fp,"%d %d\n", num, num*num);
        }

        fclose(fp);
    }
    return 0;
}
