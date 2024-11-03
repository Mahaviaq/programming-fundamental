#include <stdio.h>

int main() {
    float gpa;
    int workexperience;
    int recommendation;

    printf("Enter your GPA: ");
    scanf("%f", &gpa);
    printf("Do you have at least 2 years of relevant work experience? (1 for Yes, 0 for No): ");
    scanf("%d", &workexperience);
    printf("Do you have a recommendation letter? (1 for Yes, 0 for No): ");
    scanf("%d", &recommendation);
    // condition laga ka eligiblity check kar rahe han if,else and elseif laga ka 
    if (gpa >= 3.5) {
        printf("You are eligible for admission.\n");
    } else if (gpa < 3.5 && workexperience >= 2) {
        printf("You are eligible for admission.\n");
    } else if (gpa >= 3.0 && gpa < 3.5 && recommendation) {
        printf("You are eligible for admission.\n");
    } else {
        printf("You are not eligible for admission.\n");
    }

    return 0;
}
