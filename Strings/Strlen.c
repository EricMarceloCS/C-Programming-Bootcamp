#include <stdio.h>

int strlen(char *str) {

    puts("STRLEN METHOD");
    int len = 0;
    int i = 0;
    char c = str[0];
    while(c != '\0') {
        len++;
        c = str[++i];
    }

    return len;
}

int main() {

    char str[20];
    puts("Enter a string to get strlen: ");
    gets(str);

    int len = strlen(str);
    printf("Length of %s is %d.\n", str, len);

    return 0;
}
