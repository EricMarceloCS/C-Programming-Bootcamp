#include <stdio.h>

int main() {

    int num;
    int count = 0;

    printf("Enter the number of asterisks to print: ");
    scanf("%d", &num);

    while(count < num){
        printf("*");
        count += 1;
    }
    printf("\n");

    return 0;
}
