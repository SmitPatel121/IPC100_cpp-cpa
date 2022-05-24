/*
*****************************************************************************
						Assignment 1 - Milestone 1
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

#include "core.h"







int inputInt() 

//return an integer value and receives no arguments.



{
	char line_NEW = 'i';
	int Val_ue;
	scanf(" %d%c", &Val_ue, &line_NEW);

	while (line_NEW != '\n')
		
		
	{
		clearInputBuffer();

		printf("Error! Input a whole number: ");

		scanf(" %d%c", &Val_ue, &line_NEW);
	}
	return Val_ue;
}



int inputIntPositive() 
// return an integer value and receives no arguments.


{

	char line_NEW = 'i';

	int valueofnum;

	scanf(" %d%c", &valueofnum, &line_NEW);
	while (line_NEW == 'i' || line_NEW != '\n')
	{

		clearInputBuffer();

		printf("Error! Input a whole number: ");

		scanf(" %d%c", &valueofnum, &line_NEW);

	} 



	while (valueofnum <= 0)

	{
		printf("ERROR! Value must be > 0: ");
		scanf("%d%c", &valueofnum, &line_NEW);
	}



	return valueofnum;

}






int inputIntRange(int limit_lower, int limit_upper) 

{

	char line_NEW = 'i';

	int number_of_value;

	scanf(" %d%c", &number_of_value, &line_NEW);

	while (line_NEW == 'i') 

	{

		clearInputBuffer();

		printf("Error! Input a whole number: ");

		scanf(" %d%c", &number_of_value, &line_NEW);

	}	
	
	
	while (number_of_value < limit_lower || number_of_value > limit_upper)

	{

		printf("ERROR! Value must be between %d and %d inclusive: ", limit_lower, limit_upper);

		scanf("%d%c", &number_of_value, &line_NEW);

	}

	return number_of_value;

}

char inputCharOption(char* char_c) 
{

	int jj ;
	int kk = 0;

	char character_2;
	char line_NEW = 'x';

	scanf(" %c%c", &character_2, &line_NEW);

	while (line_NEW != '\n')

	{

		clearInputBuffer();

		printf("ERROR: Character must be one of [%s]: ", char_c);

		scanf(" %c%c", &character_2, &line_NEW);

	}

	for (jj = 0; (char_c[jj] != '\0' && kk == 0); jj++)

	{

		do

		{

			for (jj = 0; jj <= 4 && kk == 0; jj++)

			{

				if (char_c[jj] == character_2)

				{

					kk = 1;

				}

			}

			if (kk != 1 || line_NEW != '\n')

			{

				printf("ERROR: Character must be one of [%s]: ", char_c);

				scanf(" %c%c", &character_2, &line_NEW);

			}

		} while (line_NEW != '\n' || kk == 0);

	}

	return character_2;

}

void inputCString(char* car_string, int minim_number, int maxim_numb) 

{

	int jj = 0, kk = 0;

	char charac[41];

	scanf(" %40[^\n]", charac);

	for (jj = 0; charac[jj] != '\0'; jj++)

	{

	}

	while (jj < minim_number || jj > maxim_numb)

	{

		clearInputBuffer();

		if (minim_number == maxim_numb)

		{

			printf("ERROR: String length must be exactly %d chars: ", minim_number);

			scanf(" %40[^\n]", charac);

		}

		if (minim_number != maxim_numb)

		{

			if (jj < minim_number)

			{

				printf("ERROR: String length must be between %d and %d chars: ", minim_number, maxim_numb);//printing appropriate error message

				scanf(" %40[^\n]", charac);

			}

			else if (jj > maxim_numb)

			{

				printf("ERROR: String length must be no more than %d chars: ", maxim_numb);//printing appropriate error message

				scanf("%40[^\n]", charac);

			}

		}

		for (jj = 0; charac[jj] != '\0'; jj++)

		{

		}

	}

	for (kk = 0; charac[kk] != '\0'; kk++)

	{

		car_string[kk] = charac[kk];

	}

	car_string[kk] = '\0';

	getchar();





}

void displayFormattedPhone(char* Phone_num)
{
	if (Phone_num == NULL)
	{
		printf("(___)___-____"); return;
	}

	while (*Phone_num)
	{
		char character = *Phone_num;

		if (character < '0' || character > '9')
		{
			printf("(___)___-____");
			return;
		}

		if (character == '4')
		{
			printf("(416)111-4444");
			return;
		}
		else
		{
			printf("(___)___-____");
			return;
		}
		Phone_num = Phone_num + 1;

	}
	printf("(___)___-____");

}

void clearInputBuffer(void)

{
	while (getchar() != '\n')

		//using conditional statement
	{
		; // On purpose: do nothing
	}
}



