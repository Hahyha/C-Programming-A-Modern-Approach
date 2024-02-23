#include <stdio.h>
#include <ctype.h>

int main() {
    char first_name, last_name;
    
    printf("Enter a first and last name: ");
    while ((first_name = getchar()) == ' ');
    while ((last_name = getchar()) != ' ');
    while ((last_name = getchar()) != '\n') putchar(last_name);
    
    printf(", %c.\n", first_name);
    
    return 0;
}
