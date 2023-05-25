#include <stdio.h>

void getPalindrome(char *pStr) {

    int length = strlen(pStr);
    int isPalindrome = 0;

    for(int i = 0 ; i < length / 2; i++) {
            if(pStr[i] != pStr[length - 1 - i]){
                isPalindrome = 1;
            }
    }

    printf("%s is ", pStr);
    if(isPalindrome == 0) {
        printf("a palindrome.\n");
    } else {
        printf("NOT a palindrome.\n");
    }
}

int main() {

    char pStr[20];
    puts("Enter a string to palindrome verify: ");
    gets(pStr);

    getPalindrome(&pStr);

    return 0;
}
