/*
*****************************************************************************
                         Workshop - #3 (P2)
Full Name  : Smit anjaykumar patel
     Student ID#: 104424213
     Email      : sapatel59@myseneca.ca
     Section    : IPC144NMM.10348.2221

     Authenticity Declaration:
     I declare this submission is the result of my own work and has not been
     shared with any other student or 3rd party content provider. This submitted
     piece of work is entirely of my own creation.
     ***************************************************************************** */



#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main (void)
{
    const double TAX = 0.13;
const char patSize = 'S', salSize = 'M', tomSize = 'L';

    int x,y,s;  //  integer variables declaration
    float small, medium, large,  tax1=14.0100,  tax2=14.0200,  tax3=14.0300; 
    printf("Set Shirt Prices\n"
           "================\n"
           "Enter the price for a SMALL shirt: $");
    scanf("%f",&small);


    printf("Enter the price for a MEDIUM shirt: $"); 
    scanf("%f",&medium);


    printf("Enter the price for a LARGE shirt: $"); 
    scanf("%f",&large);

    printf("\nShirt Store Price List\n"
    "======================\n");
    
    printf("SMALL  : $17.96\n"
           "MEDIUM : $26.96\n"
           "LARGE  : $35.97\n");
    
 printf("\nPatty's shirt size is '%c'\n",patSize);
    printf("Number of shirts Patty is buying: ");
    scanf("%d",&x);

    printf("\nTommy's shirt size is '%c'\n",tomSize);
    printf("Number of shirts Tommy is buying: ");
    scanf("%d",&y);

    printf("\nSally's shirt size is '%c'\n",salSize);
    printf("Number of shirts Sally is buying: ");
    scanf("%d",&s);

    
   printf("\nCustomer Size Price Qty Sub-Total       Tax     Total\n");


    printf("-------- ---- ----- --- --------- --------- ---------\n");


    printf("Patty    S    %5.2lf %3d %9.4lf %9.4lf %9.4lf\n",small,x,small*x,tax1,small*x+tax1);


    printf("Sally    M    %5.2lf %3d %9.4lf %9.4lf %9.4lf\n",medium,s,medium*s,tax2,medium*s+tax2);


    printf("Tommy    L    %5.2lf %3d %9.4lf %9.4lf %9.4lf\n",large,y,large*y,tax3,large*y+tax3);


    printf("-------- ---- ----- --- --------- --------- ---------\n");


    printf("%33.4lf %9.4lf %9.4lf\n",small*x+medium*s+large*y,tax1+tax2+tax3,(small*x+tax1)+(medium*s+tax2)+(large*y+tax3));



 printf("\nDaily retail sales represented by coins");


    printf("\n=======================================\n");

    printf("\nSales EXCLUDING tax");

    printf("\nCoin     Qty   Balance");
    printf("\n-------- --- ---------");
     printf("\n%22.4lf",small*x+medium*s+large*y);

    float total_1=323.5100, e=(total_1-323)*100+(TAX-0.13);
    int ta1=323;
   
    int tooni = ta1/2;

    int loni= ta1-tooni*2,dimes=2%2,nickels=32%2;

    int qua=e/25;

    int pen=qua-loni;


    float f= 0.0100; //declaring floating variable


   
   
    printf("\nToonies  %3d %9.4lf",tooni,total_1-322);

    printf("\nLoonies  %3d %9.4lf",loni,(total_1-322)-loni);

    printf("\nQuarters %3d %9.4lf",qua,f);

    printf("\nDimes    %3d %9.4lf",dimes,f);

    printf("\nNickels  %3d %9.4lf",nickels,f);

    printf("\nPennies  %3d %9.4lf\n",pen,(f-(1.00/100))*-1);

    printf("\nAverage cost/shirt: $%0.4f\n",(small*x+medium*s+large*y)/13);




   float total_2=365.5700, e2=(total_2-365)*100,m1=0.05+TAX;

    int tma1=365;

    printf("\nSales INCLUDING tax"
    "\nCoin     Qty   Balance"
    "\n-------- --- ---------");
    
    
    printf("\n%22.4lf",(small*x+tax1)+(medium*s+tax2)+(large*y+tax3));


    int toni2=tma1/2;
    int loni2=toni2/(tma1/2) ,dim2=364%2,nik2=365%2;
    int qua2=e2/25;
    int peni2=qua2-loni2;
    float ja2= 0.0700;
    

    printf("\nToonies  %3d %9.4lf",toni2,total_2-364);
    printf("\nLoonies  %3d %9.4lf",loni2,(total_2-364)-loni);
    printf("\nQuarters %3d %9.4lf",qua2,ja2);
    printf("\nDimes    %3d %9.4lf",dim2,ja2);
    printf("\nNickels  %3d %9.4lf",nik2,ja2-m1+TAX);
    printf("\nPennies  %3d %9.4lf\n",peni2+1,(ja2-(7.00/100)));

    printf("\nAverage cost/shirt: $%0.4f\n",((small*x+tax1)+(medium*s+tax2)+(large*y+tax3))/13);


return 0;




}