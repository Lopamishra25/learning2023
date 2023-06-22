#include <stdio.h>

// Structure definition for Box
struct Box {
    float length;
    float width;
    float height;
};

// Function to calculate the volume of the box
float calculateVolume(struct Box* boxPtr) {
    return boxPtr->length * boxPtr->width * boxPtr->height;
}

// Function to calculate the total surface area of the box
float calculateSurfaceArea(struct Box* boxPtr) {
    float topArea = boxPtr->length * boxPtr->width;
    float frontArea = boxPtr->length * boxPtr->height;
    float sideArea = boxPtr->width * boxPtr->height;

    return 2 * (topArea + frontArea + sideArea);
}

int main() {
    struct Box myBox;
    struct Box* boxPtr = &myBox;

    //  using the indirection operator (*) and dot operator (.)
    (*boxPtr).length = 5.0;
    (*boxPtr).width = 3.0;
    (*boxPtr).height = 2.0;

    //  using the arrow operator (->) and dot representation
    boxPtr->length = 5.0;
    boxPtr->width = 3.0;
    boxPtr->height = 2.0;

   
    printf("Volume: %.2f\n", calculateVolume(boxPtr));
    printf("Total Surface Area: %.2f\n", calculateSurfaceArea(boxPtr));

    return 0;
}