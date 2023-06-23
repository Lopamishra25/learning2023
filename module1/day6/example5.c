#include <stdio.h>
#include <string.h>

void rotateLeft(char *str, int k) {
    int len = strlen(str);
    k = k % len;

    char temp[k + 1];
    strncpy(temp, str, k);
    temp[k] = '\0';

    memmove(str, str + k, len - k + 1);
    strcat(str, temp);
}

void rotateRight(char *str, int k) {
    int len = strlen(str);
    k = k % len;

    char temp[k + 1];
    strncpy(temp, str + len - k, k);
    temp[k] = '\0';

    memmove(str + k, str, len - k + 1);
    strncpy(str, temp, k);
}

int main() {
    char str[] = "abcdxyz";
    int k = 2;

    printf("Input String: %s\n", str);

    printf("Rotate Left by %d: ", k);
    rotateLeft(str, k);
    printf("%s\n", str);

    printf("Rotate Right by %d: ", k);
    rotateRight(str, k);
    printf("%s\n", str);

    return 0;
}