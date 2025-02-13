//
// Printing a pattern I
//
//   Don't look at the code itself and try to understand it first
//   Look at the data and how the code is manipulating the data
//
//  int v: 5
//  int i: ?, 5, 4, 3, 2, 1, 0 
//  int j: ?, 0, 1, 2, 3, 4, 5, 0, ..., 
//
//  Output:
//           -----*
//           ----*
//           ---* 
//           --*
//           -*
//
#include <iostream>

void printPattern(int v)
{
   int i;
   int j;
   for (i=v; i > 0; i--) {
      for (j=0; j < i; j++) 
         std::cout << "-";
      std::cout << "*\n";
   }
   return;
}

int main(int argc, char** argv)
{
   printPattern(5);
   return 0;
}

