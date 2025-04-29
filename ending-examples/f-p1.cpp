#include <stdio.h>

class A
{
 public:
   A(int a, int b) {
      x = a + b;
      y = b - 3;
   }
   int m1(int* p) {
      if (x < y)
         y = *p;
      else
         x = x - *p;
      return y;
   }
   void print() {
      printf("A-object: (%d, %d)\n", x, y);
   }
 private:
   int x, y;
};

int main()
{
   int x, y;
   x = 9;
   y = 3;
   A *ap1, *ap2, *ap3;
   ap1 = new A(2,3);
   ap2 = new A(7,4);
   ap3 = ap1;
   x = ap1->m1(&y);
   y = ap2->m1(&x);
   ap3->print();
   ap2->print();
   ap3->m1(&y);
   ap1->print();
   printf("x=%d y=%d\n", x, y);
   return 0;
}


