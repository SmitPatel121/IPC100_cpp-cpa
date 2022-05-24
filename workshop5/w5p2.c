/*
*****************************************************************************
                          Workshop - #5 (P2)
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

#include <stdio.h>

#define MIN_YEAR 2012
#define MAX_YEAR 2022
#define LOG_DAYS 3 


int main(void)
{
    const int JANuary = 1; //declaring unmodifiable integer variable

    const int DEcember = 12;

    int year = 0; //declaring year 
    int month = 00; //declaring month

    float mor_rate, eve_rating, mor_total=0, evening_total=0 , total, average_mor , evening_average, average_total;        //declaring float variables 
	int z ;



    printf("General Well-being Log\n"
        "======================\n");






    do //using do while to apply conditions
    {
        printf("Set the year and month for the well-being log (YYYY MM): ");

        scanf("%d %d", &year, &month);

        if ((year < 2012 || year >2022) && (month < 1 || month >12))
        {
            printf("   ERROR: The year must be between 2012 and 2022 inclusive\n"
                "   ERROR: Jan.(1) - Dec.(12)\n");
        }

        else if (year < 2012 || year>2022)
        {
            printf("   ERROR: The year must be between 2012 and 2022 inclusive\n");
        }

        else if (month < 1 || month > 12)
        {
            printf("   ERROR: Jan.(1) - Dec.(12)\n");
        }


    } while (2012 > year || year > 2022 || month < JANuary || month > DEcember);

    printf("\n*** Log date set! ***\n");

for (z = 1; z <= LOG_DAYS; z++)  
{

    if (month == 1)      //using if else for printing month alphabatical 

                           //we can also use switch break to do this task 
    {
        printf("\nLog starting date: %d-JAN-01", year);
    }

    else if (month == 2)

    {
        printf("\n%d-FEB-0%d", year ,z);
    }

    else if (month == 3)
    {
        printf("\nLog starting date: %d-MAR-01", year);
    }

    else if (month == 4)
    {
        printf("\nLog starting date: %d-APR-01", year);
    }

    else if (month == 5)
    {
        printf("\nLog starting date: %d-MAY-01", year);
    }

    else if (month == 6)
    {
        printf("\nLog starting date: %d-JUN-01", year);
    }

    else if (month == 7)
    {
        printf("\nLog starting date: %d-JUL-01", year);
    }

    else if (month == 8)
    {
        printf("\nLog starting date: %d-AUG-01", year);
    }

    else if (month == 9)
    {
        printf("\nLog starting date: %d-SEP-01", year);
    }

    else if (month == 10)
    {
        printf("\nLog starting date: %d-OCT-01", year);
    }

    else if (month == 11)
    {
        printf("\nLog starting date: %d-NOV-01", year);
    }

    else
    {
        printf("\nLog starting date: %d-DEC-01", year);
    }
	
        printf("\n   Morning rating (0.0-5.0): ");
		scanf(" %f", &mor_rate);

		while (mor_rate < 0.0 || mor_rate>5.0)                      // usind while loop 
		{
			printf("      ERROR: Rating must be between 0.0 and 5.0 inclusive!");
            printf("\n");
			printf("   Morning rating (0.0-5.0): ");
			scanf(" %f", &mor_rate);
		} 
		mor_total = mor_total + mor_rate;                      //getting another  values of morningtotal

		printf("   Evening rating (0.0-5.0): ");
		scanf(" %f", &eve_rating);

		while (eve_rating < 0.0 || eve_rating>5.0)
		{
			printf("      ERROR: Rating must be between 0.0 and 5.0 inclusive!");
			printf("\n   Evening rating (0.0-5.0): ");
			scanf("%f", &eve_rating);
		} 
		
		evening_total = evening_total + eve_rating;                           //getting different values of eveningtotal

}

	printf("\nSummary\n"
           "=======\n");

	printf("Morning total rating: %0.3f\n", mor_total);
    
	printf("Evening total rating:  %0.3f\n", evening_total);

	printf("----------------------------\n");
	
	total = mor_total + evening_total ;

	printf("Overall total rating: %0.3f\n",total);

	average_mor = mor_total/3 ;

	printf("\nAverage morning rating:  %.1f\n",average_mor);

	evening_average = evening_total/3 ;

	printf("Average evening rating:  %.1f\n",evening_average);

	printf("----------------------------\n");

	average_total = total/6 ;

	printf("Average overall rating:  %.1f\n",average_total);



    return 0;


}
