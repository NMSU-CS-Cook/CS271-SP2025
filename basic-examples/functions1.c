//
// Initial example of C functions
//
#include <stdio.h>

int x; // global variable

//
// Showing local variables 
//
void printFun()
{
   int i;
   int j=1;
   // for (i=0; j == 1; i++) {  // infinite loop example
   // for (i=0; j = 1; i++) {  // accidental assignment example
   for (i=0; j == 1; i++) {  // sentinel controlled example
      if (i >= 30)
         j = 0;
      printf("*");
   }
   printf("\n");
   return;
}


int addTwo(int val1, int val2)
{
   x = 999; // global var can be used anywhere
   return val1 + val2;
}


int main(int argc, char** argv)
{
   printFun();
   int val1;
   char str1[] = "Hello world!\nSecond line\n";
   printf("%s",str1);
   printf("ASCII value of '\\n' is %d\n", str1[12]);
   val1 = addTwo(123,456);
   printf("val1 = %d\nglobal x = %x\n", val1, x);
   return 0;
}

