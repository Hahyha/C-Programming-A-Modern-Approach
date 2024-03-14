#include <stdio.h>

/* prototypes */
int evaluate_position(char [][8]);

/********************************
* main: Calls evaluate_position *
********************************/
int main() {
    char board[8][8] = {'Q'};
    
    printf("%d\n", evaluate_position(board));

    return 0;
}

/**************************************************************************************
* evaluate_position: Evaluate which side, white or black, currently has an advantage. *
**************************************************************************************/
int evaluate_position(char board[][8]) {
    int white = 0, black = 0, i, j;
    
    for (i = 0; i < 8; i++) {
        for (j = 0; j < 8; j++) {
            switch (board[i][j]) {
                case 'Q': white += 9; break;
                case 'R': white += 5; break;
                case 'B': white += 3; break;
                case 'N': white += 3; break;
                case 'P': white += 1; break;
                case 'q': black += 9; break;
                case 'r': black += 5; break;
                case 'b': black += 3; break;
                case 'n': black += 3; break;
                case 'p': black += 1; break;
                case ' ':             break;
                default: printf("Something's wrong.\n"); break;
            }
        }
    }
    return white - black;
}
