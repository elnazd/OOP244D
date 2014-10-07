#include <iostream>
 using namespace std;
 #define NTYPES 4

 class Ticket {
     double f;
   public:
     Ticket() {
         cout << "T" << endl;
         f = 0.0;
     }
  
     ~Ticket() {
       cout << "D" << endl;
     }
	 
	 void set(double price)  {f = price;}
     double fare() const { return f; }
	 void display() const {
		cout<< f << endl;
	 }
 };


 int main() {
    
     double fare[] = { 2.75, 2.25, 1.40};

    
    for (int i = 0; i < 3; i++) {
		Ticket t;
		t.set(fare[i]);
		t.display();
	}

	cout << "Done!"<< endl;
    
     return 0;
 }
