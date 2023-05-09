#include <stdio.h>
#include <stdlib.h>

int main() {

    int day;
    int month;
    int year;
    int lastFebDay = 28;

    printf("Enter day month and year: ");
    scanf("%d %d %d", &day, &month, &year);

    if(year % 4 == 0 && year % 100 != 0)
       lastFebDay = 29;
    else if(year % 100 == 0 && year % 400 == 0)
        lastFebDay = 28;
    else
        lastFebDay = 29;

    if(day == lastFebDay && month == 2){
        month = month + 1;
        day = 1;
    }else if(day == 31 && (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10)){
        month = month + 1;
        day = 1;
    }else if(day == 30 && (month == 4 || month == 6 || month == 9 || month == 11)){
        month = month + 1;
        day = 1;
    }else if (day == 31 && month == 12){
        day = 1;
        month = 1;
        year = year + 1;
    }else {
        day++;
    }

    printf("Next Day: %02d / %02d / %02d\n", day, month, year);

    return 0;
}
