#include <stdio.h>

void swap(void* a, void* b, size_t size) {
    unsigned char* byte_a = (unsigned char*)a;
    unsigned char* byte_b = (unsigned char*)b;
    unsigned char temp;

    for (size_t i = 0; i < size; i++) {
        temp = byte_a[i];
        byte_a[i] = byte_b[i];
        byte_b[i] = temp;
    }
}

int main() {
    int a = 10;
    int b = 20;

    printf("Before swapping: a = %d, b = %d\n", a, b);
    swap(&a, &b, sizeof(int));
    printf("After swapping: a = %d, b = %d\n", a, b);

    double c = 3.14;
    double d = 2.718;

    printf("Before swapping: c = %lf, d = %lf\n", c, d);
    swap(&c, &d, sizeof(double));
    printf("After swapping: c = %lf, d = %lf\n", c, d);

    return 0;
}