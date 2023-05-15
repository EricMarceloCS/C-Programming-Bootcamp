#include <stdio.h>
#include <stdlib.h>

int main() {

    double million = 1000000.00;
    double cents = 0.01;
    int day = 0;

    while(day++ != 30){
        cents = cents * 2;
    }

    if(cents > million){
        printf("Cents will make %lf dollars more in 30 days.\n", cents - million);
    }else {
        printf("1 Million dollars is more than %lf dollars.\n", million - cents);
    }


    return 0;
}
