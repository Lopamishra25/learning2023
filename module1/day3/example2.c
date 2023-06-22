#include <stdio.h>

void print_bits(int n) {
    int i;
    for (i = 31; i >= 0; i--) {
        int bit = (n >> i) & 1;
        printf("%d", bit);
    }
    printf("\n");
}

int main() {
    int num;
    printf("Enter a 32-bit integer: ");
    scanf("%d", &num);

    printf("Bits representation:\n");
    print_bits(num);

    return 0;
}