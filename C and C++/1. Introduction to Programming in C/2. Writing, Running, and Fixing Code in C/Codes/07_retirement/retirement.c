#include <stdlib.h>
#include <stdio.h>


struct _retire_info {
  int months; // Number of months it is applicable to
  double contribution; // contribution per month from account
  double rate_of_return; // Rate of returns after inflation
};

typedef struct _retire_info retire_info;

double balance(double initial,
	    double rate_of_return,
	    double contribution){
  
  // Calculate the account balance increase from returns (balance * rate of return)
  double interestEarned = initial * (rate_of_return/(double)1200);
  // Then add the monthly contribution to the balance
  double accountBalance = interestEarned + contribution;
  return accountBalance;
}


/* The following function performs two tasks 
Parameters: startAge in months, initial savings in dollars, 
            info about working and info about being  retired
1. Compute the retirement balance each month while you are working
2. Perform a similar calculation for each month of retirement but using info
from the retired structure instead of the working structure.
*/
void retirement(int startAge,
		double initial,
		retire_info working,
		retire_info retired) {

  int i, j;
  
  // Compute the retirement account balance each month while you are working
  for (i=0; i<(working.months); i++) {
    // Compute age and month for printing
    int ageYears = (startAge + i) / 12;
    int ageMonth = (startAge + i) % 12;
    // At the start of each month print out the current balance
    printf("Age %3d month %2d you have $%.2lf\n", ageYears, ageMonth, initial);
    // Compute the current balance
    initial += balance(initial, working.rate_of_return, working.contribution);
  }
    // Compute the retirement account balance each month while you are retired
  for (j=i; j<(working.months+retired.months); j++) {
    // Compute age and month for printing
    int ageYears = (startAge+j) / 12;
    int ageMonth = (startAge+j) % 12;
    // At the start of each month print out the current balance
    printf("Age %3d month %2d you have $%.2lf\n", ageYears, ageMonth, initial);
    // Compute the current balance
    initial += balance(initial, retired.rate_of_return, retired.contribution);
  }
}

// Main function
int main (){
  retire_info working;
  retire_info retired;

  working.months = 489;
  working.contribution = 1000;
  working.rate_of_return = 4.5;

  retired.months = 384;
  retired.contribution = -4000;
  retired.rate_of_return = 1.0;

  retirement(327, 21345, working, retired);
  return EXIT_SUCCESS;
}
  
