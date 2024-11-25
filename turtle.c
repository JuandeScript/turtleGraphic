#include <stdio.h>
#include "functions.h"
#define ROW 50
#define COLUMN 50

int main() {
    int board[ROW][COLUMN] = {0};
    int command = 0;
    int pen = 0;
    int position = 0;

    printf("Welcome to 'Turtle graphic', please enter a command\n");
    printf("Commands:\n1  - Pen up\n2  - Pen down\n3  - Turn right\n4  - Turn left\n5  - Move forward 10 spaces\n6  - Printf graphic\n7 - Commands list\n9  - Exit\n");
    scanf("%d", &command);


    while(command != 9) {


        if(command == 1) {
            printf("Pen up\n");
            pen = 0;
        }
        else if(command == 2) {
            printf("Pen down\n");
            pen = 1;
        }
        else if(command == 3) {
            printf("Turned right\n");
        }
        else if(command == 4) {
            printf("Turned left\n");
        }
        else if(command == 5) {
            printf("Moved 10 spaces\n");
        }
        else if(command == 6) {
            printf("Printing graphic\n");
            printGraphic(board, ROW, COLUMN);
        }
        else if(command == 7) {
            printf("Commands:\n1  - Pen up\n2  - Pen down\n3  - Turn right\n4  - Turn left\n5  - Move forward 10 spaces\n6  - Printf graphic\n7 - Commands list\n9  - Exit\n");
        }
        else {
            printf("Invalid input\n");
        }

        printf("What would you like to do next? (Press 7 to display the commands list)\n");
        scanf("%d", &command);
    }
    
    printf("Thaks for using!\n");

    return 0;
}