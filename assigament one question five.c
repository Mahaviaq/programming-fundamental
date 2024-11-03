#include <stdio.h>

int main() {
    char anotherCustomer = 'y';
    while (anotherCustomer == 'y' || anotherCustomer == 'Y') {
        int numProducts;
        double totalAmount = 0.0;
        printf("Enter the number of products: ");
        scanf("%d", &numProducts);

        int i;
        for (i = 0; i < numProducts; i++) {
            char productName[50];
            double price;
            int quantity;

            printf("Enter name of product %d: ", i + 1);
            scanf("%s", productName);
            printf("Enter price of product %d: ", i + 1);
            scanf("%lf", &price);
            printf("Enter quantity of product %d: ", i + 1);
            scanf("%d", &quantity);

            totalAmount += price * quantity;
        }

        printf("Total amount for this customer: %.2lf\n", totalAmount);

        printf("Is there another customer? (y/n): ");
        scanf(" %c", &anotherCustomer);
    }

    return 0;
}

