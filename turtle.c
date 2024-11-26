#include <stdio.h>
#include "functions.h"

int main() {
    int x = 0;
    int y = 0;
    int command = 0;
    int pen = 0;
    int facing = 3; 
    int spaces;

    board[x][y] = UP;

    printf("Welcome to 'Turtle graphics', please enter a command\n");
    printf("Commands:\n1  - Pen up\n2  - Pen down\n3  - Turn right\n4  - Turn left\n5  - Move forward X spaces\n6  - Printf graphic\n9  - Exit\n");
    scanf("%d", &command);


    while(command != 9) {
        if(command == 1) {
            pen = 1;
        }
        else if(command == 2) {
            pen = 0;
        }
        else if(command == 3) {
            facing--;

            if(facing == 0) {
                facing = 4;
            }
        }
        else if(command == 4) {
            facing++;

            if(facing == 5) {
                facing = 1;
            }
        }
        else if(command == 5) {
            scanf("%d", &spaces);
            if(facing == 1) {
                x -= spaces;
            }
            else if(facing == 2) {
                y += spaces;
            }
            else if(facing == 3) {
                x += spaces;
            }
            else if(facing == 4) {
                y -= spaces;
            }

            move(x, y, pen);
        }
        else if(command == 6) {
            printGraphic(board, ROW, COLUMN);
        }
        else {
            printf("Invalid input\n");
        }

        scanf("%d", &command);
    }
    
    printf("Thaks for using!\n");

    return 0;
}