#include <stdio.h>

int findLargestNumber(int number) {
    int largest = 0;
    int multiplier = 1;

    
    while (number > 0) {
        int digit = number % 10;  
        int remaining = number / 10;  

        int candidate = remaining * multiplier;  

        if (candidate > largest) {
            largest = candidate;
        }

        number = remaining;  
        multiplier *= 10;
    }

    return largest;
}

int main() {
    int number;

    printf("Enter a 4-digit number: ");
    scanf("%d", &number);

    int largest = findLargestNumber(number);
    printf("Largest number by deleting a single digit: %d\n", largest);

    return 0;
}