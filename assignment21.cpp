/***********************************************************************
* Program:
*    Assignment 21, Stub Functions
*    Brother Schwieder, CS124
* Author:
*    Will Brown
* Summary: 
*    Create a program with stub functions in place for the time being.
*    
*    Estimated:  2.0 hrs   
*    Actual:     4.0 hrs
*      I struggled with the understanding of the scope this
*      week but after reviewing some of the discussion board I worked 
*      out I needed to place some prototypes in place.
*************************************************************************/

#include <iostream>
#include <iomanip>
#include <cassert>


using namespace std;

float getPeriodicCost();
float promptDevalue();
float promptInsurance();
float promptParking();

float getUsageCost();
float promptMileage();
float promptGas();
float promptRepairs();
float promptTires();


/**********************************************************************
 * Create a program with stubs.
 **********************************************************************/
float getPeriodicCost () //function to get called by main(). 
{
   float Devalue      = 0;
   float Insurance    = 0;
   float Parking      = 0;
   float costPeriodic = 0;

   Devalue   = promptDevalue ();
   Insurance = promptInsurance ();
   Parking   = promptParking ();
   
   costPeriodic = Devalue + Insurance + Parking;
   
   return costPeriodic;
}
/**********************************************************************/
float promptDevalue ()  
{
//stub for now.
   return 0.0;
}
/**********************************************************************/
float promptInsurance() 
{ 
//stub for now. 
   return 0.0;
}
/**********************************************************************/
float promptParking()  //function for Parking.
{
//stub for now.
   return 0.0;
}

/**********************************************************************/
float getUsageCost()
{
   float Mileage = 0;
   float Gas = 0;
   float Repairs = 0;
   float Tires = 0;
   float costUsage = 0;

   Mileage   = promptMileage();
   Gas       = promptGas ();
   Repairs   = promptRepairs ();
   Tires     = promptTires ();
   
   costUsage = Mileage + Gas + Repairs + Tires;
   
   return costUsage;
}

/**********************************************************************/

float promptMileage()
{
//stub for now.
   return 0.0;
}

/**********************************************************************/

float promptGas()
{
//stub for now.
   return 0.0;
}

/**********************************************************************/

float promptRepairs()
{
//stub for now.
   return 0.0;
}

/**********************************************************************/

float promptTires()
{
//stub for now.
   return 0.0;
}

/**********************************************************************/

float display(float costPeriodic, float costUsage)
//Both parameters are picked up from main() and brought across with 
//the display function.
{
//stub for now.
   cout << "Success\n"; 
   
   return 0;
}

/*******************************************************************
 * Main Function
 *******************************************************************/

int main() 
{
   cout.setf(ios::fixed);
   cout.setf(ios::showpoint);
   cout.precision(2);


   
   float costPeriodic = 0;
   float costUsage    = 0;
   float displayTable = 0;

   costPeriodic = getPeriodicCost ();
     
   costUsage    = getUsageCost ();
     
   displayTable = display (costPeriodic, costUsage);
   
   return 0;
   
}