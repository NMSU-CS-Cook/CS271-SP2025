//
// Initial C++ string class examples
//

/**
    What is an object?
    
     A thing that has characteristics and abilities
                      attributes and operations
                      attributes and methods
                      data and methods
                      
     An object is a living thing  (a lifetime in your program)
     
     A variable is an object!    int x;
     
       -- attributes? data? x has one integer value as its attribute
       -- operations? assign a new value and read the existing value
                      can do mathematical operations, +, -, *, /, % 
                      can do other things like & 

**/

#include <iostream>
#include <string>

int main(int argc, char** argv)
{
   std::string line;
   std::string* p;
   std::cout << "Enter some text:\n";
   p = new std::string("Help!");
   std::cout << "*p is (" << *p << ")\n";
   std::cin >> line;
   std::cout << "text is (" << line << ")\n";
   std::cin >> line;
   std::cout << "text is (" << line << ")\n";
   std::cout << "*p is (" << *p << ")\n";
   line = new std::string("Help!");
   std::cout << "text is (" << line << ")\n";
   return 0;
}



