
#include <iostream>
#include <string>

class A
{
 public:
   A() // default constructor
   { 
      id = 0;
      std::cout << "constructed A: " << id << "\n";
   }
   A(int v) // 1-arg constructor
   {
      id = v;
      std::cout << "constructed A: " << id << "\n";
   }
   ~A() //destructor
   {
      std::cout << "destructed A: " << id << "\n";
   }
   std::string toString()
   {
      return std::string("I am A:")+std::to_string(id);
   }
 private:
   int id;
};

int main(int argc, char* argv[])
{
   std::cout << "starting main\n";
   A a1(1);
   std::cout << "in main: a1 is (" << a1.toString() << ")\n";
}

