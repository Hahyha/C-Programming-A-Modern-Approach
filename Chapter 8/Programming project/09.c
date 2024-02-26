#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char board[10][10], character;
    int curr_pos[2] = {0, 0}, movement, row, column;
    
    for (row = 0; row < 10; row++) {
        for (column = 0; column < 10; column++) {
            board[row][column] = '.';
        }
    }
    board[0][0] = 'A';
    for (character = 'B'; character <= 'Z'; character++) {
        srand(time(NULL));
        movement = rand() % 4;
        printf("%d\n", movement);
        switch (movement) {
            case 0:
                if ((curr_pos[1] != 0) && (board[curr_pos[0]][curr_pos[1] - 1] == '.')) {
                    curr_pos[1] -= 1;
                    board[curr_pos[0]][curr_pos[1]] = character;
                }
                else character--;
                break;
            case 1:
                if ((curr_pos[0] != 0) && (board[curr_pos[0] - 1][curr_pos[1]] == '.')) {
                    curr_pos[0] -= 1;
                    board[curr_pos[0]][curr_pos[1]] = character;
                }
                else character--;
                break;
            case 2:
                if ((curr_pos[0] != 9) && (board[curr_pos[0]][curr_pos[1] + 1] == '.')) {
                    curr_pos[1] += 1;
                    board[curr_pos[0]][curr_pos[1]] = character;
                }
                else character--;
                break;
            case 3:
                if ((curr_pos[0] != 9) && (board[curr_pos[0] + 1][curr_pos[1]] == '.')) {
                    curr_pos[0] += 1;
                    board[curr_pos[0]][curr_pos[1]] = character;
                }
                else character--;
                break;
        }
        for (row = 0; row < 10; row++) {
            for (column = 0; column < 10; column++) {
                printf("%c ", board[row][column]);
            }
            printf("\n");
        }
    }
    
    /* for (row = 0; row < 10; row++) {
        for (column = 0; column < 10; column++) {
            printf("%c ", board[row][column]);
        }
        printf("\n");
    }   
    */
    
    return 0;
}
