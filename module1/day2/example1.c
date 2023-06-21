#include <stdio.h>

void printExponent(double x) {
    unsigned long long *ptr = (unsigned long long *)&x;  // Pointer to treat x as unsigned long long

    // Extracting exponent bits using bitwise operations
    unsigned long long exponent = (*ptr >> 52) & 0x7FF;

    // Printing exponent in hexadecimal format
    printf("Exponent (Hex): 0x%llX\n", exponent);

    // Printing exponent in binary format
    printf("Exponent (Binary): 0b");
    for (int i = 11; i >= 0; i--) {
        unsigned long long bit = (exponent >> i) & 1;
        printf("%llu", bit);
    }
    printf("\n");
}

int main() {
    double x = 0.7;
    printExponent(x);
    return 0;
}