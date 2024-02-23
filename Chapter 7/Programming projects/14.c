#include <stdio.h>
#include <ctype.h>
#include <math.h>

int main() {
    double x, y = 1, division, average;
    
    printf("Enter a positive number: ");
    scanf("%lf", &x);
    
    division = x / y;
    average = (y + division) / 2;
    while (fabs(average - y) >= 0.00001){
        y = average;
        division = x / y;
        average = (y + division) / 2;
    }
    
    printf("Square root: %lf\n", y);
    
    return 0;
}
