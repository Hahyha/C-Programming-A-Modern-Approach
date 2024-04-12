#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* prototypes */
void generate_random_walk(char walk[10][10]);
void print_array(char walk [10][10]);


int main() {
    char board[10][10];
    
    generate_random_walk(board);
    print_array(board);
    return 0;
}

void generate_random_walk(char walk[10][10]) {
    char character;
    int curr_pos[2] = {0, 0}, movement, row, column;
    
    for (row = 0; row < 10; row++) {
        for (column = 0; column < 10; column++) {
            walk[row][column] = '.';
        }
    }
    walk[0][0] = 'A';
    srand(time(NULL));
    for (character = 'B'; character <= 'Z'; character++) {
        if ((walk[curr_pos[0]][curr_pos[1] - 1] != '.') && (walk[curr_pos[0]][curr_pos[1] + 1] != '.') && (walk[curr_pos[0] - 1][curr_pos[1]] != '.') && (walk[curr_pos[0] + 1][curr_pos[1]] != '.')) break;
        movement = rand() % 4;
        switch (movement) {
            case 0:
                if ((curr_pos[1] != 0) && (walk[curr_pos[0]][curr_pos[1] - 1] == '.')) {
                    curr_pos[1] -= 1;
                    walk[curr_pos[0]][curr_pos[1]] = character;
                }
                else character--;
                break;
            case 1:
                if ((curr_pos[0] != 0) && (walk[curr_pos[0] - 1][curr_pos[1]] == '.')) {
                    curr_pos[0] -= 1;
                    walk[curr_pos[0]][curr_pos[1]] = character;
                }
                else character--;
                break;
            case 2:
                if ((curr_pos[1] != 9) && (walk[curr_pos[0]][curr_pos[1] + 1] == '.')) {
                    curr_pos[1] += 1;
                    walk[curr_pos[0]][curr_pos[1]] = character;
                }
                else character--;
                break;
            case 3:
                if ((curr_pos[0] != 9) && (walk[curr_pos[0] + 1][curr_pos[1]] == '.')) {
                    curr_pos[0] += 1;
                    walk[curr_pos[0]][curr_pos[1]] = character;
                }
                else character--;
                break;
        }
    }
}

void print_array(char walk [10][10]) {
    int row, column;
    
    for (row = 0; row < 10; row++) {
        for (column = 0; column < 10; column++) {
            printf("%c ", walk[row][column]);
        }
        printf("\n");
    }
}
