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



#define _CRT_SECURE_NO_WARNINGS


// System Libraries
#include <stdio.h>



// User-Defined Libraries
#include "w8p2.h"




// ----------------------------------------------------------------------------
// PART-1
// 1. Get user input of int type and validate for a positive non-zero number
// (return the number while also assigning it to the pointer argument)
int getIntPositive(int* Number_num_i)
{
	int int_integer_number = 0;
	do
	{
		scanf(" %d", &int_integer_number);
		if (int_integer_number < 1)
		{
			printf("ERROR: Enter a positive value: ");
		}
	} while (int_integer_number < 1);

	if (Number_num_i != NULL){
		*Number_num_i = int_integer_number;
	}


	return(int_integer_number);
}




// 2. Get user input of double type and validate for a positive non-zero number
// (return the number while also assigning it to the pointer argument)
double getDoublePositive(double* numb_number_d)
{
	double d_mumber_double = 0.0;

	while (d_mumber_double < 1.0)
	{
		scanf(" %lf", &d_mumber_double);

		if (d_mumber_double < 1)
		{
			printf("ERROR: Enter a positive value: ");
		}


	}

	if (numb_number_d != NULL)
	{
		*numb_number_d = d_mumber_double;
	}
	return(d_mumber_double);

}


// 3. Opening Message (include the number of products that need entering)
void openingMessage(const int Massg_massage)
{
	printf("Cat Food Cost Analysis\n"
	       "======================\n\n");

	printf("Enter the details for %d dry food bags of product data for analysis.\n", MAXIMUM_PRODUCT);

	printf("NOTE: A 'serving' is %dg\n\n", TOTAL_GRAMS);
}






// 4. Get user input for the details of cat food product
struct CatFoodInfo getCatFoodInfo(const int xy)
{
	struct CatFoodInfo foodData = { 0 };


	double rate_cost, mass_weight;

	int price_sku, cal_calories;
	printf("Cat Food Product #%d\n", xy + 1);


	printf("--------------------\n"
	"SKU           : ");


	foodData.price_sku = getIntPositive(&price_sku);

	printf("PRICE         : $");


	foodData.product_rate = getDoublePositive(&rate_cost);

	printf("WEIGHT (LBS)  : ");

	foodData.mass_weight_to_lb = getDoublePositive(&mass_weight);

	printf("CALORIES/SERV.: ");

	foodData.cal_calories = getIntPositive(&cal_calories);

	printf("\n");

	return(foodData);
}





// 5. Display the formatted table header
void displayCatFoodHeader(void)
{

	printf("SKU         $Price    Bag-lbs Cal/Serv\n");
	printf("------- ---------- ---------- --------\n");
}











// 6. Display a formatted record of cat food data
void displayCatFoodData(const int price_sku, const double value_cosat, const int cal_calories,
	const double lbs_to_weight_)
{
	printf("%07d %10.2lf %10.1lf %8d\n", price_sku, value_cosat, lbs_to_weight_, cal_calories);
}





// ----------------------------------------------------------------------------





// PART-2




// 8. convert lbs: kg (divide by 2.20462)
double convertLbsKg(const double* lbs_to_weight_, double* Kilo_gram_kg)
{
	double ji;
	ji = *lbs_to_weight_ / KG_IN_LBS;
	if (Kilo_gram_kg != NULL)
	{
		*Kilo_gram_kg = ji;

	}

	return(ji);
}






// 9. convert lbs: g (call convertKG, then * 1000)

int convertLbsG(const double* lbs_to_weight_, int* gram_gm)
{
	int sm;
	sm = convertLbsKg(lbs_to_weight_, 0) * 1000;
	if (gram_gm != NULL)
	{
		*gram_gm = sm;
	}
	return(sm);
}





// 10. convert lbs: kg and g
void convertLbs(const double* lbs_to_convert_to_kg_, double* Kilo_gram_kg, int* gram_gm)
{
	convertLbsKg(lbs_to_convert_to_kg_, Kilo_gram_kg);
	convertLbsG(lbs_to_convert_to_kg_, gram_gm);
}







// 11. calculate: servings based on gPerServ
double calculateServings(const int mass__to_volume, const int total_sum_sumation, double* result_rst)
{
	double kp;

	kp = (double)total_sum_sumation / (double)mass__to_volume;
	if (result_rst != NULL)
	{
		*result_rst = kp;
	}
	return(kp);
}








// 12. calculate: cost per serving
double calculateCostPerServing(const double* cost_rate, const double* result_rst, double*
	total_Cost_of_Result)

{
	double price_cost = 0;

	price_cost = *cost_rate / *result_rst;

	if (total_Cost_of_Result != NULL)
	{
		*total_Cost_of_Result = price_cost;
	}

	return(price_cost);
}



// 13. calculate: cost per calorie

