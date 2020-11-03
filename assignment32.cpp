/***********************************************************************
* Program:
*    Assignment 32, Strings
*    Brother Schwieder, CS124
* Author:
*    Will Brown
* Summary: 
*    Create a program where we able able to count the number of 
*    letters in a string.
*
*    Estimated:  2.0 hrs   
*    Actual:     3.0 hrs
*      It took a while but I got there in the end.
************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;
 

int countLetters(char letter, char text[]);
int main();

/********************************************************************
 * MAIN
 *******************************************************************/
int main()
{
   char letter;
   char text[256];
   
   cout << "Enter a letter: ";
   cin >> letter;
   
   cin.ignore();
   
   cout << "Enter text: ";
   cin.getline(text, 256);
   
   
   int letterSum = countLetters(letter, text);
   
   cout << "Number of '" << letter << "'s: " << letterSum << endl;
   
   return 0;

}
 
/*******************************************************************
 * GET GRADES
 *******************************************************************/
int countLetters(char letter, char text[])
{
   int letterSum = 0;
   
   for (int i = 0; text[i]; i++)
   {
      if (text[i] == letter)
         letterSum += 1; 
   }
   return letterSum;
}

 
