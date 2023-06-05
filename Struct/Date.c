#include <stdio.h>

typedef struct date {
    int day;
    int month;
    int year;
} Date;

void printDate(Date myDate) {

    printf("Date: dd/mm/yyyy %02d/%02d/%4d\n", myDate.day, myDate.month, myDate.year);
}

Date getNextDate(Date myDate) {

    int lastFebDay = 28;
    Date nextDate;
    if(myDate.year % 4 == 0 || (myDate.year % 100 == 0 && myDate.year % 400 == 0)) {
        lastFebDay = 29;
    }

    if (myDate.day == 31 && myDate.month == 12) {
        nextDate.day = 1;
        nextDate.month = myDate.month + 1;
        nextDate.year = myDate.year + 1;
    } else if(myDate.day == 31 && (myDate.month == 1 || myDate.month == 3 || myDate.month == 5 || myDate.month == 7 || myDate.month == 8 || myDate.month == 10)) {
        nextDate.day = 1;
        nextDate.month = myDate.month + 1;
        nextDate.year = myDate.year;
    } else if(myDate.day == 30 && (myDate.month == 4 || myDate.month == 6 || myDate.month == 9 || myDate.month == 11)){
        nextDate.day = 1;
        nextDate.month = myDate.month + 1;
        nextDate.year = myDate.year;
    } else {
        nextDate.day = myDate.day + 1;
        nextDate.month = myDate.month;
        nextDate.year = myDate.year;
    }

    return nextDate;
}

Date setDate() {

    Date myDate;
    printf("Enter day: ");
    scanf("%d", &myDate.day);
    printf("Enter month: ");
    scanf("%d", &myDate.month);
    printf("Enter year: ");
    scanf("%d", &myDate.year);

    return myDate;
}

int main() {


    printDate(setDate());
    puts("Next Date");
    printDate(getNextDate(setDate()));

    return 0;
}
