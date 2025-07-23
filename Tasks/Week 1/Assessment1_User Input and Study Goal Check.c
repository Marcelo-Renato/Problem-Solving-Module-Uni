#include <stdio.h>

int main() {

    int Maths, Programming, Networking;
    int studyGoal;

    // Here I ask the user to enter the study hours for each subject
    printf("Enter your study hours for Maths: ");
    scanf("%d", &Maths);

    printf("Enter your study hours for Programming: ");
    scanf("%d", &Programming);

    printf("Enter your study hours for Networking: ");
    scanf("%d", &Networking);

    // I ask the user to enter their weekly study goal
    printf("Enter your weekly study goal (in hours): ");
    scanf("%d", &studyGoal);

    // Now I calculate the total weekly study hours
    int totalHours = Maths + Programming + Networking;

    // I print the total weekly study hours
    printf("Total weekly study hours: %d\n", totalHours);

    // I compare the total hours with the study goal and print the result
    if (totalHours >= studyGoal) {
        printf("Congratulations! You have met your weekly study goal.\n");
    } else {
        printf("You need to study more to meet your weekly goal.\n");
    }

    return 0;
}