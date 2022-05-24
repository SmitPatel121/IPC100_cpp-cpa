/*
*****************************************************************************
                          Workshop - #5 (P1)
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


int main(void)
{
    const int JANuary = 1; //declaring unmodifiable integer variable

    const int DEcember = 12;

    int year = 0; //declaring year 
    int month = 00; //declaring month


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

    if (month == 1)      //using if else for printing month alphabatical 

                           //we can also use switch break to do this task 
    {
        printf("\nLog starting date: %d-JAN-01", year);
    }

    else if (month == 2)

    {
        printf("\nLog starting date: %d-FEB-01", year);
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
	printf("\n");
    return 0;


}
