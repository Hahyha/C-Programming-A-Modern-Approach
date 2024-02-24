#include <stdio.h>

int main(void){
    int i, digit_seen[10] = {0};
    long number;
    
    printf("Enter a number: ");
    scanf("%ld", &number);
    
    while (number){
        while (number){
            digit_seen[number % 10] += 1;
            number /= 10;
        }

        printf("Digit:        0  1  2  3  4  5  6  7  8  9\n");
        printf("Occurrences:");
        for (i = 0; i < 10; i++){
            printf("%3d", digit_seen[i]);
        }
        
        printf("\nEnter a number: ");
        scanf("%ld", &number);
    }
    
    printf("Termination\n");
    
    return 0;
}
