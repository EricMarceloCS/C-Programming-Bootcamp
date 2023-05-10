#include <stdio.h>
#include <stdlib.h>

int main(){

    int year, month, day;

    printf("Please, enter a year month and day separated by a space: ");
    scanf("%d %d %d", &year, &month, &day);

    printf("Year: 0x%x \nMonth: 0x%X \nDay: 0x%X\n", year, month, day);

    return 0;
}
