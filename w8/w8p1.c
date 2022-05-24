/*
*****************************************************************************
						  Workshop - #8 (P1)
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



// System Libraries

#include <stdio.h>

// User Libraries
#include "w8p1.h"



// 1. Get user input of int type and validate for a positive non-zero number



// (return the number while also assigning it to the pointer argument)





int getIntPositive(int* number_num) {

	int r = 0;


	while (r < 1) {
		scanf(" %d", &r);

		if (r < 1)

			printf("ERROR: Enter a positive value: ");

	}
	if (number_num != NULL)


		*number_num = r;


	return r;
}



// 2. Get user input of double type and validate for a positive non-zero number


// (return the number while also assigning it to the pointer argument)



double getDoublePositive(double* number) {



	double r = 0;



	while (r < 1) {
		scanf("%lf", &r);

		if (r < 1)

			printf("ERROR: Enter a positive value: ");
	}
	if (number != 0)

		*number = r;
	return r;
}







// 3. Opening Message (include the number of products that need entering)



void openingMessage(const int num_of_products) {


	//printf("========================== =");
	//printf("Starting Main Program Logic");
	//printf("========================== =");





	printf("Cat Food Cost Analysis\n");

	printf("======================\n\n");

	printf("Enter the details for %d dry food bags of product data for analysis.\n", num_of_products);

	printf("NOTE: A 'serving' is 64g\n");

	return;
}











// 4. Get user input for the details of cat food product

CatFoodInfo getCatFoodInfo(int skuwholenumber) {

	CatFoodInfo food;

	food.skuwholenumber = skuwholenumber;


	double worth_value = 0;




	printf("PRICE         : $");



	while (worth_value <= 0)

		worth_value = getDoublePositive(NULL);

	food.val_uee_s = worth_value;

	printf("WEIGHT (LBS)  : ");

	double weight_mass = 0;

	while (weight_mass <= 0)

		weight_mass = getDoublePositive(NULL);

	food.weight_mass = weight_mass;

	printf("CALORIES/SERV.: ");


	int calorie_cal = 0;


	while (calorie_cal <= 0)


		calorie_cal = getIntPositive(NULL);

	food.calorie_cal = calorie_cal;

	return food;
}



// 5. Display the formatted table header

void displayCatFoodHeader(void)
{
	printf("\nSKU         $Price    Bag-lbs Cal/Serv\n");

	printf("------- ---------- ---------- --------\n");
}




// 6. Display a formatted record of cat food data


void displayCatFoodData(int skuwholenumber, double* val_uee_s, double* weight_mass, int calorie_cal)
{

	printf("%07d %10.2lf %10.1lf %8d\n", skuwholenumber, *val_uee_s, *weight_mass, calorie_cal);

}





// 7. Logic entry point


void start() {
	setbuf(stdout, NULL);

	CatFoodInfo food[MAX_NUM_PROU];

	openingMessage(MAX_NUM_PROU);

	int z, skuwholenumber;

	for (z = 0; z < MAX_NUM_PROU; z++) {

		printf("\nCat Food Product #%d", z + 1);

		printf("\n--------------------\n");

		printf("SKU           : ");

		skuwholenumber = 0;

		while (skuwholenumber <= 0)

			skuwholenumber = getIntPositive(NULL);

		food[z] = getCatFoodInfo(skuwholenumber);

	}
	displayCatFoodHeader();

	for (z = 0; z < MAX_NUM_PROU; z++)

		displayCatFoodData(food[z].skuwholenumber, &food[z].val_uee_s, &food[z].weight_mass, food[z].calorie_cal);

	return;
}