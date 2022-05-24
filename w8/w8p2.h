/*
*****************************************************************************
                          Workshop - #8 (P2)
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




// defines macros


#define MAXIMUM_PRODUCT 3


#define TOTAL_GRAMS 64


#define KG_IN_LBS 2.20462





// ----------------------------------------------------------------------------
// structures




struct ReportData
{
	int price_sku;
	
	int cal_calories;
	
	int gram_gm;
	
	double Sum_total_service;
	
	double Serve_per_weigh;
	
	double per_cal_services;
	
	double cost_rate;
	
	double mass_weight;
	
	double Kilo_gram_kg;
};





struct CatFoodInfo
{
	int price_sku;
	double product_rate;
	int cal_calories;
	double mass_weight_to_lb;
};






// ----------------------------------------------------------------------------

// function prototypes
// PART-1

// 1. Get user input of int type and validate for a positive non-zero number
//    (return the number while also assigning it to the pointer argument)




int getIntPositive(int* Number_num_i);



// 2. Get user input of double type and validate for a positive non-zero number
//    (return the number while also assigning it to the pointer argument)

double getDoublePositive(double* numb_number_d);


// Function: 3. Opening Message

void openingMessage(const int Massg_massage);





// Function: 4. Get user input for cat food product

struct CatFoodInfo getCatFoodInfo(const int xy);




// Function: 5. Display the formatted table header
void displayCatFoodHeader(void);



// Function: 6. Display a formatted record of cat food data
void displayCatFoodData(const int price_sku, const double value_cosat, const int cal_calories,
	const double lbs_to_weight_);



// ----------------------------------------------------------------------------

// PART-2




// 8. convert lbs: kg
double convertLbsKg(const double* lbs_to_weight_, double* Kilo_gram_kg);



// 9. convert lbs: g

int convertLbsG(const double* lbs_to_weight_, int* gram_gm);








// 10. convert lbs: kg / g
void convertLbs(const double* lbs_to_convert_to_kg_, double* Kilo_gram_kg, int* gram_gm);





// 11. calculate: servings based on gPerServ
double calculateServings(const int mass__to_volume, const int total_sum_sumation, double* result_rst);




// 12. calculate: cost per serving
double calculateCostPerServing(const double* cost_rate, const double* result_rst, double*
	total_Cost_of_Result);

// 13. calculate: cost per calorie
double calculateCostPerCal(const double* cost_value_price, const double* cal_calories, double*
	Cost_per_cal_Calories);

// 14. Derive a reporting detail record based on the cat food product data
struct ReportData calculateReportData(const struct CatFoodInfo get_Det_ail_cal_Food);

// 15. Display the formatted table header for the analysis results
void displayReportHeader(void);

// 16. Display the formatted data row in the analysis table
void displayReportData(const struct ReportData info_report_info, const int less_price_cheap);


// 17. Display the findings (cheapest)
void displayFinalAnalysis(const struct CatFoodInfo cheap_cheaper_product);


// ----------------------------------------------------------------------------


// 7. Logic entry point


void start(void);