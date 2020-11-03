/***********************************************************************
* Program:
*    Assignment 35, Advanced Conditionals
*    Brother Schwieder, CS124
* Author:
*    Will Brown
* Summary: 
*    Modify countLetters() function using pointer arithmetic.
*
*    Estimated:  2.0 hrs   
*    Actual:     3.0 hrs
*      It took a while but I got there in the end.
************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;
 
int computeGradeSign(int grade, int letterGrade);
int computeLetterGrade(int grade);
int main();

/********************************************************************
 * MAIN
 *******************************************************************/
int main()
{
   int grade = 0;
   
   cout << "Enter number grade: ";
   cin >> grade;
   
   char letterGrade = computeLetterGrade(grade);
   char symbol = computeGradeSign(grade, letterGrade);
   
   
   (grade % 10 == 0) || (letterGrade == 'F') ? cout << grade 
                            << "% is " << letterGrade << endl:
                       cout << grade << "% is " << letterGrade
                            << symbol << endl;
                            
   
   return 0;

}
 
/*******************************************************************
 * GET GRADES
 *******************************************************************/
int computeLetterGrade(int grade)
{
   char letterGrade;
   
   switch (grade / 10)
   {
      case 10:
      case 9:
         letterGrade = 'A';
         break;
      case 8:
         letterGrade = 'B';
         break;
      case 7:
         letterGrade = 'C';
         break;
      default:
         letterGrade = 'F';
         break;
   }
   
   return letterGrade;  
   
}

/**************************************************************
 * GET GRADES
 *************************************************************/
int computeGradeSign(int grade, int letterGrade)
{
   char symbol;

   if ((letterGrade == 'B') && ((grade % 10) >= 3))
      return letterGrade;
   
   else if (letterGrade == 'A')
      return letterGrade;
       
   else if (((grade % 10) <= 3) && !(letterGrade == 'F'))
      symbol = '-';
       
   else if (((grade % 10) >= 6) && !(letterGrade == 'F'))
      symbol = '+';
    
   return symbol;
}