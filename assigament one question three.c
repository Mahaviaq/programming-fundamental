#include <stdio.h>

int main() {
    float consumption,charge;

    // getting input of electriccity consumption
    printf("Enter electricity consumption in kWh: ");
    
    scanf("%f", &consumption);

    // Calculate here
    if (consumption <= 100) {
        charge = 3 * consumption;
        
    } else if (consumption <= 200) {
        charge = 3 * 100 + 6 * (consumption - 100); 
        
    } else if (consumption <= 300) {
        charge = 3 * 100 + 6 * 100 + 9 * (consumption - 200); 
        
    } else {
        charge = 3 * 100 + 6 * 100 + 9 * 100 + 12 * (consumption - 300); 
    }

    // print charges here 
    printf("The total charge for %.2f kWh is Rs. %.2f\n", consumption, charge);

    return 0;
}
