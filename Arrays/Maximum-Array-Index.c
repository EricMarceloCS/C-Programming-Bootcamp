#include <stdio.h>
#define SIZE 7

void printMaximumIndex(int phoneNumber[]) {

    int index = 0;
    int max = 0;

    for(int i = 0; i < SIZE;  i++) {
        printf("%d \r", phoneNumber[i]);
        if(max < phoneNumber[i]){
            max = phoneNumber[i];
            index = i;
        }
    }

    printf("The index of the largest digit in your phone number is: %d.\n", index);
}

int main() {

    // 1 4 0 2 9 4 5
    int phoneNumber[7];

    for(int i = 0; i < SIZE; i++){
        printf("Enter number %d:" , i + 1);
        scanf("%d", &phoneNumber[i]);
    }

    printMaximumIndex(phoneNumber);

    return 0;
}
