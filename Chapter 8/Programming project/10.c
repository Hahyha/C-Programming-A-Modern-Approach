#include <stdio.h>
#include <math.h>

int main() {
    int dep_time[8] = {480, 583, 679, 767, 840, 945, 1140, 1305};
    int arr_time[8] = {616, 712, 811, 900, 968, 1075, 1280, 1438};
    int i, hour, minute, t, result_t = 1440, result_plane = 0;
    
    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &minute);
    t = hour * 60 + minute;
    
    for (i = 0; i < 8; i++) {
        if (fabs(t - result_t) > fabs(t - dep_time[i])) {
            result_plane = i;
            result_t = dep_time[i];
        }
    }
    
    if (result_plane < 2) printf("Cloest departure time is %d:%.2d a.m., arriving at %d:%.2d a.m.", dep_time[result_plane] / 60, dep_time[result_plane] % 60, arr_time[result_plane] / 60, arr_time[result_plane] % 60);
    else if (result_plane > 2) printf("Cloest departure time is %d:%.2d p.m., arriving at %d:%.2d p.m.", dep_time[result_plane] / 60, dep_time[result_plane] % 60, arr_time[result_plane] / 60, arr_time[result_plane] % 60);
    else printf("Cloest departure time is %d:%.2d a.m., arriving at %d:%.2d p.m.", dep_time[result_plane] / 60, dep_time[result_plane] % 60, arr_time[result_plane] / 60, arr_time[result_plane] % 60);

    return 0;
}
