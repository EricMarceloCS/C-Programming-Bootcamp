#include <stdio.h>

int main(){
    int year;
    int age;

    scanf("%d", &year);
    scanf("%d", &age);
    printf("Your Birth Year: %d", year - age);

    return 0;
}
