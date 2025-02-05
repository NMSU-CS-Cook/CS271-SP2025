//
// Initial C++ string class examples
//
#include <iostream>
#include <string>

int main(int argc, char** argv)
{
   std::string line;
   std::cout << "Enter some text:\n";
   std::cin >> line;
   std::cout << "text is (" << line << ")\n";
   return 0;
}

