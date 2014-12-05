#include <iostream>
using namespace std;
#define MAX_ARRAY 4
class Base {
   public:
      Base() {cout << "Base Ctor" << endl;}
      ~Base() {cout << "Base Dtor" << endl;}
      void alpha() {cout << "Base alpha" << endl;}
      void gamma() {cout << "Base gamma" << endl;}
};

class Comp {
   public:
      Comp() {cout << "Comp Ctor" << endl;}
      ~Comp() {cout << "Comp Dtor" << endl;}
};

class Extend : public Base {
   Comp base;
   public:
      Extend() {cout << "Extend Ctor" << endl;}
      ~Extend() {cout << "Extend Dtor" << endl;}
      void alpha() {cout << "Extend alpha" << endl;}
};
void main() {
   Base b;
   Extend c;
   b.alpha();
   b.gamma();
   c.alpha();
   c.gamma();
}

/*Base Ctor
Base Ctor
Comp Ctor
Extend Ctor
Base alpha
Base gamma
Extend alpha
Base gamma
Extend Dtor
Comp Dtor
Base Dtor
Base Dtor*/
