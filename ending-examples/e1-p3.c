#include<stdio.h>

int v;

int f(int v, int* p)
{
   v = *p - 10;
   return v*2;
}

int* g(int* p1, int* p2)
{
   p1 = p2 + 1;
   *p2 = *p1 - v;
   return p1;
}

int main()
{
   int a[5];
   int x;
   int* p;

   for (v=0; v<5; v++)
      a[v] = v+9;
   a[0] = f(8,&v);
   printf("1: %d %d\n", v, a[0]);
   p = &x;
   x = 21;
   p = g(p,a+2);
   printf("2: %d %d %d\n", v, *p, x);
   for (v=0; v<5; v++)
      printf("a[%d] = %d\n",v,a[v]);
   return 0;
}

