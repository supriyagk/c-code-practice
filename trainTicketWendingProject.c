#include <stdio.h>

// Function to display the list of available destinations
void displayDestinations() {
    printf("\nAvailable Destinations:\n");
    printf("1. Kengeri\n");
    printf("2. Ramanagara\n");
    printf("3. Channapatana\n");
    printf("4. Maddur\n");
    printf("5. Mandya\n");
    printf("6. Mysuru\n");
    printf("7. Exit\n");
}

// Function to calculate the total cost of tickets based on the number of tickets and ticket price
int calculateTotalCost(int numTickets, int ticketPrice) {
    return numTickets * ticketPrice;
}

// Function to validate PIN input
int validatePIN(int pin) {
    int count = 0;
    while (pin != 0) {
        pin /= 10;
        ++count;
    }
    return count == 6;
}

// Function to handle payment process
void processPayment(int totalCost) {
    int paymentMethod;

    do {
        printf("\nPlease select your payment method:\n");
        printf("1. Cash\n");
        printf("2. Debit Card\n");
        printf("3. Mobile Payment\n");
        printf("4. QR Code Payment\n");
        printf("5. Prepaid Card\n");
        printf("6. Online Payment\n");
        printf("Enter your choice (1-6): ");
        scanf("%d", &paymentMethod);

        // Check if the entered payment method is within the valid range
        if (paymentMethod < 1 || paymentMethod > 6) {
            printf("Invalid payment method. Please try again.\n");
        }
    } while (paymentMethod < 1 || paymentMethod > 6);

    // Process the payment based on the selected method
    switch (paymentMethod) {
        case 1:
            printf("You have selected: Cash\n");
            printf("Please pay ₹%d at the counter.\n", totalCost);
            break;
        case 2:
            printf("You have selected: Debit Card\n");
            printf("Please insert your card\n");
            // Ask for PIN
            int pin;
            do {
                printf("Please enter your PIN (6 digits): ");
                scanf("%d", &pin);
                // Validate PIN
                if (!validatePIN(pin)) {
                    printf("Invalid PIN. Please enter a 6-digit PIN.\n");
                }
            } while (!validatePIN(pin));
            // Process payment with PIN verification
            printf("Payment of ₹%d successfully processed.\n", totalCost);
            break;
        case 3:
            printf("You have selected: Mobile Payment\n");
            printf("Please scan the QR code displayed on your mobile to complete the payment of ₹%d.\n", totalCost);
            break;
        case 4:
            printf("You have selected: QR Code Payment\n");
            printf("Please scan the QR code displayed at the counter to make the payment of ₹%d.\n", totalCost);
            break;
        case 5:
            printf("You have selected: Prepaid Card\n");
            printf("Please enter your prepaid card details to deduct ₹%d from your balance.\n", totalCost);
            break;
        case 6:
            printf("You have selected: Online Payment\n");
            printf("Please log in to your online payment account to complete the transaction of ₹%d.\n", totalCost);
            break;
    }
}

int main() {
    int choice, numTickets, totalCost;
    int ticketPrice = 50; // Initial ticket price for Kengeri

    do {
        // Display the list of available destinations
        displayDestinations();

        // Prompt user to choose a destination
        printf("\nPlease select your destination (1-7): ");
        scanf("%d", &choice);

        // Process the user's choice
        switch (choice) {
            case 1:
                printf("\nYou have selected: Kengeri\n");
                break;
            case 2:
                printf("\nYou have selected: Ramanagara\n");
                break;
            case 3:
                printf("\nYou have selected: Channapatana\n");
                break;
            case 4:
                printf("\nYou have selected: Maddur\n");
                break;
            case 5:
                printf("\nYou have selected: Mandya\n");
                break;
            case 6:
                printf("\nYou have selected: Mysuru\n");
                break;
            case 7:
                printf("\nExiting the ticket booking system. Thank you for using our service!\n");
                continue; // Skip the payment part and continue with the loop
            default:
                printf("\nInvalid choice. Please try again.\n");
                continue;
        }

        // Increase the ticket price by 25% for the next destination (excluding Kengeri)
        if (choice != 1) {
            ticketPrice = ticketPrice * 1.25;
        }

        // Prompt user to enter the number of tickets they want to book (1-6)
        do {
            printf("Please enter the number of tickets you want to book (maximum 6): ");
            scanf("%d", &numTickets);

            // Check if the entered number of tickets is within the valid range
            if (numTickets < 1 || numTickets > 6) {
                printf("Invalid number of tickets. Please enter a number between 1 and 6.\n");
            }
        } while (numTickets < 1 || numTickets > 6);

        // Calculate the total cost of tickets
        totalCost = calculateTotalCost(numTickets, ticketPrice);

        // Display the total cost of tickets
        printf("\nThe total cost of tickets for %d person(s) is: ₹%d\n", numTickets, totalCost);

        // Process payment
        processPayment(totalCost);

        // Wishing line
        printf("\nThank you for booking tickets with us. Have a safe journey!\n");

    } while (choice != 7);

    return 0;
}
