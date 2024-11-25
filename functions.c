#include <stdio.h>
#define COLUMN 50

void printGraphic(int array[][COLUMN], int row, int column) {
    int i;
    int j;

    for(i = 0; i < column; i++) {
        for(j = 0; j < row; j++) {
            if(array[i][j]) {
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
}