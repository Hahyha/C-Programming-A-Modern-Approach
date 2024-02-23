#include <stdio.h>
#include <ctype.h>

int main() {
    char c;
    int n, sum = 0;
    
    printf("Enter a word: ");
    c = getchar();
    c = toupper(c);
    
    while (c != '\n'){
        switch (c) {
            case 'A': case 'E': case 'I': case 'L': case 'N': case 'O': case 'R': case 'S': case 'T': case 'U':
                n = 1;
                break;
            case 'D': case 'G':
                n = 2;
                break;
            case 'B': case 'C': case 'M': case 'P':
                n = 3;
                break;
            case 'F': case 'H': case 'V': case 'W': case 'Y':
                n = 4;
                break;
            case 'K':
                n = 5;
                break;
            case 'J': case 'X':
                n = 8;
                break;
            case 'Q': case 'Z':
                n = 10;
                break;
            default:
                printf("You've entered some illegal character.");
                break;
        }
        sum += n;
        c = getchar();
        c = toupper(c);
    }
    
    printf("Scrabble value: %d\n", sum);

    return 0;
}
