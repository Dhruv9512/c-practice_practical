#include <stdio.h>

struct Time
{
    int seconds;
    int minutes;
    int hours;
};
struct Time timeDifference(struct Time time1, struct Time time2)
{
    struct Time difference;
    int totalSeconds1 = time1.hours * 3600 + time1.minutes * 60 + time1.seconds;
    int totalSeconds2 = time2.hours * 3600 + time2.minutes * 60 + time2.seconds;
    int differenceSeconds = totalSeconds1 > totalSeconds2 ? (totalSeconds1 - totalSeconds2) : (totalSeconds2 - totalSeconds1);
    difference.hours = differenceSeconds / 3600;
    differenceSeconds = differenceSeconds%3600;
    difference.minutes = differenceSeconds / 60;
    difference.seconds = differenceSeconds % 60;
    return difference;
}

int main()
{
    struct Time time1, time2;
    printf("Enter the first time (format: hours minutes seconds): ");
    scanf("%d %d %d", &time1.hours, &time1.minutes, &time1.seconds);
    printf("Enter the second time (format: hours minutes seconds): ");
    scanf("%d %d %d", &time2.hours, &time2.minutes, &time2.seconds);
    struct Time timeDiff = timeDifference(time1, time2);
    printf("\nTime Difference: %d hours %d minutes %d seconds\n", timeDiff.hours, timeDiff.minutes, timeDiff.seconds);
     return 0;
}
