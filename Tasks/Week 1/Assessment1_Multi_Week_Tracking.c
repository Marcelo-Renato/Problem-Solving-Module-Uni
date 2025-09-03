
#include <stdio.h>

int main(void) {
  
    int maths1, prog1, net1;
    int total1;

  
    int maths2, prog2, net2;
    int total2;

   
    int studyGoal;

    
    printf("Enter your weekly study goal (hours): ");
    scanf("%d", &studyGoal);

   
    printf("\n--- Week 1 ---\n");
    printf("Enter study hours for Maths: ");
    scanf("%d", &maths1);
    printf("Enter study hours for Programming: ");
    scanf("%d", &prog1);
    printf("Enter study hours for Networking: ");
    scanf("%d", &net1);

    total1 = maths1 + prog1 + net1;

    printf("Week 1 Total: %d (Goal: %d)\n", total1, studyGoal);
    if (total1 >= studyGoal) {
        printf("✅ Week 1: Goal met!\n");
    } else {
        printf("⚠️ Week 1: Needs more study.\n");
    }

    
    printf("\n--- Week 2 ---\n");
    printf("Enter study hours for Maths: ");
    scanf("%d", &maths2);
    printf("Enter study hours for Programming: ");
    scanf("%d", &prog2);
    printf("Enter study hours for Networking: ");
    scanf("%d", &net2);

    total2 = maths2 + prog2 + net2;

    printf("Week 2 Total: %d (Goal: %d)\n", total2, studyGoal);
    if (total2 >= studyGoal) {
        printf("✅ Week 2: Goal met!\n");
    } else {
        printf("⚠️ Week 2: Needs more study.\n");
    }

    
    printf("\n--- Comparison ---\n");
    if (total2 > total1) {
        printf("Study time increased in Week 2.\n");
    } else if (total2 < total1) {
        printf("Study time decreased in Week 2.\n");
    } else {
        printf("Study time remained the same.\n");
    }

    return 0;
}