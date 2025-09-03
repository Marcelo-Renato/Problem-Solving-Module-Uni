
#include <stdio.h>

int main(void) {
    
    int mathsHours = 5;    
    int progHours = 8;     
    int netHours = 6;

    int totalHours = mathsHours + progHours + netHours;

    printf("Weekly Study Hours:\n");
    printf("Maths: %d\n", mathsHours);
    printf("Programming: %d\n", progHours);
    printf("Networking: %d\n", netHours);
    printf("Total Weekly Hours: %d\n", totalHours);

    return 0;
}
