/*
*****************************************************************************
                        Assignment 1 - Milestone 2
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


#include <stdio.h>
#include <string.h>

void clearInputBuffer(void)
{
    while (getchar() != '\n')
    {
        ;
    }
}


void suspend(void)
{
    printf("<ENTER> to continue...");
    clearInputBuffer();
    putchar('\n');
}
int inputInt()
{

    int Results_r = -1;
    char Next_Char = '\0';
    int Flote = 1;
    do
    {
        scanf(" %d%c", &Results_r, &Next_Char);
        if (Next_Char != '\n')
        {
            printf("Error! Input a whole number: ");
            clearInputBuffer();
        }
        else
        {
            Flote = 0;
        }

    } while (Flote);
    return Results_r;
}

int inputIntPositive()
{
    int Results_r = -1;
    do
    {
        Results_r = inputInt();
    } while (Results_r < 0 && printf("ERROR! Value must be > 0: "));
    return Results_r;
}

int inputIntRange(int Minimum, int Maximum)
{
    int result = Minimum - 1;
    do
    {
        result = inputInt();

    } while ((result < Minimum || result > Maximum) && printf("ERROR! Value must be between %d and %d inclusive: ", Minimum, Maximum));
    return result;
}

char inputCharOption(const char *c_String)
{
    char R_results = '\0';
    char N_next_char = '\0';
    int Ji = 0;
    int Length_l =strlen(c_String);
    int flote = 1;
    do
    {
        scanf(" %c%c", &R_results, &N_next_char);

        if (N_next_char == '\n')
        {
            for (Ji = 0; Ji < Length_l && flote; Ji++)
                if (c_String[Ji] == R_results)
                    flote = 0;
        }

    } while (flote && printf("ERROR: Character must be one of [%s]: ", c_String));

    return R_results;
}

void inputCString(char *c_String, int Minimum, int Maximum)
{
    char LargeInputes[100] = {'\0'};
    int Done_done = 0;
    int Xx = 0;
    //int Xx = 0;


    do
    {
        scanf(" %99[^\n]%*c", LargeInputes);
        for (Xx = 1; LargeInputes[Xx]; Xx++);
             // this will calculate the length of the string that is required

        if (Minimum == Maximum)
        {
            if (Xx == Minimum)
            {
               strcpy(c_String,LargeInputes);
                Done_done = 1;
            }
        }
        else
        {
            if (Xx >= Minimum && Xx <= Maximum)
            {
                strcpy(c_String,LargeInputes);
                Done_done = 1;
            }
        }
        if (!Done_done)
        {
            if (Minimum == Maximum)
            {
                printf("ERROR: String length must be exactly %d chars: ", Minimum);
            }
            else if (Minimum == 0||Xx>Maximum)
            {
                printf("ERROR: String length must be no more than %d chars: ", Maximum);
            }
            else
            {
                printf("ERROR: String length must be between %d and %d chars: ", Minimum, Maximum);
            }
        }

    } while (!Done_done);
}
void displayFormattedPhone(const char *C_String)
{
    int Xx = 0;

    int Is_Valide = 1;
    
    if (C_String != NULL)
    {
        for (Xx = 0; C_String[Xx] && Is_Valide; Xx++)
        {

            if (C_String[Xx] < 48 || C_String[Xx] > 57)
            {
                Is_Valide = 0;
            }
        }
    }
    if (Is_Valide && Xx == 10)
    {
        printf("(");
        for (Xx = 0; Xx < 3; Xx++)
            printf("%c", C_String[Xx]);
        printf(")");
        for (Xx = 3; Xx < 6; Xx++)
            printf("%c", C_String[Xx]);
        printf("-");
        for (Xx = 6; Xx < 10; Xx++)
            printf("%c", C_String[Xx]);
    }
    else
    {
        printf("(___)___-____");
    }
}