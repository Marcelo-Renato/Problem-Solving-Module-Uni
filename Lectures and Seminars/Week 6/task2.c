#include <stdio.h>

int main() {
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    if (number % 3 == 0) {
        printf("%d is a multiple of 3.\n", number);
    } else {
        printf("%d is not a multiple of 3.\n", number);
    }

    return 0 ;
}