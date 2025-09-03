#include <stdio.h>

int main() {
    int n, num, even_sum = 0, odd_sum = 0;

    printf("How many numbers will you enter? ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);

        if(num % 2 == 0) {
            even_sum += num;
        } else {
            odd_sum += num;
        }
    }

    printf("Sum of even numbers: %d\n", even_sum);
    printf("Sum of odd numbers: %d\n", odd_sum);

    return 0;
}

