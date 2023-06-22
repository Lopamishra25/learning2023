#include <stdio.h>

struct Student {
    char name[50];
    int rollNumber;
    float marks;
};

void swapStudents(struct Student* student1Ptr, struct Student* student2Ptr) {
    
    char tempName[50];
    strcpy(tempName, student1Ptr->name);
    strcpy(student1Ptr->name, student2Ptr->name);
    strcpy(student2Ptr->name, tempName);

    int tempRollNumber = student1Ptr->rollNumber;
    student1Ptr->rollNumber = student2Ptr->rollNumber;
    student2Ptr->rollNumber = tempRollNumber;

    float tempMarks = student1Ptr->marks;
    student1Ptr->marks = student2Ptr->marks;
    student2Ptr->marks = tempMarks;
}

int main() {
    struct Student student1, student2;

    printf("Enter details for Student 1:\n");
    printf("Name: ");
    scanf("%s", student1.name);
    printf("Roll Number: ");
    scanf("%d", &(student1.rollNumber));
    printf("Marks: ");
    scanf("%f", &(student1.marks));

    printf("\nEnter details for Student 2:\n");
    printf("Name: ");
    scanf("%s", student2.name);
    printf("Roll Number: ");
    scanf("%d", &(student2.rollNumber));
    printf("Marks: ");
    scanf("%f", &(student2.marks));

    printf("\nBefore Swapping:\n");
    printf("Student 1:\n");
    printf("Name: %s\n", student1.name);
    printf("Roll Number: %d\n", student1.rollNumber);
    printf("Marks: %.2f\n", student1.marks);

    printf("\nStudent 2:\n");
    printf("Name: %s\n", student2.name);
    printf("Roll Number: %d\n", student2.rollNumber);
    printf("Marks: %.2f\n", student2.marks);

    // Swap the fields of the two Student structures
    swapStudents(&student1, &student2);

    printf("\nAfter Swapping:\n");
    printf("Student 1:\n");
    printf("Name: %s\n", student1.name);
    printf("Roll Number: %d\n", student1.rollNumber);
    printf("Marks: %.2f\n", student1.marks);

    printf("\nStudent 2:\n");
    printf("Name: %s\n", student2.name);
    printf("Roll Number: %d\n", student2.rollNumber);
    printf("Marks: %.2f\n", student2.marks);

    return 0;
}