double calculateCostPerCal(const double* cost_value_price, const double* cal_calories, double*
	Cost_per_cal_Calories)
{
	double price_cost = 0;

	price_cost = *cost_value_price / *cal_calories;


	if (Cost_per_cal_Calories != NULL)
	{
		*Cost_per_cal_Calories = price_cost;
	}


	return(price_cost);

}



// 14. Derive a reporting detail record based on the cat food product data

struct ReportData calculateReportData(const struct CatFoodInfo get_Det_ail_cal_Food)
{
	struct ReportData info_report_info;
	double cal_calory;


	// For SKU, RATE, Weight and Calories
	
	info_report_info.price_sku = get_Det_ail_cal_Food.price_sku;

	info_report_info.cost_rate = get_Det_ail_cal_Food.product_rate;

	info_report_info.mass_weight = get_Det_ail_cal_Food.mass_weight_to_lb;

	info_report_info.cal_calories = get_Det_ail_cal_Food.cal_calories;

	// For kg and g

	info_report_info.Kilo_gram_kg = convertLbsKg(&get_Det_ail_cal_Food.mass_weight_to_lb, &info_report_info.Kilo_gram_kg);

	info_report_info.gram_gm = convertLbsG(&get_Det_ail_cal_Food.mass_weight_to_lb, &info_report_info.gram_gm);

	info_report_info.Sum_total_service = calculateServings(TOTAL_GRAMS, info_report_info.gram_gm,
		&info_report_info.Sum_total_service);

	info_report_info.Serve_per_weigh = calculateCostPerServing(&info_report_info.cost_rate,
		&info_report_info.Sum_total_service, &info_report_info.Serve_per_weigh);

	cal_calory = info_report_info.cal_calories * info_report_info.Sum_total_service;

	info_report_info.per_cal_services = calculateCostPerCal(&info_report_info.cost_rate, &cal_calory,
		&info_report_info.per_cal_services);

	return(info_report_info);
}













// 15. Display the formatted table header for the analysis results
void displayReportHeader(void)
{
	printf("\n"
	"Analysis Report (Note: Serving = %dg)\n", TOTAL_GRAMS);
	printf("---------------\n"
	"SKU         $Price    Bag-lbs     Bag-kg     Bag-g Cal/Serv Servings  $/Serv   $/Cal\n"
	"------- ---------- ---------- ---------- --------- -------- -------- ------- -------\n");
}











// 16. Display the formatted data row in the analysis table
void displayReportData(const struct ReportData info_report_info, const int less_price_cheap)
{
	printf("%07d %10.2lf %10.1lf %10.4lf %9d %8d %8.1lf %7.2lf %7.5lf",
		info_report_info.price_sku, info_report_info.cost_rate, info_report_info.mass_weight, info_report_info.Kilo_gram_kg, info_report_info.gram_gm,
		info_report_info.cal_calories, info_report_info.Sum_total_service, info_report_info.Serve_per_weigh,
		info_report_info.per_cal_services);
}











// 17. Display the findings (cheapest)
void displayFinalAnalysis(const struct CatFoodInfo cheap_cheaper_product)
{
	printf("\n"
	"Final Analysis\n--------------\n"
	"Based on the comparison data, the PURRR-fect economical option is:\n");
	printf("SKU:%07d Price: $%.2lf\n\n", cheap_cheaper_product.price_sku,
		cheap_cheaper_product.product_rate);
	printf("Happy shopping!\n");
}



// ----------------------------------------------------------------------------
// 7. Logic entry point
void start(void)
{
	struct CatFoodInfo catFoodDetail[MAXIMUM_PRODUCT];
	int ii = 0, cheapest_cheap_product = 0; 

	int sm;

	openingMessage(MAXIMUM_PRODUCT);

	for (ii = 0; ii < MAXIMUM_PRODUCT; ii++)
	{
		catFoodDetail[ii] = getCatFoodInfo(ii);
	}


	displayCatFoodHeader();

	for (ii = 0; ii < MAXIMUM_PRODUCT; ii++)
	{
		displayCatFoodData(catFoodDetail[ii].price_sku, catFoodDetail[ii].product_rate,
			catFoodDetail[ii].cal_calories, catFoodDetail[ii].mass_weight_to_lb);
	}

	struct ReportData reportArray[MAXIMUM_PRODUCT];
	displayReportHeader();
	for (ii = 0; ii < MAXIMUM_PRODUCT; ii++)
	{
		reportArray[ii] = calculateReportData(catFoodDetail[ii]);
		if (reportArray[ii].Serve_per_weigh < reportArray[ii - 1].Serve_per_weigh)
		{
			cheapest_cheap_product = ii;
		}
	}


	
	for (sm = 0; sm < MAXIMUM_PRODUCT; sm++)
	{
		struct ReportData x = { 0 };

		x = reportArray[sm];

		displayReportData(x, cheapest_cheap_product);

		if (cheapest_cheap_product == sm)
		{
			printf(" ***");
		}
		printf("\n");
	}
	displayFinalAnalysis(catFoodDetail[cheapest_cheap_product]);

}