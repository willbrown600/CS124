/***********************************************************************
* Program:
*    Assignment 42, String Class
*    Brother Schwieder, CS124
* Author:
*    Will Brown
* Summary: 
*    This program will display the words to the song Dem Bones by
*    using the string class
*
*    Estimated:  1.0 hrs   
*    Actual:     1.5 hrs
*      This took a while to get my head around but it was good.
************************************************************************/

#include <iostream>
#include <string>
using namespace std;

/********************************************************************
 * GENERATE SONG
 * This function will generate one long string that constitutes the
 * complete song "Dem Bones."  Note that the list of bones is provided
 * by the parameter list
 ********************************************************************/
string generateSong(string list[], int num)
{
   string output;
   string lines;
   
   for (int i = 0; i < num; i++)
   {
      string lines = list[i] + " bone connected to the " + 
                 list[i + 1] + " bone\n";
      cout << lines;
      
      
   }
   
   lines = output;   
   
   return output;
}

/**********************************************************************
 * MAIN
 * In this program, MAIN is a driver program.  It will feed to generateSong()
 * the list of bones and get back the complete song as a string.  MAIN will
 * then display the song
 ***********************************************************************/
int main()
{
   string list[9] =
   {
      "toe",
         "foot",
         "leg",
         "knee",
         "hip",
         "back",
         "neck",
         "jaw",
         "head"
         };

   // generate the song
      string song = generateSong(list, 9);

   // display the results
      cout << song;
   
      return 0;
   }
