/***********************************************************************
* Program:
*    Assignment 40, Multi Dimensional Arrays
*    Brother Schwieder, CS124
* Author:
*    Will Brown
* Summary: 
*    Construct a TIC TAC TOE Board using multi-dimensional arrays.
*
*    Estimated:  2.0 hrs   
*    Actual:     3.0 hrs
*      It took a while but I got there in the end.
************************************************************************/

#include <iostream>
#include <iomanip>
#include <fstream>
#include <ostream>
using namespace std;

//char getFileName(char fileName[256]);
int readFile(char table[][3], int numCol, int numRow);
void displayTable(char table[][3], int numRow, int numCol);
int printTable(char table[][3], int numRow, int numCol);
 

/********************************************************************
 * MAIN
 *******************************************************************/
int main()
{
   char table[3][3];
   int numCol = 3;
   int numRow = 3;   
   if (readFile(table, numRow, numCol) == 0)
   {
      cout << "Failed to read table from file" << endl;
      return 1;
   }
   
   displayTable(table, numRow, numCol);
   printTable(table, numRow, numCol);
   
   return 0;
   
}
 
/***********************************************************
 * READ FILENAME
 **********************************************************/
int readFile(char table[][3], int numRow, int numCol)
{

   char fileName[256];
   
   
   //Get filename.
   cout << "Enter source filename: ";
   cin.getline(fileName, 256);
   
   //Open data from file.
   ifstream fin(fileName);
   
   if (fin.fail())
   {
      cout << "Unable to read " << fileName << endl;
      return 0; 
   }

   
   // read data in grid format.
   
   for (int row = 0; row < numRow; row++)
   {
      for (int col = 0; col < numCol; col++)
      {
         fin >> table[row][col];
      }
   }     
   if (fin.fail())
   {
      cout << "Something is wrong in the function.\n";
      return 0;
   } 
   fin.close();
      
   return 1;
}
/****************************************************
 * DISPLAY TABLE
 ****************************************************/
void displayTable(char table[][3], int numRow, int numCol)
{
   for (int row = 0; row < numRow; row++)
   {
      for (int col = 0; col < numCol; col++)
      {
         cout << ' ';
          
          // Print the character
         char characterToPrint = table[row][col];
         if (characterToPrint == '.')
         {
            characterToPrint = ' ';
         }
         cout << characterToPrint;
         cout << ' ';
          
         if (col != numCol - 1)
         {
            cout << '|';
         }
      }
      cout << endl;
      if (row != numRow - 1)
      {
         cout << "---+---+---" << endl;
      }
        
   }
}

/****************************************************
 * PRINT TABLE
 ****************************************************/
int printTable(char table[][3], int numRow, int numCol)
{
   char fileName[256];
   
   //Get filename.
   cout << "Enter destination filename: ";
   cin.getline(fileName, 256);
   
   //Open data from file.
   ofstream fout(fileName);
   if (fout.fail())
   {
      cout << "Unable to read " << fileName << endl;
      return 0; 
   }

   for (int row = 0; row < numRow; row++)
   {
      for (int col = 0; col < numCol; col++)
      {
          
          // Print the character
         char characterToPrint = table[row][col];
         fout << characterToPrint;
      }
      fout << endl;
        
   }
    
   if (fout.fail())
   {
      cout << "Unable to read " << fileName << endl;
      return 0; 
   }
   fout.close();
   cout << "File written" << endl;
}
