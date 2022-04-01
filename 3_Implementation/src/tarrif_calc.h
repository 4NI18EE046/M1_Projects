#include<stdio.h>

double Residential(int  units, float fixed_charges, float ED_charges);
double Commercial(int units,float fixed_charges, float ED_charges);
double Industrial(int units,float fixed_charges, float ED_charges);
int units;
int prev_reading, cur_reading;
float Sur_Charges, customer_charges, per_unit_charge, Energy_charges, fixed_charges, ED_charges;
char group;
double Bill_amount;


double Residential(int units, float fixed_charges, float ED_charges)
{
    if (units > 0 && units <= 50)
        {
            per_unit_charge = 1.45;

            Energy_charges = units * per_unit_charge;
            customer_charges = 25;
            Bill_amount = Energy_charges + fixed_charges + customer_charges + ED_charges;
            printf("Bill amount=%lf \n", Bill_amount);
        }
    else if (units > 51 && units <= 75)
        {
            per_unit_charge = 2.60;
            Energy_charges = units * per_unit_charge;
            customer_charges = 30;
            Bill_amount = Energy_charges + fixed_charges + customer_charges + ED_charges;
            printf("Bill amount= %lf \n", Bill_amount);
        }
    return Bill_amount;
}

double Commercial(int units, float fixed_charges,float ED_charges)
{
   
        if (units > 0 && units <= 100)
        {
            per_unit_charge = 2.60;
            Energy_charges = units * per_unit_charge;
            customer_charges = 35;
            Bill_amount = Energy_charges + fixed_charges + customer_charges + ED_charges;
            printf("Bill amount= %lf\n ", Bill_amount);
        }
        else if (units > 101 && units <= 200)
        {
            per_unit_charge = 3.60;
            Energy_charges = units * per_unit_charge;
            customer_charges = 45;
            Bill_amount = Energy_charges + fixed_charges + customer_charges + ED_charges;
            printf("Bill amount= %lf \n", Bill_amount);
        }
        else if (units > 201 && units <= 225)
        {
            per_unit_charge = 6.90;
            Energy_charges = units * per_unit_charge;
            customer_charges = 50;
            Bill_amount = Energy_charges + fixed_charges + customer_charges + ED_charges;
            printf("Bill amount= %lf \n", Bill_amount);
        }
    return Bill_amount;    
}

double Industrial(int units, float fixed_charges,float ED_charges)
{
    if (units > 0 && units <= 50)
        {
            per_unit_charge = 2.65;
            Energy_charges = units * per_unit_charge;
            customer_charges = 35;
            Bill_amount = Energy_charges + fixed_charges + customer_charges + ED_charges;
            printf("Bill amount=%lf \n", Bill_amount);
        }
        else if (units > 51 && units <= 100)
        {
            per_unit_charge = 3.35;
            Energy_charges = units * per_unit_charge;
            customer_charges = 40;
            Bill_amount = Energy_charges + fixed_charges + customer_charges + ED_charges;
            printf("Bill amount=%lf\n ", Bill_amount);
        }
        else if (units > 101 && units <= 200)
        {
            per_unit_charge = 5.40;
            Energy_charges = units * per_unit_charge;
            customer_charges = 45;
            Bill_amount = Energy_charges + fixed_charges + customer_charges + ED_charges;
            printf("Bill amount=%lf\n ", Bill_amount);
        }
        else if (units > 201 && units <= 300)
        {
            per_unit_charge = 7.10;
            Energy_charges = units * per_unit_charge;
            customer_charges = 50;
            Bill_amount = Energy_charges + fixed_charges + customer_charges + ED_charges;
            printf("Bill amount=%lf \n", Bill_amount);
        }
        else if (units > 301 && units <= 400)
        {
            per_unit_charge = 7.95;
            Energy_charges = units * per_unit_charge;
            customer_charges = 50;
            Bill_amount = Energy_charges + fixed_charges + customer_charges + ED_charges;
            printf("Bill amount=%lf\n ", Bill_amount);
        }
        else if (units > 401 && units <= 500)
        {
            per_unit_charge = 8.50;
            Energy_charges = units * per_unit_charge;
            customer_charges = 55;
            Bill_amount = Energy_charges + fixed_charges + customer_charges + ED_charges;
            printf("Bill amount=%lf\n ", Bill_amount);
        }
        else
        {
            per_unit_charge = 9.95;
        Energy_charges = units * per_unit_charge;
        customer_charges = 55;
        Bill_amount = Energy_charges + fixed_charges + customer_charges + ED_charges;
        printf("Bill amount=%lf\n ", Bill_amount);
    }
    return Bill_amount; 
}
