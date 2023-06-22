#include <stdio.h>


struct ComplexNumber {
    float real;
    float imaginary;
};

//  read a complex number from the user
void readComplexNumber(struct ComplexNumber* numPtr) {
    printf("Enter real part: ");
    scanf("%f", &(numPtr->real));

    printf("Enter imaginary part: ");
    scanf("%f", &(numPtr->imaginary));
}

//  write a complex number to the console
void writeComplexNumber(const struct ComplexNumber* numPtr) {
    printf("Complex number: %.2f + %.2fi\n", numPtr->real, numPtr->imaginary);
}

//  add two complex numbers
struct ComplexNumber addComplexNumbers(const struct ComplexNumber* num1Ptr, const struct ComplexNumber* num2Ptr) {
    struct ComplexNumber result;
    result.real = num1Ptr->real + num2Ptr->real;
    result.imaginary = num1Ptr->imaginary + num2Ptr->imaginary;
    return result;
}

//  multiply two complex numbers
struct ComplexNumber multiplyComplexNumbers(const struct ComplexNumber* num1Ptr, const struct ComplexNumber* num2Ptr) {
    struct ComplexNumber result;
    result.real = (num1Ptr->real * num2Ptr->real) - (num1Ptr->imaginary * num2Ptr->imaginary);
    result.imaginary = (num1Ptr->real * num2Ptr->imaginary) + (num1Ptr->imaginary * num2Ptr->real);
    return result;
}

int main() {
    struct ComplexNumber num1, num2;

    printf("Reading first complex number:\n");
    readComplexNumber(&num1);

    printf("\nReading second complex number:\n");
    readComplexNumber(&num2);

    printf("\nFirst ");
    writeComplexNumber(&num1);

    printf("Second ");
    writeComplexNumber(&num2);

    printf("\nAddition of complex numbers:\n");
    struct ComplexNumber sum = addComplexNumbers(&num1, &num2);
    writeComplexNumber(&sum);

    printf("\nMultiplication of complex numbers:\n");
    struct ComplexNumber product = multiplyComplexNumbers(&num1, &num2);
    writeComplexNumber(&product);

    return 0;
}