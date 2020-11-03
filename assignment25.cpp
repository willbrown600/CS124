/***********************************************************************
* Program:
*    Assignment 25, Calendar Month
*    Brother Schwieder, CS124
* Author:
*    Will Brown
* Summary: 
*    Create a calendar display for our project.
*    
*
*    Estimated:  2.0 hrs   
*    Actual:     4.0 hrs
*      I found this very difficult and could not seem to get my head
*      around what I was suppose to do.
************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

// 1. create numdays function
// 2. create offset function

int offset();
int numdays();
int display(int NumDays, int Offset);

/********************************************************
 *OFFSET
 ******************************************************/
int offset()
{
int number;
   
   cout << "Offset: ";
    cin >> number;
    
   return number;
}







/*******************************************************
 *Number of Days
 ******************************************************/
int numdays()
{

int nid;

   cout << "Number of days: ";
    cin >> nid;
    if (nid >= 28 && nid <= 31 )
       return nid;
    else
       cout << "That is not a valid number of days! \n";
       cout << "Please enter a valid number of days: ";
       cin >> nid;
    
    return nid;
}


/***********************************************************
 * DISPLAY
 **********************************************************/
int display(int NumDays, int Offset)
{
//Header
cout << "  " << "Su" << "  " << setw(2) 
             << "Mo" << "  " << setw(2)
             << "Tu" << "  " << setw(2)
             << "We" << "  " << setw(2)
             << "Th" << "  " << setw(2)
             << "Fr" << "  " << setw(2)
             << "Sa" << endl;
              
   if (Offset == 6)
   {
      Offset = -1;
   }
      
   int dow = 0;
   for (int days =- Offset; days <= NumDays; days++)
   {
      if(days > 0)
      {
         cout << days << endl;
      }   
      else
      {
         cout << "    ";
      }
      
      dow++;
      if (dow % 7 == 6)
      {
         cout << endl;
      }
   if (dow % 7 != 0)
   {
      cout << endl;
   }
}

//dow = (Offset + 1) % 7;  //day of week
//int count = 0; 
   
   
   /**********************************************
   int count = 0;
   
      for(int day = 1; day <= numDays; day++)
      {
         if(count == 0)
         {
            cout << setw(( dow + 1) * 4 ) << day;
            count++;
         }
         else
         {
            cout << setw(4) << day;
            if(( day + dow ) % 7 == 0)
               cout << endl;
         }
      }
      cout << endl;

}
/***********************************************************
   
   for(int i = 0; i < dow; i++)   // For the columns of weekdays
       cout << "    ";
       
       if(dow == 7)
       cout << endl;
     
   for (int day = 1; day <= numDays; day++)  // FOR DAYS
   { 
      if(dow % 7 == 0)
      {
         cout << setw(4)<< day << endl;
      }
            
      else
      {
         cout << setw(4) << day;
      }
         dow++;
      }
   if ((dow % 7) != 0)
      cout << endl;
                        
   cout << endl;

}

  ******************************************************/
   
 


/*******************************************************
 *MAIN
 ******************************************************/
int main()
{
    
    int NumDays = numdays();
    int Offset = offset();
    int Display = display (NumDays,Offset); 
     

   return 0;
   
}
