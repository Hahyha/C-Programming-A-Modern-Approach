#include <stdio.h>

/* prototypes */
double tax_due(double);

/***********************************************
* main: Collects input data and calls tax_due. *
***********************************************/
int main() {
    double income;
    
    printf("Enter your income: ");
    scanf("%lf", &income);
    printf("Your tax due is: %.1lf\n", tax_due(income));
    return 0;
}

/*************************************************
* tax_due: Evaluate the tax of the input income. *
*************************************************/
double tax_due(double income) {
    if (income < 750) return income * 0.01;
    else if (income < 2250) return 7.5 + (income - 750) * 0.02;
    else if (income < 3750) return 37.5 + (income - 2250) * 0.03;
    else if (income < 5250) return 82.5 + (income - 3750) * 0.04;
    else if (income < 7000) return 142.5 + (income - 5250) * 0.05;
    else                    return 230 + (income - 7000) * 0.06;
}
