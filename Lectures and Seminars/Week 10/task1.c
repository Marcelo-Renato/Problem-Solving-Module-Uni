#include <stdio.h>


float calculateInterest(float principal, float rate, float time) {
    return (principal * rate * time) / 100.0;
}

int main()

{
    float p1 = 1000, r1 = 5, t1 = 2;
    float p2 = 1500, r2 = 4.5, t2 = 3;

    float interest1 = calculateInterest(p1, r1, t1);
    float interest2 = calculateInterest(p2, r2, t2);

    printf("Interest for first set: %.2f\n", interest1);
    printf("Interest for second set: %.2f\n", interest2);


}