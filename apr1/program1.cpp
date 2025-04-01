
//
// DO: object lifetime (global/local/dynamic)
// DO: pointers and arrays
//
#include <iostream>
#include <string>

class B {
 public:
   B() { b = 0; std::cout << "B: default constructor\n"; }
   B(int z) { b = z; std::cout << "B: int constructor:" << b << "\n"; }
   ~B() { std::cout << "B: destructor:" << b << "\n"; b = -1; }
   virtual int m1(int v) { b++; return b+v; }
   virtual std::string toString() {
      return std::string("b:") + std::to_string(b);
   }
 private:
   int b;
};

class A : public B {
 public:
    A(int v) : B(v+9) {std::cout << "A: int constructor: " << v << "\n"; }
    ~A() {std::cout << "A: destructor:\n"; }
 private:
};

A b2(3);
B* bp1;

int main()
{
   std::cout << "beginning of main\n";
   B b1(4);
   B* bp;
   std::cout << "b1 is " << b1.toString() << "\n";
   std::cout << "b2 is " << b2.toString() << "\n";
   bp = new B(7);
   std::cout << "m1 returns " << bp->m1(3) << "\n";
   std::cout << "b2 is " << b2.toString() << "\n";
   std::cout << "bp is " << bp->toString() << "\n";
   delete bp; // ok, bp is pointing to a "new"ed object
   B bees[3] = {2,3,4};
   bp = bees;
   for (int i=0; i < 3; i++) {
      std::cout << "bees[" << i << "]=" << bp[i].toString() << "\n";
   }
   
   std::cout << "end of main\n";
   return 0;
}





