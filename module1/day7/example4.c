#include <stdio.h>
#include <stdlib.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

int compare(const void *a, const void *b) {
    const struct Student *studentA = (const struct Student *)a;
    const struct Student *studentB = (const struct Student *)b;

    if (studentA->marks < studentB->marks) {
        return 1;  
    } else if (studentA->marks > studentB->marks) {
        return -1; 
    } else {
        return 0;
    }
}

void sortStudents(struct Student *students, int size) {
    qsort(students, size, sizeof(struct Student), compare);
}

void displayStudents(const struct Student *students, int size) {
    for (int i = 0; i < size; i++) {
        printf("Student %d:\n", i + 1);
        printf("Roll No: %d\n", students[i].rollno);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
        printf("\n");
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

    printf("Before sorting:\n");
    displayStudents(students, size);

    sortStudents(students, size);

    printf("After sorting:\n");
    displayStudents(students, size);

    return 0;
}