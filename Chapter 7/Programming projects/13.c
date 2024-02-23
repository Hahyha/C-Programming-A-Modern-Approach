#include <stdio.h>
#include <ctype.h>

int main() {
    char character;
    int number_of_letter, number_of_vocabulary;
    
    printf("Enter a sentence: ");
    
    while ((character = getchar()) != '\n'){
        switch (character){
            case ' ':
                number_of_vocabulary += 1;
                break;
            default:
                number_of_letter += 1;
                break;
        }
    }
    
    printf("Average word length: %f\n", (float) number_of_letter / (number_of_vocabulary + 1));
    
    return 0;
}
