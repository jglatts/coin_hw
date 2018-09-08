/*

CIS 1057 Assignment 1
Author: John Glatts

*/



#include <stdio.h>

int main(int argc, char const *argv[])
{

	int price, payment, change;	//where the user enters item price
	double quarters, dimes, nickels, pennies; 	//going to come in handy for calculations
	int quarters_remainder, dimes_remainder, nickels_remainder; //changed from double to int, error message using double

	//get input
	printf("Enter Item Price and Amount Paid\n");
	scanf("%d%d", &price, &payment);
	printf("\nItem Price(in cents): %d\n", price);
	printf("Amount Paid(in cents): %d\n", payment);
	
	//calculate change
	change = payment-price;
	printf("\nChange Required: %d\n", change);	
	printf("%d cents in coins can be given as:\n", change);


	// Getting somewhere, the division/remainder combo seems to WORK
	// tweak the other calcs to get the right numbers yeeo!!! 
	quarters = change / 25;
	quarters_remainder = change % 25;
	printf("\nQuarters: %lf\n", quarters);

	//use the remainder to see how many dimes we can use
	dimes = quarters_remainder / 10;
	dimes_remainder = quarters_remainder % 10;
	printf("Dimes: %lf\n", dimes);

	//use the remainder to see how many nickels we can use
	nickels = dimes_remainder / 5;
	nickels_remainder = dimes_remainder % 5;
	printf("Nickels: %lf\n", nickels);
	
	//use the remainder to see how many pennies we can use
	//no calc needed for pennies
	printf("Pennies: %d\n", nickels_remainder);
	
	
	return 0;
}