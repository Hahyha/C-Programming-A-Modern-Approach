#include <stdio.h>

int main(void){
    int days, hours;
    double temperature_readings[30][24], average_d, average_m = 0;

    for (days = 0; days < 30; days++){
        average_d = 0;
        for (hours = 0; hours < 24; hours++){
            average_d += temperature_readings[days][hours];
        }
        average_m += (average_d / 24);
    }
    average_m /= 30;
    
    return 0;
}
