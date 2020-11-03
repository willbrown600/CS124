/***********************************************************************
* Program:
*    Assignment 13, Temperature Conversion
*    Brother Schwieder, CS124
* Author:
*    Will Brown
* Summary: 
*    That will construct a program that will convert temperature input from
*    Fahrenheit to Celsius.
*    Using formula C = 5/9(F - 32)
*
*     Estimated:  1.5 hrs   
*     Actual:     4.2 hrs
*      I struggled with the the floating point division. I didn't understand
*      what it meant by its conversion. I finally got there but I am not
*      convinced yet that I fully understand it.
************************************************************************/

#include <iostream>  //To use cout

using namespace std;

/**********************************************************************
 * Program to convert Fahrenheit input and display
 * the output in Celsius units.
 ***********************************************************************/
int main()
{
   cout.setf(ios::fixed);  //no scientific notation
   
   cout.precision(0);    // show no decimals and round up.

// Create variable f for fahrenheit.
   int f;
//Display output question and prompt for an input.
   cout << "Please enter Fahrenheit degrees: ";
   cin >> f;
//Change Celsius to float type despite wanting an integer answer.
//Break it all down to obtain proper order of operation.
   float c1 = (5.0 / 9.0);
   float c2 = ( f - 32 );
   float c = c1 * c2;
//Display output of c.
   cout << "Celsius: " << c << endl;
   
   
   

   return 0;
}
