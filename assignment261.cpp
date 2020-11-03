/***********************************************************************
* Program:
*    Assignment 26, Calendar Month
*    Brother Schwieder, CS124
* Author:
*    Will Brown
* Summary: 
*    
*    into the program.
*    
*
*    Estimated:  2.0 hrs   
*    Actual:     4.0 hrs
*      I'm still just getting used to programming and the right language and
*      place to put all the syntax. I got lost a little here and had to start
*      back to the beginning and go through trial and error to see where I
*      was going wrong.
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
   
   //char "grades.txt" = getFileName(char grades.txt);
   return  0;
   
}  
void getFileName(char filename[])
{
   cout << "Please enter the filename: ";
   cin >> filename;
   
   /*****************************
   ifstream fin("grades.txt");
      if (fin.fail())
         fout << "This failed";
   
   //read data
   int grades;
   fin >> grades;
   
   //close stream
   fin.close();
   fout << grades;
   ****************************/
}









float readFile(const char filename[])
{
   ifstream fin;
   fin.open(filename);
   
   if (fin.fail())
   {
      cout << "Error opening file.\n";
      return -1;
   }
   
   int grade;
   int num = 0;
   int sum = 0;
   
   while (fin >> grade)
   {
      num++;
      sum+= grade;
   }
   if (num != 10)
   {
      cout << "Error reading file\"" << filename << "\"\n";
      return -1;
   }
   return ((float) sum) / num;
/**********************************
//openfile
ifstream fin(grades.txt);
   if (fin.fail())
      fout << "this did not work";

// readfile
float grades = 0.0;
fin >> grades;
   if (fin.fail())
      fout "What is going on here?";
      
      *******************************/
}
   
void display(float average)
{
   cout.precision(0);
   cout.setf(ios::fixed);
   cout << "Average: " << average << "%\n";
   
}



