
#include "classes.h"

std::string Bear::speak() {
   return kind + " says grrrowl";
}

std::string Dog::speak() {
   return name + " is " + kind + 
          " says woof";
}

