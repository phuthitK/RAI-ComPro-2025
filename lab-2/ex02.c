#include <stdio.h>

int main(){

    int time_min;

    printf ("Enter total minutes: ");
    scanf ("%d", &time_min);

    int hour , min;

    hour = time_min / 60;
    min = time_min % 60;

    printf ("%d minutes is %d hour(s) and %d minutes\n", time_min, hour, min);

    return 0;

}