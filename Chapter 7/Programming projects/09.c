#include <stdio.h>
#include <ctype.h>

int main() {
    int hour, min, t;
    char meridian;
    
    printf("Enter a time 12-hour time: ");
    scanf("%d:%d", &hour, &min);
    while ((meridian = getchar()) == ' ');
    meridian = toupper(meridian);
    
    switch (meridian){
        case 'A':
            printf("Equivalent 24-hour time: %d:%d\n", hour, min);
            break;
        case 'P':
            printf("Equivalent 24-hour time: %d:%d\n", hour + 12, min);
            break;
        default:
            printf("Something is wrong\n");
            break;
    }
    
    return 0;
}
