#include <stdio.h>

class A
{
 public:
   A(int a, int b) {
      x = a;
      y = b;
   }
   virtual int s(int m) {
      printf("A::s %d\n",m);
      return x+y+m;
   }
 protected:
   int x, y;
};

class B : public A
{
 public:
   B(int a, int b) : A(a-2,b) {
      z = a+3;
   }
   virtual int s(int m) {
      printf("B::s %d\n",m);
      return y+z+m;
   }
 protected:
   int z;
};

class C: public B
{
 public:
   C(int a, int b): B(a,b+5) {
      q = a-1;
   }
   virtual int s(int m) {
      printf("C::s %d\n",m);
      return x+z+q+m;
   }
 protected:
   int q;
};

int main()
{
   A* as[3];
   B* bs[3];
   C* cs[3];
   int i;
   for (i=0; i<3; i++) {
      as[i] = new A(i,i+2);
      bs[i] = new B(i-2,i);
      cs[i] = new C(i,5);
   }
   bs[1] = cs[0];
   as[2] = bs[1];
   as[0] = cs[2];
   for (i=0; i<3; i++) {
      printf("as[%d]->s(3) = %d\n", i, as[i]->s(3));
   }
   return 0;
}

