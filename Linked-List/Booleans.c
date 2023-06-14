#include <stdio.h>
#include <stdlib.h>

#include <stdbool.h>

int main() {

    bool still_raining = true;
    while(still_raining) {
        printf("It's still raining... rain... rain... rain.\n");
        still_raining = !still_raining;
    }
    printf("It stopped raining.\n");
    return 0;

}
