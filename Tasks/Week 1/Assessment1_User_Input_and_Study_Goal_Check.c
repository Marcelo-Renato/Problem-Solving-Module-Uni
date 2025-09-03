#include <stdio.h>

int main() {
    int mathsHours, progHours, netHours;
    int totalHours, studyGoal;

    
    printf("Enter study hours for Maths: ");
    scanf("%d", &mathsHours);

    printf("Enter study hours for Programming: ");
    scanf("%d", &progHours);

    printf("Enter study hours for Networking: ");
    scanf("%d", &netHours);

    
    totalHours = mathsHours + progHours + netHours;

    
    printf("Enter your weekly study goal (hours): ");
    scanf("%d", &studyGoal);

    
    printf("\n--- Study Report ---\n");
    printf("Maths: %d\n", mathsHours);
    printf("Programming: %d\n", progHours);
    printf("Networking: %d\n", netHours);
    printf("Total Weekly Hours: %d\n", totalHours);
    printf("Study Goal: %d\n", studyGoal);


    if (totalHours >= studyGoal) {
        printf("✅ You have met your study goal!\n");
    } else {
        printf("⚠️ You need to study more. Keep going!\n");
    }

    return 0;
}