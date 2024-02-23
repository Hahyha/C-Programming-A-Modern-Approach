#include <stdio.h>
#include <ctype.h>

int main() {
    
    printf("int can store %zu bits in this machine.\n", sizeof(int) * 8);
    printf("short can store %zu bits in this machine.\n", sizeof(short) * 8);
    printf("long can store %zu bits in this machine.\n", sizeof(long) * 8);
    printf("float can store %zu bits in this machine.\n", sizeof(float) * 8);
    printf("double can store %zu bits in this machine.\n", sizeof(double) * 8);
    printf("long double can store %zu bits in this machine.\n", sizeof(long double) * 8);

    return 0;
}
