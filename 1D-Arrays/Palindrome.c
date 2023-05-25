#include <stdio.h>
#define SIZE 5

int main() {

    int arr[SIZE] = {1, 3, 2, 3, 1};
    int flag = 0;

    for(int i = 0; i < SIZE/2; i++) {
        if(arr[i] != arr[SIZE-1-i]) {
            flag = 1;
        }
    }

    switch(flag) {
        case 0:
            printf("Array is a palindrome.\n");
            break;
        case 1:
            printf("Array is NOT a palindrome.\n");
            break;
        default:
            printf("Error has occurred.\n");
    }

    return 0;
}
