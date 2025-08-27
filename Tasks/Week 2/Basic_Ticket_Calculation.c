#include <stdio.h>

int main() {
    char rideType, ticketType;
    int numTickets;
    float ticketPrice = 0, totalPrice = 0;

    printf("Enter ride type (T for Thrill, W for Water, F for Family): ");
    scanf(" %c", &rideType);

    printf("Enter ticket type (S for Standard, F for Fast Pass): ");
    scanf(" %c", &ticketType);

    printf("Enter number of tickets: ");
    scanf("%d", &numTickets);

    // Determine ticket price based on ride and ticket type
    switch (rideType) {
        case 'T':
        case 't':
            switch (ticketType) {
                case 'S':
                case 's':
                    ticketPrice = 20.0;
                    break;
                case 'F':
                case 'f':
                    ticketPrice = 35.0;
                    break;
                default:
                    printf("Invalid ticket type.\n");
                    return 1;
            }
            break;
        case 'W':
        case 'w':
            switch (ticketType) {
                case 'S':
                case 's':
                    ticketPrice = 18.0;
                    break;
                case 'F':
                case 'f':
                    ticketPrice = 30.0;
                    break;
                default:
                    printf("Invalid ticket type.\n");
                    return 1;
            }
            break;
        case 'F':
        case 'f':
            switch (ticketType) {
                case 'S':
                case 's':
                    ticketPrice = 15.0;
                    break;
                case 'F':
                case 'f':
                    ticketPrice = 25.0;
                    break;
                default:
                    printf("Invalid ticket type.\n");
                    return 1;
            }
            break;
        default:
            printf("Invalid ride type.\n");
            return 1;
    }

    totalPrice = ticketPrice * numTickets;

    // Bulk discount: 10% off for 5 or more tickets
    if (numTickets >= 5) {
        totalPrice *= 0.9;
        printf("Bulk discount applied (10%% off).\n");
    }

    // Optional service: Meal deal for £8 per ticket
    char mealDeal;
    printf("Would you like to add a meal deal for £8 per ticket? (Y/N): ");
    scanf(" %c", &mealDeal);
    if (mealDeal == 'Y' || mealDeal == 'y') {
        totalPrice += 8.0 * numTickets;
        printf("Meal deal added.\n");
    }

    printf("Total price: £%.2f\n", totalPrice);

    return 0;
}