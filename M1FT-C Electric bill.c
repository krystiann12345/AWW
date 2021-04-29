#include <stdio.h>
#include <stdlib.h>

//program in C to calculate and print the Electricity bill of a given customer//

int main()
{
    int id,units;
    float chrg,surchrg,unit_chrg,total;

    printf("\nInput Customer ID:");
    scanf("%d",&id);

    printf("\nInput the unit consumed by the customer:");
    scanf("%d",&units);

//The Charges/unit for electric bill//
    if (units <200)
	chrg = 1.50;
   else	if (units>=250 && units<400)
		chrg = 1.60;
	else if (units>=450 && units<600)
		chrg = 1.85;
	else
		chrg = 2.00;

    unit_chrg = units*chrg;
   if (unit_chrg>600)
	surchrg = unit_chrg*10/100.0;
  total = unit_chrg+surchrg;
   if (total  < 100)
    total =100;
   printf("*****Customer's Electricity Bill*****\n");
   printf("Customer ID#:\t%d\n",id);
   printf("unit Consumed:\t%d\n",units);
   printf("Unit Charges @P.%4.2f  per unit:\t%8.2f\n",chrg,total);
   printf("Surcharge Amount:\t%8.2f\n",surchrg);
   printf("Total Customer Bill:\tP%8.2f\n",total);

return 0;
}
