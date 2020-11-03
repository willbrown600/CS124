/***********************************************************************
* Program:
*    Assignment 33, Pointers
*    Brother Schwieder, CS124
* Author:
*    Will Brown
* Summary: 
*    
*    Create a program to ask two people for their account balance. Then,
*    based on who has the most money, all subsequent purchases will be
*    charged to his or her account. Create a program where we able able to
*    count the number of letters in a string.
*
*    Estimated:  2.0 hrs   
*    Actual:     3.0 hrs
*      It took a while but I got there in the end.
************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;
 

void date(float * pAccount);
int main();

/********************************************************************
 * MAIN
 *******************************************************************/
int main()
{
   float accountSam = 0.0;
   float accountSue = 0.0;
   float * pAccount;
   
   
   cout << "What is Sam's balance? ";
   cin >> accountSam;
   
   cout << "What is Sue's balance? ";
   cin >> accountSue;
   
   if (accountSam > accountSue)
   {
      pAccount = &accountSam;
   }
   else
   {
      pAccount = &accountSue;
   }
   
   date(pAccount);
   
   cout << "Sam's balance: " << "$" << accountSam << endl;
   
   cout << "Sue's balance: " << "$" << accountSue << endl;
   
   return 0;
}
 
/*******************************************************************
 * DATE FUNCTION
 *******************************************************************/
void date(float * pAccount)
{
   
   float dinner = 0.0;
   float movie = 0.0;
   float iceCream = 0.0;
   float date = 0.0;
      
   cout << "Cost of the date:" << endl;
   
   cout << "\tDinner:    ";
   cin >> dinner;
   
  
   
   cout << "\tMovie:     ";
   cin >> movie;
   
   cout << "\tIce cream: ";
   cin >> iceCream;
   
   date = dinner + movie + iceCream;   
   
   *pAccount -= date;
   
}

 
