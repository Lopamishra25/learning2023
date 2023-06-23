#include <stdio.h>
#include <string.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

void searchByName(const struct Student *students, int size, const char *targetName) {
    int found = 0;
    for (int i = 0; i < size; i++) {
        if (strcmp(students[i].name, targetName) == 0) {
            printf("Student Found:\n");
            printf("Roll No: %d\n", students[i].rollno);
            printf("Name: %s\n", students[i].name);
            printf("Marks: %.2f\n", students[i].marks);
            printf("\n");
            found = 1;
        }
    }

    if (!found) {
        printf("Student not found.\n");
    }
}

int main() {
    int size = 5;  
    struct Student students[size] = {
        {1001, "Aron", 100.00},
        {1002, "Bob", 95.50},
        {1003, "Charlie", 87.25},
        {1004, "David", 92.75},
        {1005, "Emily", 88.50}
    };

    char targetName[20];
    printf("Enter the name of the student to search: ");
    scanf("%s", targetName);

    searchByName(students, size, targetName);

    return 0;
}