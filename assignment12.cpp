/***********************************************************************
* Program:
*    Assignment 12, Input & Variables
*    Brother Schwieder, CS124
* Author:
*    Will Brown
* Summary: 
*    To write a program that prompts the user for his or her income
*    and displays the result on the screen.
*
*    Estimated:  1.5 hrs   
*    Actual:     1.5 hrs
*      Still just getting use to how programming is achieved and
*      learning there is more to just asking for user input.
************************************************************************/

#include <iostream>  // To use cout
#include <iomanip>   // To use setw
using namespace std;

/**********************************************************************
 * The function should ask the user for his or her monthly income.
 * It should then display the monthly income appropriately.
 ***********************************************************************/
int main()
{
   //Set decimal places due to numbers from income.
   cout.setf(ios::fixed);
   cout.setf(ios::showpoint);
   cout.precision(2);

   
   float income;                      //set variable income
   cout << "\tYour monthly income: "; //set display question to user.
   cin >> income;                     //set user input through cin >>.

   //display results

   cout << "Your income is: " << "$"
        << setw(9) << income << endl;
   


   
   return 0;
}
