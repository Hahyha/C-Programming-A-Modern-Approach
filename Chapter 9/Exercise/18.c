#include <stdio.h>
#include <stdbool.h>

/* prototypes */
int gcd(int, int);

/******************
* main: Calls gcd *
******************/
int main() {
    
    printf("%d\n", gcd(33, 8305));
    
    return 0;
}

/***************************************************************
* gcd: Evaluate the greatest common divisor of the two inputs. *
***************************************************************/
int gcd(int m, int n) {
    return n == 0 ? m : gcd(n, m % n);
}
