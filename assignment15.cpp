/***********************************************************************
* Program:
*    Assignment 15, Boolean Expressions
*    Brother Schwieder, CS124
* Author:
*    Will Brown
* Summary: 
*    Construct a program that will formulate a full tithe payer.
*    The user will be prompted to input an income amount and how much
*    they pay in tithe. The program will formulate if the correct tithe
*    amount is paid and will output the appropriate response.
*     Estimated:  1.5 hrs   
*     Actual:     1.7 hrs
*    I was able to follow the layout of the functions okay. My biggest
*    has been the styleChecker and just making sure I conform to what
*    it is looking for.
************************************************************************/

#include <iostream>
#include <cassert>  //To use cout

using namespace std;


/**********************************************************************
 * This is the FullTithePayer() function.
 ***********************************************************************/
bool FullTithePayer(float Income, float Tithe)
//bool type used as we want a return.
{

  result = Income * 0.10;
  assert(result >= Tithe);
  assert(Tithe >= 0.00);
  assert(income >= 0.00);
  
  return result;
  
   

}

/*********************************************************************
 * This is the int main() function. 
 ********************************************************************/
int main()
//Main function required to put all the pieces together. Provides response
//and calls responseLord function to provide data.
//int main() is required to be last according to C++programming.
{

   cout.setf(ios::fixed);
   cout.setf(ios::showpoint);
   cout.precision(2);

   float Income = 0;
   float Tithes = 0;
   
   cout << "Income: \n";
   cin >> Income >> endl;
   cout << "Tithes: \n";
   cin >> Tithes >> endl;
       
   float result = FullTithePayer(Income, Tithe);


   if (result >= Tithe);
   return cout << "You are a full Tithe Payer\n";

   else
   return cout << "Will a man rob God? Yet ye have robbed me.\n";
   cout << "But ye say, Wherein have we robbed thee?\n";
   cout << "In Tithes and offerings  Malachi 3:8\n";
      
   return 0;

}

