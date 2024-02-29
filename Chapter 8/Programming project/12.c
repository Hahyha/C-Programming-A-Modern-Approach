#include <stdio.h>

int main() {
    int values[26] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
    char character;
    int result = 0, i = 0;
    
    printf("Enter a word: ");
    
    while ((character = getchar()) != '\n') {
        character = toupper(character) - 'A';
        result += values[character];
    }
    
    printf("Scrabble value: %d\n", result);

    return 0;
}
