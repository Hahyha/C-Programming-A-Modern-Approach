#include <stdio.h>

int largest(int [], int);
float average(int [], int);
int num_positive(int [], int);

int main(void) {
    int a[10] = {1, 2, 355, -72, 33, 43, 17, -122, 99, -98}, n = 10;
    
    printf("%d %.2f %d\n", largest(a, n), average(a, n), num_positive(a, n));
    
    return 0;
}

int largest(int a[], int n) {
    int i;
    
    for (i = 1; i < n; i++) a[0] = a[0] > a[i] ? a[0] : a[i];
    return a[0];
}

float average(int a[], int n) {
    int i;
    
    for (i = 1; i < n; i++) a[0] += a[i];
    return (float) a[0] / n;
}

int num_positive(int a[], int n) {
    int i, num = 0;
    
    for (i = 0; i < n; i++) {
        if (a[i] > 0) num++;
    }
    return num;
}
