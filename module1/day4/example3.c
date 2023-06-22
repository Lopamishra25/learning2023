#include <stdio.h>

struct Time {
    int hours;
    int minutes;
    int seconds;
};

struct Time calculateTimeDifference(const struct Time* startTimePtr, const struct Time* endTimePtr) {
    struct Time difference;

    int startTotalSeconds = (startTimePtr->hours * 3600) + (startTimePtr->minutes * 60) + startTimePtr->seconds;
    int endTotalSeconds = (endTimePtr->hours * 3600) + (endTimePtr->minutes * 60) + endTimePtr->seconds;
    int totalSecondsDiff = endTotalSeconds - startTotalSeconds;

    difference.hours = totalSecondsDiff / 3600;
    totalSecondsDiff %= 3600;
    difference.minutes = totalSecondsDiff / 60;
    difference.seconds = totalSecondsDiff % 60;

    return difference;
}

int main() {
    struct Time startTime, endTime, difference;

    printf("Enter the start time (hours minutes seconds): ");
    scanf("%d %d %d", &(startTime.hours), &(startTime.minutes), &(startTime.seconds));

    printf("Enter the end time (hours minutes seconds): ");
    scanf("%d %d %d", &(endTime.hours), &(endTime.minutes), &(endTime.seconds));

    difference = calculateTimeDifference(&startTime, &endTime);

    printf("\nTime Difference: %d hours, %d minutes, %d seconds\n", difference.hours, difference.minutes, difference.seconds);

    return 0;
}