#include <stdio.h>
#include <ctype.h>

double inner_product(double [], double [], int);

int main(void) {
    double a[3] = {5.24, -1.77, 12.6666}, b[3] = {55.111, -17.512, 155.22}, n = 3;
    
    printf("%lf\n", inner_product(a, b, n));
    
    return 0;
}

double inner_product(double a[], double b[], int n) {
    double sum = 0;
    
    while (n--) sum += a[n] * b[n];
    return sum;
}
