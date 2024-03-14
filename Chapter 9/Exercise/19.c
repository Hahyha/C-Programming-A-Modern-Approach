#include <stdio.h>
#include <stdbool.h>

/* prototypes */
void pb(int);

/******************
* main: Calls pb  *
******************/
int main() {
    
    pb(20);
    printf("\n");
    pb(100);
    
    return 0;
}

/***************************************************************
* pb: Divide the inputs until it's zero and determine whether  *
*     the number is odd.                                       *
***************************************************************/
void pb(int n) {
    if (n != 0) {
        pb(n / 2);
        putchar('0' + n % 2);
    }
}
