#include <stdio.h>

int getTotalAppearances(char alpha) {

    char input;
    printf("Enter an alphabet character or '$': ");
    scanf("%c", &input);
    getchar();

    printf("What!\n");

    if(input == '$') {
        return 0;
    } else if (input == alpha) {
        return 1 + getTotalAppearances(alpha);
    } else {
        return getTotalAppearances(alpha);
    }

}

int main() {

    char alpha;
    int result;

    printf("Enter a target character: ");
    scanf("%c", &alpha);
    getchar();

    result = getTotalAppearances(alpha);

    printf("The character %c appeared %d time(s).\n", alpha, result);

    return 0;
}
