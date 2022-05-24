/* *****************************************************************************
                   <assessment name example: Workshop - #3 (Part-1)>
     Full Name  : Smit anjaykumar Patel
     Student ID#: 104424213
     Email      : sapatel59@myseneca.ca
     Section    :IPC144NMM.10348.2221
     Authenticity Declaration:
     I declare this submission is the result of my own work and has not been
     shared with any other student or 3rd party content provider. This submitted
     piece of work is entirely of my own creation.
     ***************************************************************************** */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)

{
    int x;

    float s, m, l, sum;

    printf("Set Shirt Prices\n"
           "================\n");

    printf("Enter the price for a SMALL shirt: $");
    scanf(" %f", &s);
    

    printf("Enter the price for a MEDIUM shirt: $");
    scanf(" %f", &m);

    printf("Enter the price for a LARGE shirt: $");
    scanf(" %f", &l);

    printf("\nShirt Store Price List\n"
           "======================\n");

    printf("SMALL  : $%0.2f\n", s);
    printf("MEDIUM : $%0.2f\n", m);
    printf("LARGE  : $%0.2f\n\n", l);

    printf("Patty's shirt size is 'S'\n");

    printf("Number of shirts Patty is buying: ");
    scanf(" %d", &x);

    printf("\nPatty's shopping cart...\n");

    printf("Contains : %d shirts", x);

    sum = x * s;

    printf("\nSub-total: $%0.4lf\n", sum);

    printf("Taxes    : $ 18.6800\n");

    sum = sum + 18.6800;

    printf("Total    : $%0.4f\n", sum);

    return 0;
}
