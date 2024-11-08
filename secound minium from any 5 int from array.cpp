#include <stdio.h>

int main() {
	int numbers [5];
    int min1, min2;
	printf("Enter 5 integers:\n");

    for (int i = 0; i < 5; i++) {
    	scanf("%d", &numbers[i]);
		
		}
    if (numbers [0] < numbers[1]) {
	min1=numbers[0];
	min2=numbers [1];
	} 
	else {
	min1=numbers[1];
	min2=numbers[0];

    }
	for (int i=2; i < 5; i++) {
	if (numbers[i] < min1) {
	min2=min1;
	min1=numbers[i];
	} else if (numbers[i] < min2) {
	min2=numbers[i];
	}
	}

printf("The second smallest number is: %d\n", min2);

return 0;
}
