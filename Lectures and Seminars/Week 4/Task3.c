#include <stdio.h>

int main() {
    int state = 1;

    while (state == 1) {
        printf("Sample fare table (ages 0–10):\n");
        for (int age = 0; age <= 10; age++) {
            if (age < 5) {
                printf("Age %d: FREE\n", age);
            } else if (age >= 65) {
                printf("Age %d: £1.00\n", age);
            } else {
                printf("Age %d: £2.50\n", age);
            }
        }

    
        int userAge;
        printf("\nPlease enter your age: ");
        scanf("%d", &userAge);

        if (userAge < 0) {
            printf("Invalid age. Must be zero or greater.\n\n");
            continue; 
        }

        
        if (userAge < 5) {
            printf("Your fare: FREE\n");
        } else if (userAge >= 65) {
            printf("Your fare: £1.00 (Senior discount)\n");
        } else {
            printf("Your fare: £2.50\n");
        }

        
        printf("\nWould you like to run the programme again? (1 = Yes, 0 = No): ");
        scanf("%d", &state);

        if (state != 0 && state != 1) {
            printf("Invalid choice. Programme will now exit.\n");
            state = 0;
        }

        printf("\n");
    }

    printf("Programme ended.\n");
    return 0;
}