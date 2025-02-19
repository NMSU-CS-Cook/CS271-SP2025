

#include <stdio.h>

int myFunction(char* a)
{
   int c = 0;
   for (i=1; a[i] != '\0'; i++) {
      if (a[i] > a[i-1]) 
         c++;
      i++;
   }
   return c;
}


int main(int argc, char** argv)
{
   char a[] = "The first exam is on February 20!";  // "..." creates a 
   char* p  = "The first exam is on February 20!";  // string CONSTANT
   //a[-1] = 'T';
   printf("myFunc(a) = %d\n", myFunction(a));
   
   a[4] = ' '; a[5] = 'l'; a[6] = 'a';
   printf("the a string is (%s)\n", a);
   printf("the 5th char in p is %c\n", p[4]);
   p = a; // a with no [] is a pointer CONSTANT
   p[4] = ' '; p[5] = 'b'; p[6] = 'e';
   printf("the p string is (%s)\n", p);
   printf("the a string is (%s)\n", a);
   return 0;
}





