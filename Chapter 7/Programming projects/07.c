#include <stdio.h>
#include <ctype.h>

int main() {
    int num1, num2, den1, den2;
    char as;
    
    printf("Enter two fractions separated by an arithmetic sign: ");
    scanf("%d/%d", &num1, &den1);
    as = getchar();
    scanf("%d/%d", &num2, &den2);
    
    switch (as) {
        case '+':
            printf("The result is %d/%d\n", num1 * den2 + num2 * den1, den1 * den2);
            break;
        case '-':
            printf("The result is %d/%d\n", num1 * den2 - num2 * den1, den1 * den2);
            break;
        case '*':
            printf("The result is %d/%d\n", num1 * num2, den1 * den2);
            break;
        case '/':
            printf("The result is %d/%d\n", num1 * den2, den1 * num2);
            break;
        default:
            printf("You've entered an illegal input\n");
            break;
    }

    return 0;
}
