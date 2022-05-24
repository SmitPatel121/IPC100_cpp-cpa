/*
*****************************************************************************
                          Workshop - #2 (P1)
Full Name  : Smit Anjykumar Patel
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

int main(void)
{
    // You must use this variable in #3 data analysis section!
    const double testValue = 330.99;
    const double price3 = 334.49;
    const double price1 = 111.49;
    const double price2 = 222.99;
    int prod1 = 111;
    int prod2 = 222;
    int prod3 = 111;
    char Y = 0;
    char N = 0;
    int taxed1 = Y;

    int taxed2 = N;


    int taxed3 = N;

    double x, y;
    printf("Product Information\n"
        "===================\n"
        "Product-1 (ID:%d)\n", prod1);

    printf("  Taxed: Y\n");
    printf("  Price: $%0.4lf\n\n", price1);
    printf("Product-2 (ID:%d)\n", prod2);
    printf("  Taxed: N\n");
    printf("  Price: $%0.4lf\n\n", price2);
    printf("Product-3 (ID:%d)\n", prod3);
    printf("  Taxed: N\n");
    printf("  Price: $%0.4lf\n\n", price3);

    x = (price1 + price2 + price3) / 3;
    printf("The average of all prices is: $%0.4lf\n\n", x);
    printf("About Relational and Logical Expressions!\n"
        "========================================\n"
        "1. These expressions evaluate to TRUE or FALSE\n"
        "2. FALSE: is always represented by integer value 0\n"
        "3. TRUE : is represented by any integer value other than 0\n\n");

    Y = 1;
    N = 0;

    printf("Some Data Analysis...\n"
        "=====================\n"
        "1. Is product 1 taxable? -> %d\n\n", Y);
    printf("2. Are products 2 and 3 both NOT taxable (N)? -> %d\n\n", Y);
    printf("3. Is product 3 less than testValue ($%0.2lf)? -> %d\n\n", testValue, taxed2);
    printf("4. Is the price of product 3 more than both product 1 and 2 combined? -> %d\n\n", Y);

    y = price3 - price2;
    printf("5. Is the price of product 1 equal to or more than the price difference\n   of product 3 LESS product 2? ->  %d (price difference: $%0.2lf)\n\n", N, y);

    printf("6. Is the price of product 2 equal to or more than the average price? -> 1\n\n7. Based on product ID, product 1 is unique -> %d\n\n", taxed1);

    printf("8. Based on product ID, product 2 is unique -> %d\n\n", Y);
    printf("9. Based on product ID, product 3 is unique -> %d\n\n", taxed3);








    return 0;
}
