#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STUDENTS 100

struct Student {
    int rollno;
    char name[20];
    float marks;
};

int parseString(const char *inputString, struct Student *students) {
    int count = 0;
    char *token;
    char *copy = strdup(inputString);  

    
    token = strtok(copy, " ");

    while (token != NULL) {
        
        students[count].rollno = atoi(token);

        
        token = strtok(NULL, " ");
        strcpy(students[count].name, token);

        
        token = strtok(NULL, " ");
        students[count].marks = atof(token);

        count++;

        token = strtok(NULL, " ");
    }

    free(copy);  

    return count;
}

int main() {
    const char *inputString = "1001 Aron 100.00 1002 Bob 95.50 1003 Charlie 87.25";

    struct Student students[MAX_STUDENTS];

    int studentCount = parseString(inputString, students);

    
    for (int i = 0; i < studentCount; i++) {
        printf("Student %d:\n", i + 1);
        printf("Roll No: %d\n", students[i].rollno);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
        printf("\n");
    }

    return 0;
}