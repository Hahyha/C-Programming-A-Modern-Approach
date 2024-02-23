#include <stdio.h>
#include <ctype.h>

int main() {
    char operand;
    float number, result;
    
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
                result /= number;
                break;
            default:
                printf("There's something wrong.\n");
                break;
        }
    }
    
    printf("Value of expression: %f\n", result);
    
    return 0;
}
