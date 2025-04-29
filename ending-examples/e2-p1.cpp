
#include <stdio.h>

int a=11,b=9;

int f(int* a, int b=42)
{
   b += a[3];
   printf("f1: %d\n",b);
   a[2] = 2*b;
   return *a;
}

int f(double* a)
{
   printf("f2: %g\n",*a+.9);
   *a += 12;
   return 0;
}

int main(int argc, char* argv[])
{
   int a[5] = {33,32,31,30,29};
   int b;
   double v[3] = {11.5, 6.3, 9.9};
   printf("f=%d\n",f(a+1));
   f(v);
   for (b=0; b<5; b++)
     printf("a[%d]=%d\n",b,a[b++]);
   for (b=0; b<3; b++)
     printf("v[%d]=%g\n",b,v[b]);
   return 0;
}

