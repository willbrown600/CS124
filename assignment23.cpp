/***********************************************************************
* Program:
*    Assignment 23, Loop Syntax
*    Brother Schwieder, CS124
* Author:
*    Will Brown
* Summary: 
*    Create a program that adds the sum of multiples less than 100.
*    
*    Estimated:  2.0 hrs   
*    Actual:     3.0 hrs
*      I don't know what happened but it worked.  
*      
*************************************************************************/

#include <iostream>

using namespace std;


/*******************************************************************
 * Main Function
 *******************************************************************/
int main() 
{
   int i;
   int input;
   int sum = 0;
   

   cout << "What multiples are we adding? ";
   cin >> input;
   {
      for (i = input; i < 100; i += input)       
         sum += i;   
                  
   }
   cout << "The sum of multiples of " << input         
        << " less than 100 are: " << sum << endl; 
   return 0; 
}