#include <stdio.h>


int findMax(int a, int b, int c) {
    int max = a;
    if(b > max) max = b;
    if(c > max) max = c;
    return max;
}

int main() 

{
    int max1 = findMax(10, 25, 15);
    int max2 = findMax(7, 3, 9);

    printf("Maximum of (10, 25, 15): %d\n", max1);
    printf("Maximum of (7, 3, 9): %d\n", max2);

    return 0;
}