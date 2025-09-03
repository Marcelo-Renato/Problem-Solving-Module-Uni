#include <stdio.h>

void countEvenOdd(int arr[], int size, int *even, int *odd) {
    *even = 0;
    *odd = 0;
    for(int i = 0; i < size; i++) {
        if(arr[i] % 2 == 0) {
            (*even)++;
        } else {
            (*odd)++;
        }
    }
}

int main() {
    int numbers[] = {1, 2, 3, 4, 5};
    int size = 5;
    int evenCount, oddCount;

    countEvenOdd(numbers, size, &evenCount, &oddCount);

    printf("There are %d even numbers\n", evenCount);
    printf("There are %d odd numbers\n", oddCount);

    return 0;
} 