#include <stdio.h>
#include <ctype.h>

int main() {
    char operand;
    float number, result;
    int k = 0;
    
    printf("Enter an expression: ");
    scanf("%f", &result);
    
    while ((operand = getchar()) != '\n'){
        scanf("%f", &number);
        switch (operand){
            case '+':
                result += number;
                break;
            case '-':
                result -= number;
                break;
            case '*':
                result *= number;
                break;
            case '/':
                if (number != 0) result /= number;
                else{
                    printf("A number can't be divided by zero.\n");
                    k = 1;
                }
                break;
            default:
                printf("There's something wrong.\n");
                break;
        }
    }
    
    if (k = 0) printf("Value of expression: %.1f\n", result);
    
    return 0;
}
