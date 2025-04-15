#include <iostream>
#include <vector>

class G
{
 public:
   G() {
      x = 11;
   }
   G(int v) {
      x = v+5;
   }
   virtual void printFObject() = 0;
   virtual int look() {
      return x*3;
   }
   virtual void adjust(int v) {
      x += v;
   }
   virtual std::string toString() {
      return std::to_string(x) + "?";
   }
 protected:
   int x;
};

class  F: public G
{
 public:
   F() {
      y = 21;
   }
   F(int v) : G(v) { 
      y = v;
   }
   virtual int look() {
      return y+x*2;
   }
   virtual void adjust(int v) {
      x -= v*3;
      y += v;
   }
   virtual void printFObject(){
      std::cout << "I am an F object\n";
   }
   virtual std::string toString() {
      return std::to_string(x) + "/"
             + std::to_string(y);
   }
 protected:
   int y;
};

// plain function not in any class
void useObject(G& gob)
{
   F fob;
   //gob.printFObject();
   fob.adjust(gob.look());
   std::cout << "F: " << fob.toString() << "\n";
   std::cout << "G: " << gob.toString() << "\n";
}

// all C/C++ programs begin with main()
int main(int argc, char* argv[])
{
   std::vector<F*> fleas;
   //G myG;
   //std::cout << "myG is: " + myG.toString() + "\n";
   for (int i=0; i < 3; i++) {
      fleas.push_back(new F(i*3));
   }
   std::cout << "A: " << fleas[1]->toString() << "\n";
   //----------------
   //fleas[2]->printFObject();
   useObject(*fleas[2]);
   //----------------
   int t=0;
   for (G* g : fleas) {
      t += g->look();
   }
   std::cout << "T: " << t << "\n";
   //----------------
   for (int i=1; i < fleas.size(); i+=2) {
      fleas[i]->adjust(1);
   }
   //----------------
   std::cout << "B: " << fleas[0]->toString() << " " 
             << fleas[1]->toString() << "\n";
   //----------------
   return 0;
}




// plain function not in any class
// - an answer to one exam question
void adjustByTwo(std::vector<F*>& fleas)
{
   for (F* flea : fleas) {
      if (flea->look() > 50)
         flea->adjust(-2);
      else
         flea->adjust(2);
   }
   return;
}


