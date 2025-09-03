#include <stdio.h>


void checkEvenOdd(void);


void checkEvenOdd(void) {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if(num % 2 == 0) {
        printf("Even\n");
    } else {
        printf("Odd\n");
    }
}

int main() {
    checkEvenOdd();
    return 0;
} 