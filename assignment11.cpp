/***********************************************************************
* Program:
*    Assignment 11, Monthly Budget
*    Brother Schwieder, CS124
* Author:
*    Will Brown
* Summary: 
*    That your monthly budget will be printed out with the correct spacing
*     and allignments.
*
*     Estimated:  1.5 hrs   
*     Actual:     2.2 hrs
*      I struggled with the alignments. I didn't read it clearly when it
*      stated spaces reset to 0 after an input. Lesson, read things more
*      thoroughly next time.
************************************************************************/

#include <iostream>  //To use cout
#include <iomanip>   //To use setw()
using namespace std;

/**********************************************************************
 * Program to display the monthly budget.
 ***********************************************************************/
int main()
{
   cout.setf(ios::fixed);  //no scientific notation
   cout.setf(ios::showpoint);   //always show decimal point
   cout.precision(2);    // show 2 decimals for cents.

   //Display columns program

   cout << "\t" <<  "Item" << setw(21) << "Projected\n";
   cout << "\t" << "=============" << setw(12) << "==========" << endl;
   cout << "\tIncome" << setw(10) << "$" << setw(9) << 1000.00 << endl;
   cout << "\tTaxes" << setw(11) << "$" << setw(9) << 100.00 << endl;
   cout << "\tTithing" << setw(9) << "$" << setw(9) << 100.00 << endl;
   cout << "\tLiving" << setw(10) << "$" << setw(9) << 650.00 << endl;
   cout << "\tOther" << setw(11) << "$" << setw(9) << 90.00 << endl;
   cout << "\t=============" << setw(12) << "==========" << endl;
   cout << "\tDelta" << setw(11) << "$" << setw(9) << 60.00 << endl;


   
   return 0;
}
