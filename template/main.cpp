
//
//      Inheritance allows SUBTYPE POLYMORPHISM
//
//      Templates allow PARAMETRIC POLYMORPHISM
//
//      Function Overloading is AD-HOC POLYMORPHISM
//

#include <iostream>
#include "Point.h"

int main()
{
   Point<int> pi(3,4);
   Point<float> pf(2.7,8.9);
   std::cout << "pi is " << pi << "\n";
   std::cout << "pf is " << pf << "\n";
   //Point<int*> pptr;
   //std::cout << "pptr is " << pptr << "\n";
}


