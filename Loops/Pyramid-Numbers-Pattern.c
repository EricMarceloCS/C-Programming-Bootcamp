#include <stdio.h>
#include <stdlib.h>

int main() {

    int rows;
    int digit = 1;

    printf("Enter the number of rows for the triangle: ");
    scanf("%d", & rows);

    for(int row = 0; row < rows; row++){
        int prepend = rows - (row + 1);
        int totalCount = row + 1;
        int count = 0;
        for(int col = 0; col < rows + (rows + 1); col++){
            if(col < prepend){
                printf(" ");
            }else if(count < totalCount && row % 2 == 0 && col % 2 != 0 ){
                printf("%d", digit++);
                count++;
            }else if(count < totalCount && row % 2 != 0 && col %2 == 0){
                printf("%d", digit++);
                count++;
            }else{
                printf(" ");
            }
        }

        printf("\n");
    }
    return 0;
}
