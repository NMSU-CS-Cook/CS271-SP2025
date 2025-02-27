//
// Employee class declaration
// - usually don't implement methods in a header file,
//   we just declare their interfaces (prototype)
//

class Employee // Employee is a new type name
{                       
 public:
   Employee(int p_id, std::string p_name, int wage) {  // Constructor
      id = p_id; name = p_name; hourlyWage = wage;
   }
   void printMe(void);
   void increaseWage(int amountInPennies);
 private:
   int id;
   std::string name;
   int hourlyWage;
};

