#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int computeTotalSeconds(const char *timeStr) {
    char *timeCopy = strdup(timeStr); 
    char *token = strtok(timeCopy, ":"); 

    unsigned long hours = strtoul(token, NULL, 10); 
    token = strtok(NULL, ":");
    unsigned long minutes = strtoul(token, NULL, 10); 
    token = strtok(NULL, ":");
    unsigned long seconds = strtoul(token, NULL, 10); 

    free(timeCopy); 

    int totalSeconds = hours * 3600 + minutes * 60 + seconds; 

    return totalSeconds;
}

int main() {
    const char *timeStr = "10:12:50";
    printf("Time: %s\n", timeStr);

    int totalSeconds = computeTotalSeconds(timeStr);

    printf("Total Seconds: %d\n", totalSeconds);

    return 0;
}