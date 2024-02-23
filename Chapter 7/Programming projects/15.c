#include <stdio.h>
#include <ctype.h>
#include <math.h>

int main() {
    long double i, num, factorial = 1;
    
    printf("Enter a positive number: ");
    scanf("%llf", &num);
    
    for (i = 2; i <= num; i++){
        factorial *= i;
    }
    
    printf("Factorial of %.0llf: %.0llf\n", num, factorial);
    
    return 0;
}
