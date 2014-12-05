#include <iostream>
using namespace std;

class Beverage {
    int amount;
  public:
    Beverage();
    Beverage(int);
    Beverage(const Beverage&);
    ~Beverage();
    void operator+=(int);
    void display(ostream& os) const;
};

class Tea : public Beverage {
	char desc[14];
  public:
    Tea();
    Tea(int, const char*);
    Tea(const Tea&);
    ~Tea();
    void display(ostream& os) const;
};

Beverage::Beverage() {
	amount = 0;
	cout << "B";
}

Beverage::Beverage(int a) {
	amount = a;
	cout << "B" << amount;
}

Beverage::Beverage(const Beverage& b) {
	amount = b.amount;
	cout << "C";
}

Beverage::~Beverage() {
	cout << "~B" << amount << endl;
}

void Beverage::operator+=(int a) {
	amount += a;
}

void Beverage::display(ostream& os) const {
	os << amount;
}

Tea::Tea() {
	desc[0] = '\0';
	cout << "T" << endl;
}

Tea::Tea(int a, const char* d) : Beverage(a) {
	strncpy(desc, d, 13);
	desc[13] = '\0';
	cout << "T" << desc << endl;
}

Tea::Tea(const Tea& t) : Beverage(t) {
	strncpy(desc, t.desc, 13);
	desc[13] = '\0';
	cout << "U";
}

Tea::~Tea() {
	cout << "~T" << desc;
}

void Tea::display(ostream& os) const {
	Beverage::display(os);
	os << " " << desc << " Tea" << endl;
}

ostream& operator<<(ostream& os, Tea t) {
	t.display(os);
	return os;
}

int main() {
	Tea none, green(20, "Green");
	green += 30;
	cout << green << "-----------" << endl;

}


/*
BT
B20TGreen
CU50 Green Tea
~TGreen~B50
-----------
~TGreen~B50
~T~B0


*/
