
#include <iostream>
#include <string>

class A
{
 public:
   A() { // default constructor
      id = 0;
      std::cout << "constructed A: " << id << "\n";
   }
   A(int v) { // 1-arg constructor 
      id = v;
      std::cout << "constructed A: " << id << "\n";
   }
   ~A() { //destructor
      std::cout << "destructed A: " << id << "\n";
   }
   std::string toString() {
      return std::string("I am A:")+std::to_string(id);
   }
 private:
   int id;
};


A a3;
int x;
A* apg;

int myFunc()
{
   A a2(2);
   std::cout << "in myFunc, a2=(" << a2.toString() << ")\n";
   std::cout << "in myFunc, apg=(" << apg->toString() << ")\n";
   delete apg;
   return 0;
}

int main(int argc, char* argv[])
{
   std::cout << "starting main\n";
   A a1(1); // a1 is a local variable (object)
   A* ap;
   std::cout << "in main: a1 is (" << a1.toString() << ")\n";
   apg = new A(10);
   myFunc();
   std::cout << "in main: a3 is (" << a3.toString() << ")\n";
   apg = new A(12);
   myFunc();
   ap = new A(4);
   std::cout << "in main: ap is (" << ap->toString() << ")\n";
   delete ap;
   std::cout << "ending main\n";
}






