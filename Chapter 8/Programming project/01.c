#include <stdio.h>

int main(void){
    int i, digit_seen[10] = {0};
    long number;
    
    printf("Enter a number: ");
    scanf("%ld", &number);
    
    while (number){
        digit_seen[number % 10] += 1;
        number /= 10;
    }

    printf("Repeated digit(s):");
    for (i = 0; i < 10; i++){
        if (digit_seen[i] > 1) printf("%2d", i);
    }
    
    return 0;
}
