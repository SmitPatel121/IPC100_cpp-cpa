/*
*****************************************************************************
                          Workshop - #6 (P1)
Full Name  : Smit Anjaykumar Patel
Student ID#: 104424213
Email      : sapatel59@myseneca.ca
Section    : IPC144NMM.10348.2221
Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
*****************************************************************************
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

const int max = 400000;

const int min = 500;

int main(void)
{
	double n = 0, sum_tot = 0;  //declaring double variables

	int itm = 0, x = 0, z = 0; // declaring integer variables
    double cost[10]; // declaring double cost array

	int itt[10];

	char financing[10];


	printf("+--------------------------+\n");
	printf("+   Wish List Forecaster   |\n");
	printf("+--------------------------+\n");

	printf("\nEnter your monthly NET income: $"); //displaying the  input of net monthly income



	do {
		scanf(" %lf", &n);

		if (n >= 400000) {
			printf("ERROR: Liar! I'll believe you if you enter a value no more than $400000.00");

			printf("\n\nEnter your monthly NET income: $");
		}
		else if (n < 500) {
			printf("ERROR: You must have a consistent monthly income of at least $500.00");

			printf("\n\nEnter your monthly NET income: $");

		}
	} while (n >= max || n <= min); // use of do while loop and using predefined value max and min.

	

	

	do {
		printf("\nHow many wish list items do you want to forecast?: ");

		scanf("%d", &itm);
		if (itm < 1 || itm > 10) {

			printf("ERROR: List is restricted to between 1 and 10 items.\n");
		}

	} while (itm < 1 || itm > 10);

	for (x = 0; x < itm; x++) {
		printf("\nItem-%d Details:\n", (x + 1));

		printf("   Item cost: $");

		scanf(" %lf", &cost[x]);

		while (cost[x] < 100) {
			printf("      ERROR: Cost must be at least $100.00\n");
			printf("   Item cost: $");

			scanf("%lf", &cost[x]);

		} 
			

			printf("   How important is it to you? [1=must have, 2=important, 3=want]: ");

			scanf(" %d", &itt[x]);

		while (itt[x] < 1 || itt[x] > 3) {

			printf("      ERROR: Value must be between 1 and 3\n");
			printf("   How important is it to you? [1=must have, 2=important, 3=want]: ");

			scanf(" %d", &itt[x]);
			
		} 
		printf("   Does this item have financing options? [y/n]: ");
		scanf(" %s", &financing[x]);
		

		while ((financing[x] != 'y' && financing[x] != 'n')) {
			printf("      ERROR: Must be a lowercase 'y' or 'n'\n");

			printf("   Does this item have financing options? [y/n]: ");

			scanf(" %s", &financing[x]);

			
		} 
	}

	printf("\nItem Priority Financed        Cost\n");

	printf("---- -------- -------- -----------\n");

	while (z < itm) {
		printf("%3d  %5d    %5c    %11.2lf\n", z + 1, itt[z], financing[z], cost[z]);
		sum_tot = sum_tot + cost[z];
		z++;
	}
	printf("---- -------- -------- -----------");

	printf("\n                      $%11.2f\n\n", sum_tot);

	printf("Best of luck in all your future endeavours!\n");

	return 0;
}