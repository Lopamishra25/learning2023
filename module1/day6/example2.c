#include <stdio.h>

int stringToInt(char *str) {
    int res = 0; 

    for (int i = 0; str[i] != '\0'; i++) {
        int ival = str[i] - '0'; 

        res = res * 10 + ival; 
    }

    return res;
}

int main() {
    char str[] = {'5', '2', '7', '8', '\0'};
    printf("Input String: %s\n", str);

    int value = stringToInt(str);

    printf("Integer Value: %d\n", value);

    return 0;
}