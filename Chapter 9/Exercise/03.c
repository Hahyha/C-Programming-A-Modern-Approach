#include <stdio.h>

int main() {
    int m, n, d;
    
    printf("Please enter two numbers: ");
    scanf("%d %d", &m, &n);
    d = gcd(m, n);
    printf("The greatest common divisor is: %d\n", d);

    return 0;
}

int gcd(int m, int n) {
    int r;
    
    while (n) {
        r = m % n;
        m = n;
        n = r;
    }
    
    return m;
}
