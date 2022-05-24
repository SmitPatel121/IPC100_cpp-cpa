/*
*****************************************************************************
                          Workshop - #4 (P1)
Full Name  :  Smit Anjaykumar Patel
Student ID#:  104424213
Email      :  sapatel59@myseneca.ca
Section    :  IPC144NMM.10348.2221

Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
*****************************************************************************
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)

{
    int z; //declaring variables type int

    int i = 0;

    char c_car = 'Q'; //declaring variable type char
    

    printf("+----------------------+\n"
           "Loop application STARTED\n"
           "+----------------------+\n\n");


    
 do{    //entering into do while loop

        printf("D = do/while | W = while | F = for | Q = quit\n");
        printf("Enter loop type and the number of times to iterate (Quit=Q0): ");
        scanf(" %c%d", &c_car, &z);

        
        if (c_car != 'Q' && c_car != 'D' && c_car != 'W' && c_car != 'F')  // using of if , else if , else
        {
            printf("ERROR: Invalid entered value(s)!\n\n");
        }
        else if (z < 3 || z > 20)
        {   
		if (c_car == 'Q' && z != 0){
            printf("ERROR: To quit, the number of iterations should be 0!\n\n");

          }
	  else if (c_car == 'Q' && z == 0){
				break;
			}


            else{
         
                 printf("ERROR: The number of iterations must be between 3-20 inclusive!\n\n");
        	} 

	}

        
        
        else
        {
            switch (c_car) // using switch function to avoid multiple use of if and else statement.
            {

            

            case'W':
                printf("WHILE   : ");
                while (i < z)
                {

                    printf("W");
                    ++i;
                }
                i = 0;
                printf("\n\n");
                break;

            case'F':
                printf("FOR     : ");
                for (i = 0; i < z; ++i)
                {
                    printf("F");
                }
                i = 0;
                printf("\n\n");
                break;

            case'D':
                printf("DO-WHILE: ");
                do
                {
                    printf("D");
                    i++;

                } while (i < z);
                i = 0;
                printf("\n\n");
                break;

            default:
                break;


            }
        }

        if (c_car == 'Q' && z == 0)
        {
            break;  // setting break point to exit the loop
        }

    } while (c_car != 'Q' || z != 0);  //compliting the while loop

printf("\n+--------------------+");
printf("\nLoop application ENDED");
printf("\n+--------------------+\n");




    return 0;
}