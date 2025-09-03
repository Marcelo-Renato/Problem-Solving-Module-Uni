#include <stdio.h>

int main() {
    int n, i;
    char subjects[10][30];
    int week1[10], week2[10];
    int total1 = 0, total2 = 0;
    int goal;

    printf("How many subjects do you want to track (max 10)? ");
    scanf("%d", &n);

    
    getchar();

    
    for (i = 0; i < n; i++) {
        printf("Enter name for subject %d: ", i + 1);
        fgets(subjects[i], 30, stdin);

        
        int j = 0;
        while (subjects[i][j] != '\0') {
            if (subjects[i][j] == '\n') {
                subjects[i][j] = '\0';
                break;
            }
            j++;
        }
    }

    printf("Enter your weekly study goal (hours): ");
    scanf("%d", &goal);

    
    printf("\n--- Week 1 ---\n");
    for (i = 0; i < n; i++) {
        printf("Hours for %s: ", subjects[i]);
        scanf("%d", &week1[i]);
        total1 += week1[i];
    }

    
    printf("\n--- Week 2 ---\n");
    for (i = 0; i < n; i++) {
        printf("Hours for %s: ", subjects[i]);
        scanf("%d", &week2[i]);
        total2 += week2[i];
    }

    
    printf("\nWeek 1 total: %d (Goal: %d)\n", total1, goal);
    if (total1 >= goal) printf("✅ Goal met in Week 1\n");
    else printf("⚠️ Needs more study in Week 1\n");

    
    printf("Week 2 total: %d (Goal: %d)\n", total2, goal);
    if (total2 >= goal) printf("✅ Goal met in Week 2\n");
    else printf("⚠️ Needs more study in Week 2\n");

    
    if (total2 > total1) printf("\nOverall: study time INCREASED.\n");
    else if (total2 < total1) printf("\nOverall: study time DECREASED.\n");
    else printf("\nOverall: study time SAME.\n");

   
    printf("\nPer-subject changes:\n");
    for (i = 0; i < n; i++) {
        if (week2[i] > week1[i])
            printf("%s: increased by %d\n", subjects[i], week2[i] - week1[i]);
        else if (week2[i] < week1[i])
            printf("%s: decreased by %d\n", subjects[i], week1[i] - week2[i]);
        else
            printf("%s: no change\n", subjects[i]);
    }

    return 0;
}