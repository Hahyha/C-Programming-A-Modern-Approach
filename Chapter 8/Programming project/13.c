#include <stdio.h>

int main() {
    char last_name[20], first_name;
    int i = 0, j = 0;
    
    printf("Enter a first and last name: ");
    first_name = getchar();
    while ((last_name[0] = getchar()) != ' ');
    while ((last_name[i] = getchar()) != '\n') i++;
    
    printf("You entered the name: ");
    while (j < i) {
        putchar(last_name[j]);
        j++;
    }
    printf(", %c.\n", first_name);

    return 0;
}
