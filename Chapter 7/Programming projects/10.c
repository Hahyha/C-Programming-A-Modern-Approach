#include <stdio.h>
#include <ctype.h>

int main() {
    int num_of_vowels = 0;
    char letter;
    
    printf("Enter a sentence: ");
    while ((letter = getchar()) != '\n'){
        letter = toupper(letter);
        if ((letter == 'A') || (letter == 'E') || (letter == 'I') || (letter == 'O') || (letter == 'U')) num_of_vowels += 1;
    }
    
    printf("Your sentence contains %d vowels.\n", num_of_vowels);
    
    return 0;
}
