#include <stdio.h>


int sumArray(int arr[], int size) {
    int sum = 0;
    for(int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int numbers[] = {5, 10, 15, 20, 25};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int result = sumArray(numbers, size);

    printf("Sum of array elements: %d\n", result);

    return 0;

}