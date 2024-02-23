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
            t = hour * 60 + min;
            break;
        case 'P':
            t = (hour + 12) * 60 + min;
            break;
        default:
            printf("Something is wrong\n");
            break;
    }
    
    if ((t <= 531) && (t > 172)) printf("Closest departure time is 08:00 a.m., arriving at 10:16 a.m.\n");
    else if (t <= 630) printf("Closest departure time is 09:43 a.m., arriving at 11:52 a.m.\n");
    else if (t == 631) printf("Closest departure time is 09:43 and 11:19 a.m., arriving at 11:52 a.m. and 01:31 p.m. respectively.\n");
    else if (t <= 722) printf("Closest departure time is 11:19 a.m., arriving at 01:31 p.m.\n");
    else if (t == 723) printf("Closest departure time is 11:19 a.m. and 12:47 p.m., arriving at 01:31 and 03:00 p.m. respectively.\n");
    else if (t <= 803) printf("Closest departure time is 12:47 p.m., arriving at 03:00 p.m.\n");
    else if (t <= 892) printf("Closest departure time is 02:00 p.m., arriving at 04:08 p.m.\n");
    else if (t <= 1042) printf("Closest departure time is 03:45 p.m., arriving at 05:55 p.m.\n");
    else if (t <= 1222) printf("Closest departure time is 07:00 p.m., arriving at 09:20 p.m.\n");
    else printf("Closest departure time is 09:45 p.m., arriving at 11:58 p.m.\n");
    
    return 0;
}
