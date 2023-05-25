#include <stdio.h>

void strcpy(char *strDest, char *strSrc) {
    int length = strlen(strSrc);
    for(int i = 0; i < length; i++) {
        strDest[i] = strSrc[i];
    }

}

int main() {

    char *src[20];
    char *dest[20];

    printf("Enter a String to copy: ");
    gets(src);

    strcpy(&dest, &src);

    printf("Original String: %s\n", src);
    printf("Copy String: %s\n", dest);
    return 0;
}
