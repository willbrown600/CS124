/***********************************************************************
* Program:
*    Assignment 26, Files
*    Brother Schwieder, CS124
* Author:
*    Will Brown
* Summary: 
*    To have three functions, getFile(), readFile() and display 
*    where they pull grades from a file and compute average.    
*    This will be displayed appropriately through the display
*    function.
*
*    Estimated:  2.0 hrs   
*    Actual:     4.0 hrs
*      If it wasn't for the video by Brother Honeycutt I would not 
*      have know where to begin. I still have alot of understanding to 
*      do in order to get my head around files.
*      
************************************************************************/

#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

void getFileName(char filename[]);
float readFile(const char filename[]);
void display(float average);



/*********************************************************************
 * Main
 * 1. Get filename
 * 2. Call each function as per the structural chart.
 * 3. Compute and send output through to the display function.
 **********************************************************************/
int main()
{
   char filename[256];
   
   // Get filename from user.
   getFileName(filename);
   
   // Read the contents of the file and return the average.
   float average = readFile(filename);
   
   // Display the average.
   if (average > 0)
      display(average);
   // recieve function getFileName()
   
   
   return  0;
}

/***********************************************************************
 * GETFILENAME
 * Prompt user for filename input
 **********************************************************************/
void getFileName(char filename[])
{
   cout << "Please enter the filename: ";
   cin >> filename;
   
   
}

/***********************************************************************
 * READFILENAME
 * Open filename from prompt from getFileName.
 * Check for fails
 * Retrieve information from the file using loop.
 * Calculate the average of all test scores.
 **********************************************************************/
float readFile(const char filename[])
{
   ifstream fin;
   fin.open(filename);
   
   if (fin.fail())
   {
      cout << "Error reading file \"" << filename << "\"\n";
      return -1;
   }
   
   int grade;
   int num = 0;
   int sum = 0;
   
   while (fin >> grade)
   {
      num++;
      sum += grade;
   }
   if (num != 10)
   {
      cout << "Error reading file \"" << filename << "\"\n";
      return -1;
   }
   return ((float) sum) / num;

}

/***********************************************************************
 * DISPLAY
 * Display average to user.
 **********************************************************************/ 
void display(float average)
{
   cout.precision(0);
   cout.setf(ios::fixed);
   cout << "Average Grade: " << average << "%\n";
   
}
   



