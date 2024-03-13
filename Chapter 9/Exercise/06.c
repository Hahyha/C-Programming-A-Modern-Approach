#include <stdio.h>

int digit(int, int);

int main() {
    int n, k;
    
    printf("Enter a number and which digit you want to extract: ");
    scanf("%d %d", &n, &k);
    
    printf("The %dth digit of %d is: %d\n", k, n, digit(n, k));

    return 0;
}

int digit(int n, int k) {
    while (--k) n /= 10;
    return n % 10;
}
