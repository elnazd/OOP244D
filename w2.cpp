#include <iostream>
 using namespace std;

 class Fruit {
     int items;
     double price;
   public:
     Fruit();
     Fruit(int, double);
     Fruit(const Fruit&);
     void to(Fruit&);
     void operator+=(double);
     virtual ~Fruit();
 };

 Fruit::Fruit() {
     items = 0;
     price = 0.0;
     cout << '#';
 }
 Fruit::Fruit(int i, double p) {
     items = i;
     price = p;
     cout << '!';
 }
 Fruit::Fruit(const Fruit& f) {
     items = f.items;
     price = f.price;
     cout << '$';
 }
 void Fruit::to(Fruit& dest) {
     if (items > 0) {
         dest.items++;
         items--;
     }
 }
 void Fruit::operator+=(double change) {
     price += change;
 }
 Fruit::~Fruit() {
     cout << '~' <<endl;
 }

 class OldFruit : public Fruit {
   public:
     OldFruit ();
     OldFruit (int, double);
     OldFruit (const OldFruit&);
     ~OldFruit();
 };

 OldFruit::OldFruit () {
     cout << '&';
 }
 OldFruit::OldFruit (int i, double p) : Fruit(i, p) {
     cout << ':';
 }
 OldFruit::OldFruit(const OldFruit& f) : Fruit(f) {
     cout << '*' << endl;
 }
 OldFruit::~OldFruit() {
     cout << '%' << endl;
 }

 OldFruit reduce(Fruit& fruit, int n, double p) {
     OldFruit old;
     for (int i = 0; i < n; i++)
         fruit.to(old);
     old += p;
	 return old;
 }
 int main() {
     Fruit apples(5, 2.00), pears;
     cout  << "---------------"<<endl;
     OldFruit oldApps = reduce(apples, 2, 1.00);
     return 0;
 }

 /*
!#---------------
#&$*
%
~
%
~
~
~

 
 */
