#include <stdio.h>

int main() {
    char anotherCustomer = 'y';
    while (anotherCustomer == 'y' || anotherCustomer == 'Y') {
        int numTickets;
        double pricePerTicket, totalAmount = 0.0;

        printf("Enter the number of tickets: ");
        scanf("%d", &numTickets);
        int i;
        for (i = 0; i < numTickets; i++) {
            printf("Enter price of ticket %d: ", i + 1);
            scanf("%lf", &pricePerTicket);
            totalAmount += pricePerTicket;
        }

        printf("Total ticket price for this customer: %.2lf\n", totalAmount);

        printf("Is there another customer? (y/n): ");
        scanf(" %c", &anotherCustomer);
    }

    return 0;
}

