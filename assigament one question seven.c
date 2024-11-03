#include <stdio.h>

int main() {
	// in this line 5 i use underscore because i feel comfortable to use these ratherthen using capital latter 
    double fuel_price_per_liter, fuel_efficiency, distance, total_fuel_required, total_cost;

    printf("Enter the fuel price per liter: ");
    scanf("%lf", &fuel_price_per_liter);

    printf("Enter the fuel efficiency (km per liter): ");
    scanf("%lf", &fuel_efficiency);

    printf("Enter the distance of the journey (in kilometers): ");
    scanf("%lf", &distance);

    total_fuel_required = distance / fuel_efficiency;
    total_cost= total_fuel_required * fuel_price_per_liter;

    printf("Total fuel required: %lf liters\n", total_fuel_required);
    printf("Total cost for the journey: %lf\n", total_cost);

    return 0;
}

