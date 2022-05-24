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





#define MAX_NUM_PROU 3

#define MIN_GRAMS_PER_SERV 64


// structures

typedef struct
{
	int skuwholenumber;

	double val_uee_s;

	int calorie_cal; //declaring calories for storing calories per suggested serving

	double weight_mass;

}CatFoodInfo;

// ----------------------------------------------------------------------------
// function prototypes



// 1. Get user input of int type and validate for a positive non-zero number
// (return the number while also assigning it to the pointer argument)
int getIntPositive(int* number_num);



// 2. Get user input of double type and validate for a positive non-zero number
// (return the number while also assigning it to the pointer argument)
double getDoublePositive(double* number_num);



// 3. Opening Message (include the number of products that need entering)
void openingMessage(const int numofproduct);

// 4. Get user input for the details of cat food product
CatFoodInfo getCatFoodInfo(int sku_number);





// 5. Display the formatted table header
void displayCatFoodHeader(void);





// 6. Display a formatted record of cat food data


void displayCatFoodData(int sku_number, double* value, double* weight_mass, int
	calorie_cal);



// 7. Logic entry point
void start();