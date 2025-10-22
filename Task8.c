#include <stdio.h>

int main() {
    char str[100];

    printf("Enter a string (alphabets will stop input): ");
    scanf("%[^A-Za-z]", str);

    printf("\nNon-alphabetic characters entered: %s\n", str);

    return 0;
}

