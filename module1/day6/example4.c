#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int countDaysElapsed(const char *dateStr) {
    char *dateCopy = strdup(dateStr); 
    char *token = strtok(dateCopy, "/"); 

    int day = atoi(token); 
    token = strtok(NULL, "/");
    int month = atoi(token); 
    token = strtok(NULL, "/");
    int year = atoi(token); 

    free(dateCopy); 

    int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; 
    int totalDays = day;

    for (int i = 1; i < month; i++) {
        totalDays += daysInMonth[i];
    }

    if (isLeapYear(year) && month > 2) {
        totalDays += 1;
    }

    return totalDays;
}

int main() {
    const char *dateStr = "10/04/2015";
    printf("Date: %s\n", dateStr);

    int daysElapsed = countDaysElapsed(dateStr);

    printf("Number of Days Elapsed: %d\n", daysElapsed);

    return 0;
}