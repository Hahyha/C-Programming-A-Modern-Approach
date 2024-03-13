#include <stdio.h>

int day_of_year(int, int, int);

int main() {
    int month, day, year, day_of_the_year;
    
    printf("Enter a date(mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);
    
    printf("Day of the year: %d", day_of_year(month, day, year));

    return 0;
}

int day_of_year(int month, int day, int year) {
    if (((year % 4 ==0) && (year % 100 != 0)) || (year % 400 == 0)) {
        switch (month) {
            case 1:
                return day;
                break;
            case 2:
                return day + 31;
                break;
            case 3:
                return day + 31 + 29;
                break;
            case 4:
                return day + 31 + 29 + 31;
                break;
            case 5:
                return day + 31 + 29 + 31 + 30;
                break;
            case 6:
                return day + 31 + 29 + 31 + 30 + 31;
                break;
            case 7:
                return day + 31 + 29 + 31 + 30 + 31 + 30;
                break;
            case 8:
                return day + 31 + 29 + 31 + 30 + 31 + 30 + 31;
                break;
            case 9:
                return day + 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31;
                break;
            case 10:
                return day + 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30;
                break;
            case 11:
                return day + 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31;
                break;
            case 12:
                return day + 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30;
                break;
            default:
                printf("Something's wrong.\n");
                return 0;
                break;
        }
    }
    else {
        switch (month) {
            case 1:
                return day;
                break;
            case 2:
                return day + 31;
                break;
            case 3:
                return day + 31 + 28;
                break;
            case 4:
                return day + 31 + 28 + 31;
                break;
            case 5:
                return day + 31 + 28 + 31 + 30;
                break;
            case 6:
                return day + 31 + 28 + 31 + 30 + 31;
                break;
            case 7:
                return day + 31 + 28 + 31 + 30 + 31 + 30;
                break;
            case 8:
                return day + 31 + 28 + 31 + 30 + 31 + 30 + 31;
                break;
            case 9:
                return day + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31;
                break;
            case 10:
                return day + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30;
                break;
            case 11:
                return day + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31;
                break;
            case 12:
                return day + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30;
                break;
            default:
                printf("Something's wrong.\n");
                return 0;
                break;
        }
    }
}
