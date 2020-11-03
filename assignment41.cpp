/***********************************************************************
* Program:
*    Assignment 41, Allocating Memory
*    Brother Schwieder, CS124
* Author:
*    Will Brown
* Summary: 
*    Allocate Memory.
*
*    Estimated:  2.0 hrs   
*    Actual:     3.0 hrs
*      It took a while but I got there in the end.
************************************************************************/

#include <iostream>
#include <cassert>
using namespace std;


int getNumChars();
int * allocate(int numChars);
int getText(char * text, int numChars);


/********************************************************************
 * MAIN
 *******************************************************************/
int main()
{
   char * text;
   int numChars = getNumChars();
   if (numChars <= 1)
   {
      return 0;
   }
   else
   {
      int allocatedChars = *allocate(numChars);
      getText(text, numChars);
      //displayText(Text, numChars);
   }
   
   
   delete [] text;
   text = NULL;
   
   return 0;
   
}

/************************************************
 * GET NUMBER OF CHARACTERS
 ************************************************/
int getNumChars()
{

   int NumChars;
   
   do
   {
   
      //Get filename whilst looping to get correct characters.
      cout << "Number of characters: ";
      cin >> NumChars;
      
      if (NumChars <= 0)
      {
         cout << "Allocation failure!\n";
         break;
      }
      
   }
   while (NumChars <= 0);
   //if Number of characters are incorrect display failure method.
   
   
   return NumChars + 1;

      
}
/***************************************************************
 * ALLOCATE
 **************************************************************/
int * allocate(int numChars)
{
   assert(numChars > 0);
   
   int *p = new(nothrow) int [numChars + 1];
   
   // if p == NULL, have failed to allocate.
   
   if (!p)
      cout << "Allocation failure!" << endl;
   
   return p;
 
}

/**************************************************************
 * GET TEXT
 *************************************************************/
int getText(char * text, int numChars)
{
   assert(text != NULL);
   assert((numChars + 1) > 0);
   
   cout << "Enter Text: ";
   cin.ignore();
   cin.getline(text, numChars);
   
   
   cout << "Text: " << text << endl;

}
