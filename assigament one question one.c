#include <stdio.h>
 int main() 
 {  
 char employmentStatus;
 int yearsOfFreelancing;
 double savingsBalance; 
 printf("Enter employment status : \n e for employed \n u for unemployed \n f for freelancer \n");
 scanf(" %c", &employmentStatus); 
 
 // now we will apply conditions here and then we will give loans on the bases of requirement 
 if (employmentStatus == 'e') {
  printf("You are eligible for the loan.\n"); } 
  else if (employmentStatus == 'u') 
  { printf("Enter your savings balance: "); 
  scanf("%lf", &savingsBalance); 
  if (savingsBalance > 600000) 
  { printf("You are eligible for the loan.\n"); } 
  else { printf("You are not eligible for the loan.\n"); } } 
  else if (employmentStatus == 'f') 
  { 
  printf("Enter your years of freelancing experience: "); 
  scanf("%d", &yearsOfFreelancing); printf("Enter your savings balance: "); 
  scanf("%lf", &savingsBalance); 
  if (yearsOfFreelancing >= 3 && savingsBalance > 300000) 
  { printf("You are eligible for the loan.\n"); } 
  else 
  { printf("You are not eligible for the loan.\n"); 
  
  } 
  } 
  else 
  { printf("Invalid employment status entered.\n");
   }
  return 0; 
  
}


