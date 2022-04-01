#include "bill.h"
#include "tarrif_calc.h"



int main()
{
    int units;
    int prev_reading, cur_reading;
    float Sur_Charges, customer_charges, per_unit_charge, Energy_charges, fixed_charges, ED_charges;
    char group;
    double Bill_amount;
   //scanf("%d", &units);
    printf("\t\t\t\t\t\tWelcome to Tariff calculation\n\n\n");
    printf("Enter Previous reading\n");
    scanf("%d", &prev_reading);
    printf("Enter the Current reading\n");
    scanf("%d", &cur_reading);
    printf("Enter fixed chargers = 50 \n");
    scanf("%f", &fixed_charges);
    printf("Enter the Ed charges = 40\n");
    scanf("%f", &ED_charges);
    printf("Enter 1 for Residential, 2 for Commercial, 3 for Industrial\n");
    getchar();
    scanf("%c", &group);
    units = cur_reading - prev_reading;
    printf("Units= %d\n", units);
    
    if (group == '1')
    {
        
        if (units >75)
            group = '2';
        
        else
            Residential(units,fixed_charges,ED_charges);
    }
    if (group == '2')
    {
        if (units>225)
            group = '3';
        else
            Commercial(units,fixed_charges,ED_charges);
    }

    if (group == '3')
    {

    Industrial(units,fixed_charges,ED_charges);
    }
    return 0;
}
