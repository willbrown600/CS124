/***********************************************************************
* Program:
*    Assignment 34, Pointer Arithmetic
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
 

int countLetters(const char letter, char * ptext);
int main();

/********************************************************************
 * MAIN
 *******************************************************************/
int main()
{
   char letter;
   char text[256];
   char * ptext = text;
   
   
   cout << "Enter a letter: ";
   cin >> letter;
   
   cin.ignore();
   
   cout << "Enter text: ";
   cin.getline(ptext, 256);
   
      
   int letterSum = countLetters(letter, ptext);
   
   cout << "Number of '" << letter << "'s: " << letterSum << endl;
   
   return 0;

}
 
/*******************************************************************
 * GET GRADES
 *******************************************************************/
int countLetters(const char letter, char * ptext)
{
   int letterSum = 0;
   
   for (char * p = ptext; *p; p++)
   {
      if (*p == letter)
         letterSum++; 
   }
   return letterSum;
}

 
