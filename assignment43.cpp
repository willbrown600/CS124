/***********************************************************************
* Program:
*    Assignment 43, Command Line
*    Brother Schwieder, CS124
* Author:
*    Will Brown
* Summary: 
*    This program will run a program from a command line.
*    
*
*    Estimated:  1.0 hrs   
*    Actual:     1.5 hrs
*      This took a while to get my head around but it was good.
************************************************************************/

#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;




/**********************************************************************
 * MAIN
 * Parse the command line and call the functions.
 ***********************************************************************/
int main(int argc, char ** argv)
{
   if (argc > 8)
   {
      cout << "Unexpected number of parameters.\n";
      
      return 1;
   
   }
   
   cout.setf(ios::fixed);
   cout.setf(ios::showpoint);
   cout.precision(1);
         
   for (int iArg = 1; iArg < argc; iArg++)
   {
      float metres = 3.28;
      float answer;
      float convert;
      convert = atof(argv[iArg]);
      answer = convert / metres;
            
      cout << convert << " feet is " << answer << " meters\n";
   }
         
   return 0;
}
