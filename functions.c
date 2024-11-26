#include <stdio.h>
#define ROW 50
#define COLUMN 50
enum STATUS {EMPTY, FILLED, UP, DOWN};
int board[ROW][COLUMN] = {0};

void printGraphic(int array[][COLUMN], int row, int column) {
    int x;
    int y;

    for(y = 0; y < column; y++) {
        for(x = 0; x < row; x++) {
            if(array[x][y] == EMPTY) {
                printf(" ");
            }
            else if(array[x][y] == FILLED) {
                printf("*");
            }
            else if(array[x][y] == UP) {
                printf("T");
            }
            else if(array[x][y] == DOWN) {
                printf("t");
            }
        }

        printf("\n");
    }
}

void penUp(int x, int y) {
    if(board[x][y] == DOWN) {
        board[x][y] = UP;
    }
}

void penDown(int x, int y) {
    if(board[x][y] == UP) {
        board[x][y] = DOWN;
    }
}

void move(int x, int y, int state) {
    if(state) {
        board[x][y] = 2;
    }
    else {
        board[x][y] = 3;
    }
}