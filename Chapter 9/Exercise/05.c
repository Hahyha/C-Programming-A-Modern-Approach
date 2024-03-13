#include <stdio.h>

int num_digits(int);

int main() {
    int n;
    
    printf("Enter a integer: ");
    scanf("%d", &n);
    
    printf("The number of digits of the integer is: %d\n", num_digits(n));

    return 0;
}

int num_digits(int n) {
    int num_of_digit = 0;
    
    while (n) {
        n /= 10;
        num_of_digit++;
    }
    return num_of_digit;
}
