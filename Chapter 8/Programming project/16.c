#include <stdio.h>

int main() {
    int letter_frequency[26] = {0}, pos = 0, anagram = 1;
    char ch;
    
    printf("Enter first word: ");
    while ((ch = tolower(getchar())) != '\n') {
        if (isalpha(ch)) letter_frequency[ch - 'a'] += 1;
    }
    printf("Enter second word: ");
    while ((ch = tolower(getchar())) != '\n') {
        if (isalpha(ch)) letter_frequency[ch - 'a'] -= 1;
    }
    while (pos < 26) {
         if (letter_frequency[pos] != 0) anagram = 0;
         pos++;
    }
    
    if (anagram) printf("The words are anagrams.\n");
    else printf("The words are not anagrams.\n");
    
    return 0;
}
