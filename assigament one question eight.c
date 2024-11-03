#include <stdio.h>

int main() {
    int numItems;
    double price, totalBill = 0.0, discount = 0.0, finalBill;

    printf("Enter the number of items: ");
    scanf("%d", &numItems);
    int i ;
    for (i = 0; i < numItems; i++)
	 {
        printf("Enter price of item %d: ", i + 1);
        scanf("%lf", &price);
        totalBill += price;
    }

    if (totalBill > 2000) {
        discount = totalBill * 0.20;
    } else if (totalBill > 1000) {
        discount = totalBill * 0.10;
    }

    finalBill = totalBill - discount;

    printf("Total bill: %lf\n", totalBill);
    printf("Discount: %lf\n", discount);
    printf("Final bill after discount: %.2lf\n", finalBill);

    return 0;
}

