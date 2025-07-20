#include <stdio.h>

int main() {

    // Here I assign the study hours for each subject directly
    int Maths = 12;
    int Programming = 15;
    int Networking = 18;

    // Now I calculate the total weekly study hours
    int totalHours = Maths + Programming + Networking;

    // Finally, I print the total weekly study hours
    printf("Total weekly study hours: %d\n", totalHours);

    return 0;
}
