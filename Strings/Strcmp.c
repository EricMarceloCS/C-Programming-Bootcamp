#include <stdio.h>

int strcmp(char *str1, char *str2) {

    int len1 = strlen(str1);
    int len2 = strlen(str2);
    int i = 0;
    char c1 = str1[i];
    char c2 = str2[i];

    while(c1 != '\0' && c2 != '\0') {
        if(c1 < c2) {
            return -1;
        } else if (c1 > c2) {
            return 1;
        }
        i++;
        c1 = str1[i];
        c2 = str2[i];
    }

    if(len1 > i) {
        return 1;
    }else if(len2 > i) {
        return -1;
    }else {
        return 0;
    }
}

int main() {
    char str1[20];
    char str2[20];
    int result;

    printf("Enter the first string: ");
    gets(str1);
    printf("Enter the second string: ");
    gets(str2);

    result = strcmp(&str1, &str2);
    printf("Result: %d\n", result);


    return 0;
}
