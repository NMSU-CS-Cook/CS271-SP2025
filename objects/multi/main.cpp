
#include <iostream>
#include "classes.h"

int main(int argc, char* argv[])
{
   Bear b;
   Dog* d = new Dog("Zoe");
   Pet* p = d;
   Mammal* m = d;
   std::cout << "bear: " 
             << b.speak() << '\n';
   std::cout << "dog: " 
             << d->speak() << '\n';
   std::cout << "pet: " 
             << p->speak() << '\n';
   std::cout << "mammal: " 
             << m->speak() << '\n';
   return 0;
}

