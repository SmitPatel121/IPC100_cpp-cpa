/*
*****************************************************************************
                          Workshop - #6 (P2)
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
	double Reslut = 0, Sum_total = 0, cost_priority;  //double variable is being declared

	int ite_thi = 0, z = 0, m = 0, y, Year, Mont, Peol; // int variable is declared


	double cost_price[10]; // declaring double cost_price array to get the input

	int prio[10]; // declaring int integer point array to store the user data


	char finance[10];

	int out = 1;

	printf("+--------------------------+\n"

	       "+   Wish List Forecaster   |\n"

	       "+--------------------------+\n");

	printf("\nEnter your monthly NET income: $"); //printing the monthely income


	do {
		scanf("%lf", &Reslut);

		if (Reslut >= 400000) {
			printf("ERROR: Liar! I'll believe you if you enter a value no more than $400000.00");

			printf("\n\nEnter your monthly NET income: $");
		}
		else if (Reslut < 500) {
			printf("ERROR: You must have a consistent monthly income of at least $500.00");

			printf("\n\nEnter your monthly NET income: $");

		}
	} while (Reslut >= max || Reslut <= min); 


	do {
		printf("\nHow many wish list items do you want to forecast?: ");

		scanf("%d", &ite_thi);
		if (ite_thi < 1 || ite_thi > 10) {

			printf("ERROR: List is restricted to between 1 and 10 items.\n");
		}

	} while (ite_thi < 1 || ite_thi > 10);

	for (z = 0; z < ite_thi; z++) {
		printf("\nItem-%d Details:\n", (z + 1));

		printf("   Item cost: $");

		scanf("%lf", &cost_price[z]);

		while (cost_price[z] < 100) {
			printf("      ERROR: Cost must be at least $100.00\n");
			printf("   Item cost: $");

			scanf("%lf", &cost_price[z]);

		}


		printf("   How important is it to you? [1=must have, 2=important, 3=want]: ");

		scanf("%d", &prio[z]);

		while (prio[z] < 1 || prio[z] > 3) {

			printf("      ERROR: Value must be between 1 and 3\n");
			printf("   How important is it to you? [1=must have, 2=important, 3=want]: ");

			scanf("%d", &prio[z]);

		}
		printf("   Does this item have financing options? [y/n]: ");
		scanf("%s", &finance[z]);


		while ((finance[z] != 'y' && finance[z] != 'n')) {
			printf("      ERROR: Must be a lowercase 'y' or 'n'\n");

			printf("   Does this item have financing options? [y/n]: ");

			scanf("%s", &finance[z]);


		}
	}

	printf("\nItem Priority Financed        Cost\n");

	printf("---- -------- -------- -----------\n");

	while (m < ite_thi) {
		printf("%3d  %5d    %5c    %11.2lf\n", m + 1, prio[m], finance[m], cost_price[m]);
		Sum_total = Sum_total + cost_price[m];
		m++;
	}
	printf("---- -------- -------- -----------");

	printf("\n                      $%11.2f\n\n", Sum_total);

	


	while (y!=0){

	
		for (z = 0; out && z < ite_thi; z++)
		{




			printf("How do you want to forecast your wish list?\n"
			" 1. All items (no filter)\n"
			" 2. By priority\n"
			" 0. Quit/Exit\n"
			"Selection: ");
			scanf("%d", &y);
			
			if (y >= 3 || y < 0)
			{
				printf("\nERROR: Invalid menu selection.\n\n");
				
				
			}

			
			else if (y == 0)
			{
				printf("\nBest of luck in all your future endeavours!\n");
				out = 0;
			}
			


			if (y == 1) {
				
				printf("\n====================================================\n");
				printf("Filter:   All items\n");
				printf("Amount:   $%.2lf\n", Sum_total);
				Year = (int)(Sum_total / (double)Reslut) / 12;
				Mont = (int)(Sum_total / (double)Reslut) % 12;
				printf("Forecast: %d years, %d months\n", Year, Mont + 1);
				printf("NOTE: Financing options are available on some items.\n"
				"      You can likely reduce the estimated months.\n"
				"====================================================\n\n");
				
			}

		

			if (y == 2) {
				printf("\nWhat priority do you want to filter by? [1-3]: ");
				scanf("%d", &Peol);
				for (z = 0; z < ite_thi; z++)
				{
					if (Peol == prio[z])
					{
						cost_priority = cost_priority + cost_price[z];

					}

				}
				printf("\n====================================================\n");
				printf("Filter:   by priority (%d)\n", Peol);
				printf("Amount:   $%1.2lf\n", cost_priority);
				Year = (int)(cost_priority / (double)Reslut) / 12;
				Mont = (int)(cost_priority / (double)Reslut) % 12;

				printf("Forecast: %d years, %d months\n", Year, Mont + 1);
				cost_priority = 0;
				
					if ( y==2 &&(Peol==1 || Peol==3))
					{
						printf("NOTE: Financing options are available on some items.\n"
						"      You can likely reduce the estimated months.\n"
						"====================================================\n");
					}
					if (y ==2 && (Peol ==2)){
						printf("====================================================\n");
					}
					
				
				printf("\n");
			}
			

			
			
			

			
		}

	}
	return 0;
}