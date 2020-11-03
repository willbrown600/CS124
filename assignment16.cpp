/***********************************************************************
* Program:
*    Assignment 16, IF Statements
*    Brother Schwieder, CS124
* Author:
*    Will Brown
* Summary: 
*    Construct a program that will compute tax for the different
*    income streams. will output the appropriate response.
*     Estimated:  2.0 hrs   
*     Actual:     3.0 hrs
*    I found understanding the functions and calling the information
*    from one function to another difficult. I obviously have not
*    grasped that concept properly yet.
************************************************************************/

#include <iostream>  //To use cout

using namespace std;


/**********************************************************************
 * This is the computeTax() function.
 ***********************************************************************/
int computeTax(double income)
//Using income as an argument as I want that information in my
// my function.
{
//create variable result.
   double result;
// if statement of if the income is less than 15100 the tax result is 10.
   if (income <= 15100)
      result = 10;
//Using else if statements due to multiple possible answers.
   else if (income <= 61300)
      result = 15;
   else if (income <= 123700)
      result = 25;
   else if (income <= 188450)
      result = 28;
   else if (income <= 336550)
      result = 33;
// No need to add a limit as it has all been covered by other statements.
   else
      result = 35;


   return result;
   
}

/*********************************************************************
 * This is the int main() function. 
 ********************************************************************/
int main()
//Main function required to put all the pieces together. Provides response
//and calls responseLord function to provide data.
//int main() is required to be last according to C++programming.
{

   cout.setf(ios::fixed);
   cout.setf(ios::showpoint);
   cout.precision(2);
//create income variable
   double income;
//Prompt user for income and recieve input.
   cout << "Income: ";
   cin >> income;
// create taxrate variable to invoke computeTax function.
   double taxrate = computeTax(income);
// Provide output and return value from computeTax function.
   cout << "Your tax bracket is " << computeTax(income) << "%\n";
         
   return 0;

}

