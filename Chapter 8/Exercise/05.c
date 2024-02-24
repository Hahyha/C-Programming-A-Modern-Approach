#include <stdio.h>

int main(void){
    int fib_numbers[40] = {0, 1}, i = 2;
  
    while (i < 40){
        fib_numbers[i] = fib_numbers[i - 1] + fib_numbers[i - 2];
        i++;
    }

    return 0;
}
