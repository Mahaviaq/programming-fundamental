#include <stdio.h>

int main() {
    float salary, tax;

    // Input employee annual s
    printf("Enter your annual salary : ");
    scanf("%f", &salary);

    // Calculate tax 
    if (salary >= 1000000) {
        tax = salary * 0.30; // 30% tax rate
    } else if (salary >= 500000) {
        tax = salary * 0.20; // 20% tax rate
    } else if (salary >= 300000) {
        tax = salary * 0.10; // 10% tax rate
    } else {
        tax = 0; // No tax
    }

    // print the calculated tax
    printf("The tax to be paid on an annual salary of Rs. %.2f is Rs. %.2f\n", salary, tax);

    return 0;
}
