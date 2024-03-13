#include <stdio.h>
#include <ctype.h>

float compute_GPA(char [], int);

int main(void) {
    char grades[10] = {'A', 'a', 'c', 'B', 'A', 'F', 'f', 'b', 'a', 'a'}, n = 10;
    
    printf("GPA is %.2f\n", compute_GPA(grades, n));
    
    return 0;
}

float compute_GPA(char grades[], int n){
    float avg = 0;
    int i;
    
    for (i = 0; i <= n; i++) {
        grades[i] = toupper(grades[i]);
        switch (grades[i]) {
            case 'A':
                avg += 4;
                break;
            case 'B':
                avg += 3;
                break;
            case 'C':
                avg += 2;
                break;
            case 'D':
                avg += 1;
                break;
            default:
                break;
        }
    }
    return avg / n;
}
