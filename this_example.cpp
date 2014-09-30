/*
The region of memory that the current object occupies contains all of the data stored in its instance variables.  The complete set of instance variables has its own address.  The keyword this returns that address.  The dereferenced keyword *this refers to the set of instance variables; that is, to the current object. 
*/
#include <iostream>
using namespace std;
	
class Cat
{
public:
	Cat (int age, int weight);
	Cat();
	~Cat() {}
	int GetAge() { return itsAge; }
	int GetWeight() { return itsWeight; }
	Cat copy();
	void display();
private:
	int itsAge;
	int itsWeight;
};
	
Cat::Cat(int age, int weight)
{
	itsAge = age;
	itsWeight = weight;
}

Cat::Cat()
{
	itsAge = 0;
	itsWeight = 0;
}

//*this refers to the current object 
Cat Cat::copy()
{
	return *this;
}
void Cat::display()
{
	cout << itsAge << " "<<itsWeight;
}

	
int main()
{
	Cat Frisky(5,8),Boots; 
	Frisky.display();
	Boots = Frisky.copy();
	Boots.display();
	
	return 0;
}
