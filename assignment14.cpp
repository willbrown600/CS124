/***********************************************************************
* Program:
*    Assignment 14, Functions
*    Brother Schwieder, CS124
* Author:
*    Will Brown
* Summary: 
*    That will construct a program that will have three functions in it.
*    The three functions will be called: questionPeter(), responseLord(),
*    int main(). Each function will perform a different task and provide
*    its output appropriately.
*     Estimated:  1.5 hrs   
*     Actual:     1.7 hrs
*    I was able to follow the layout of the functions okay. My biggest
*    has been the styleChecker and just making sure I conform to what
*    it is looking for.
************************************************************************/

#include <iostream>  //To use cout

using namespace std;

/**********************************************************************
 * This is the void questionPeter() function.
 ***********************************************************************/
void questionPeter()
//void type used as we only want to display data, no return.
{
   cout << "Lord, how oft shall my brother sin against me,"
      " and I forgive him?\n";
   cout << "Till seven times?\n";

}

/**********************************************************************
 * This is the int responseLord() function.
 *********************************************************************/
int responseLord()
// int responseLord just needs to return a value which it can do
// through the return. No need to create variable.
{
   return 7 * 70;

}

/*********************************************************************
 * This is the int main() function. 
 ********************************************************************/
int main()
//Main function required to put all the pieces together. Provides response
//and calls responseLord function to provide data.
//int main() is required to be last according to C++programming.
{
   questionPeter();

   cout << "Jesus saith unto him, I say not unto thee, Until seven\n";
   cout << "times: but, Until " << responseLord() << ".\n";

   return 0;

}

