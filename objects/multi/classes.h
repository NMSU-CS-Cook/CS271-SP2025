
#ifndef CLASSES_H
#define CLASSES_H

#include <iostream>
#include <string>

class Mammal {
 public:
   Mammal(std::string kind) :
         kind(kind) {}
   virtual std::string speak() {
      return "mammal-speak";
   }
 protected:
   std::string kind;
};

class Pet {
 public:
   Pet(std::string name) :
      name(name) {}
   virtual std::string speak() {
      return "pet-speak";
   }
 protected:
   std::string name;
};

class Bear : public Mammal {
 public:
   Bear() : Mammal("bear") {}
   virtual std::string speak();
 private:
};

class Dog : public Mammal, public Pet {
 public:
   Dog(std::string name) :
      Mammal("dog"), Pet(name) {}
   virtual std::string speak();
 private:
};

#endif












