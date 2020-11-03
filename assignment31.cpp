/***********************************************************************
* Program:
*    Assignment 31, Array Syntax
*    Brother Schwieder, CS124
* Author:
*    Will Brown
* Summary: 
*    Create a program where three functions are able to pass 
*    one array of grades between them in order to formulate an average.
*    
*
*    Estimated:  2.0 hrs   
*    Actual:     4.0 hrs
*      It took a while but I got there in the end.
************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;
 

int getGrades(int grades[], int total);
int averageGrades(const int grades[], int total);
int main();

/********************************************************************
 * MAIN
 *******************************************************************/
int main()
{
   int grades[10];
   int total = 10;
   
   grades[10] = getGrades(grades, total);
   int average = averageGrades(grades, total);
   
   if (average <= 0)
   {
      cout << "Average Grade: " << "---" << "%\n";
   }
   else
   {
      cout << "Average Grade: " << average << "%\n";
   }
   return 0;

}
 
/*******************************************************************
 * GET GRADES
 *******************************************************************/
int getGrades(int grades[], int total)
{
   
   
   
   for (int i = 0; i < total; i++)
   {
      cout << "Grade " << i + 1 << ": ";
      cin >> grades[i]; 
   }
}

 
/******************************************************************
 * AVERAGE GRADES
 ******************************************************************/
int averageGrades(const int grades[], int total)
{
   int average = 0;
   int sum = 0;
   int negaTive = 0;

   for ( int i = 0; i < total; i++)
   {
      if (grades[i] == -1)
      {
         negaTive += 1;
      }
      else
      {
         sum += grades[i];
      }

      average = sum / (total - negaTive);
      if (average == 0)
         return 0;
      
   }  
   return average;

}
