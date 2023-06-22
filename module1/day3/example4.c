#include <stdio.h>

void findSmallestAndLargestDigits(int n, int numbers[]) {
    int smallest = 9;
    int largest = 0;

    for (int i = 0; i < n; i++) {
        int currentNumber = numbers[i];

        while (currentNumber > 0) {
            int digit = currentNumber % 10;  
            currentNumber /= 10;  

            if (digit < smallest) {
                smallest = digit;
            }
            if (digit > largest) {
                largest = digit;
            }
        }
    }

    if (smallest == 9 || largest == 0) {
        printf("Not Valid\n");
    } else {
        printf("Smallest digit: %d\n", smallest);
        printf("Largest digit: %d\n", largest);
    }
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid value of n.\n");
        return 0;
    }

    int numbers[n];
    printf("Enter the %d numbers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    findSmallestAndLargestDigits(n, numbers);

    return 0;
}