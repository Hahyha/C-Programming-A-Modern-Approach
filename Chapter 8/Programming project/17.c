#include <stdio.h>
#include <ctype.h>

int main() {
    int size, square[size][size], row_pos, col_pos, number = 1;
    
    printf("This program creates a magic square of a specified size.\n");
    printf("The size must be an odd number between 1 and 99.\n");
    printf("Enter size of magic square: ");
    scanf("%d", &size);
    for (row_pos = 0; row_pos < size; row_pos++) {
        for (col_pos = 0; col_pos < size; col_pos++) {
            square[row_pos][col_pos] = 0;
        }
    }
    col_pos = size / 2 + 1;
    row_pos = 0;
    
    while (number < size * size) {
        if (square[row_pos][col_pos] == 0) square[row_pos][col_pos] = number;
        else {
            row_pos++;
            square[row_pos][col_pos] = number;
        }
        if (row_pos = 0) row_pos = 4;
        else row_pos -= 1;
        if (col_pos = 4) col_pos = 0;
        else col_pos += 1;
        number++;
        printf("%d\n", number);
    }
    
    for (row_pos = 0; row_pos < size; row_pos ++) {
        for (col_pos = 0; col_pos < size; col_pos ++) {
            printf("   %d", square[row_pos][col_pos]);
        }
        printf("\n");
    }
    
    return 0;
}
