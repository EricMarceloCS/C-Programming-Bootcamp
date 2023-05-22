#include <stdio.h>
#define SIZE 7

void printDay(int day) {

     switch(day) {
        case 0 :
            printf("Monday\n");
            break;
        case 1 :
            printf("Tuesday\n");
            break;
        case 2 :
            printf("Wednesday\n");
            break;
        case 3 :
            printf("Thursday\n");
            break;
        case 4 :
            printf("Friday\n");
            break;
        case 5 :
            printf("Saturday\n");
            break;
        case 6 :
            printf("Sunday\n");
            break;
        default:
            printf("Error\n");
    }

}


int main() {

    double temperatures[7];
    double hottest = -200.00;
    double coldest = 200.00;
    int hotIndex = 0;
    int coldIndex = 0;
    double sum = 0;

    for(int i = 0; i < SIZE; i++){
        printf("Enter Farenheight temperature: ");
        scanf("%lf", &temperatures[i]);
        sum += temperatures[i];
        if(temperatures[i] > hottest){
            hottest = temperatures[i];
            hotIndex = i;
        }

        if(temperatures[i] < coldest) {
            coldest = temperatures[i];
            coldIndex = i;
        }
    }

    printf("Average temperature: %lf\n", sum / SIZE);
    printf("Hottest day of the week: " );
    printDay(hotIndex);
    printf("Coldest day of the week: ");
    printDay(coldIndex);



    return 0;
}
