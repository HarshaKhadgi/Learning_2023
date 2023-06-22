#include <stdio.h>

struct Time {
    int hours;
    int minutes;
    int seconds;
};

void getTimeDifference(struct Time t1, struct Time t2, struct Time *diff);

int main() {
    struct Time startTime, endTime, difference;

    printf("Enter the start time (hh:mm:ss): ");
    scanf("%d:%d:%d", &startTime.hours, &startTime.minutes, &startTime.seconds);

    printf("Enter the end time (hh:mm:ss): ");
    scanf("%d:%d:%d", &endTime.hours, &endTime.minutes, &endTime.seconds);

    getTimeDifference(startTime, endTime, &difference);

    printf("Time difference: %02d:%02d:%02d\n", difference.hours, difference.minutes, difference.seconds);

    return 0;
}

void getTimeDifference(struct Time t1, struct Time t2, struct Time *diff) {
    int secondsDiff;

    if (t2.seconds < t1.seconds) {
        t2.minutes--;
        t2.seconds += 60;
    }
    diff->seconds = t2.seconds - t1.seconds;

    if (t2.minutes < t1.minutes) {
        t2.hours--;
        t2.minutes += 60;
    }
    diff->minutes = t2.minutes - t1.minutes;

    diff->hours = t2.hours - t1.hours;
}