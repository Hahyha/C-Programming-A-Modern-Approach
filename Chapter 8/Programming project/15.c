#include <stdio.h>

int main() {
    char mes[80];
    int mes_pos = 0, shift, encrypt_mes_pos = 0; 
    
    printf("Enter message to be encrypted: ");
    while ((mes[mes_pos] = getchar()) != '\n') mes_pos++;
    printf("Enter shift amount (1-25): ");
    scanf("%d", &shift);
    printf("Encrypted message: ");
    
    while (encrypt_mes_pos < mes_pos) {
        if ((mes[encrypt_mes_pos] <= 'Z') && (mes[encrypt_mes_pos] >= 'A')) {
            mes[encrypt_mes_pos] = (mes[encrypt_mes_pos] - 'A' + shift) % 26 + 'A';
        }
        else if ((mes[encrypt_mes_pos] <= 'z') && (mes[encrypt_mes_pos] >= 'a')) {
            mes[encrypt_mes_pos] = (mes[encrypt_mes_pos] - 'a' + shift) % 26 + 'a';
        }
        putchar(mes[encrypt_mes_pos]);
        encrypt_mes_pos++;
    }

    return 0;
}
