#include <stdio.h>

int main() {
    int arr[] = {64, 84, 20, 36, 12, 90, 72, 10, 45, 56}; 
    int len = sizeof(arr) / sizeof(arr[0]); 

    printf("Original Array: ");
    for (int i = 0; i < len; i++) {
        printf("%d ", arr[i]);
    }

    for (int i = 0; i < len / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[len - i - 1];
        arr[len - i - 1] = temp;
    }

    printf("\nReversed Array: ");
    for (int i = 0; i < len; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}