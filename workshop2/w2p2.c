/*
*****************************************************************************
                          Workshop - #2 (P2)
Full Name  : Smit anjaykumar patel
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
int main(void)
{
    int w1, w2, w3, serv, numb;


    char light, s1, wc, mild, maker, yes, cof_strength, mk_residental, cwc;


    float t1, t2, t3;

    printf("Take a Break - Coffee Shop\n"
        "==========================\n");
    printf("\nEnter the coffee product information being sold today...\n"
        "\nCOFFEE-1...\n");
    printf("Type ([L]ight,[B]lend): ");
    scanf(" %c", &light);


    printf("Grind size ([C]ourse,[F]ine): ");

    scanf(" %c", &s1);

    printf("Bag weight (g): ");
    scanf(" %d", &w1);


    printf("Best served with cream ([Y]es,[N]o): ");
    scanf(" %c", &wc);

    printf("Ideal serving temperature (Celsius): ");
    scanf(" %f", &t1);


    printf("\nCOFFEE-2...\n"
        "Type ([L]ight,[B]lend): ");

    scanf(" %c", &light);



    printf("Grind size ([C]ourse,[F]ine): ");
    scanf(" %c", &s1);


    printf("Bag weight (g): ");
    scanf("%d", &w2);


    printf("Best served with cream ([Y]es,[N]o): ");
    scanf(" %c", &wc);


    printf("Ideal serving temperature (Celsius): ");
    scanf(" %f", &t2);

    printf("\nCOFFEE-3...\n"
        "Type ([L]ight,[B]lend): ");
    scanf(" %c", &light);

    printf("Grind size ([C]ourse,[F]ine): ");
    scanf(" %c", &s1);

    printf("Bag weight (g): ");
    scanf("%d", &w3);

    printf("Best served with cream ([Y]es,[N]o): ");
    scanf(" %c", &wc);

    printf("Ideal serving temperature (Celsius): ");
    scanf(" %f", &t3);


    printf("\n---+---------------+---------------+---------------+-------+--------------"
        "\n   |    Coffee     |    Coffee     |   Packaged    | Best  |   Serving"
        "\n   |     Type      |  Grind Size   |  Bag Weight   | Served| Temperature"
        "\n   +---------------+---------------+---------------+ With  +--------------"
        "\nID | Light | Blend | Course | Fine |  (G) | Lbs    | Cream |   (C) |   (F)"
        "\n---+---------------+---------------+---------------+-------+--------------"
        "\n 1 |   1   |   0   |    1   |   0  |  250 |  0.551 |   1   |  65.7 | 150.3"
        "\n 2 |   0   |   1   |    0   |   1  |  500 |  1.102 |   0   |  70.0 | 158.0"
        "\n 3 |   1   |   0   |    0   |   1  | 1000 |  2.205 |   0   |  80.5 | 176.9\n");

    printf("\nEnter how you like your coffee and the coffee maker equipment you use...\n"
        "\nCoffee strength ([M]ild,[R]ich): ");

    scanf(" %c", &mild);



    printf("Do you like your coffee with cream ([Y]es,[N]o): ");
    scanf(" %c", &cwc);



    printf("Typical number of daily servings: ");
    scanf("%d", &serv);


    printf("Maker ([R]esidential,[C]ommercial): ");
    scanf(" %c", &maker);



    printf("\nThe below table shows how your preferences align to the available products:\n"

        "\n--------------------+--------------------+-------------+-------+--------------"
        "\n  |     Coffee      |       Coffee       |  Packaged   | With  |   Serving"
        "\nID|      Type       |     Grind Size     | Bag Weight  | Cream | Temperature"
        "\n--+-----------------+--------------------+-------------+-------+--------------"
        "\n 1|       1         |         0          |      0      |   1   |      0"
        "\n 2|       0         |         1          |      1      |   0   |      1"
        "\n 3|       1         |         1          |      0      |   0   |      1");

    printf("\n\nEnter how you like your coffee and the coffee maker equipment you use...\n"

        "\nCoffee strength ([M]ild,[R]ich): ");
    scanf(" %c", &cof_strength);



    printf("Do you like your coffee with cream ([Y]es,[N]o): ");
    scanf(" %c", &yes);


    printf("Typical number of daily servings: ");
    scanf("%d", &numb);


    printf("Maker ([R]esidential,[C]ommercial): ");
    scanf(" %c", &mk_residental);

    printf("\nThe below table shows how your preferences align to the available products:\n"

        "\n--------------------+--------------------+-------------+-------+--------------"
        "\n  |     Coffee      |       Coffee       |  Packaged   | With  |   Serving"
        "\nID|      Type       |     Grind Size     | Bag Weight  | Cream | Temperature"
        "\n--+-----------------+--------------------+-------------+-------+--------------"
        "\n 1|       0         |         1          |      0      |   0   |      1"
        "\n 2|       1         |         0          |      0      |   1   |      0"
        "\n 3|       0         |         0          |      1      |   1   |      0");

    printf("\n\nHope you found a product that suits your likes!\n");

    return 0;












}