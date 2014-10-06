
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
	const Cat &copy();
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

void Cat::display()
{
	cout << itsAge << " "<<itsWeight;
}

/*
Reference to the Current Object

We can improve our definition of display() by returning an unmodifiable reference to the current object rather than a copy of the object. 
This makes a difference if the object is large, since copying all of its instance variables would be computationally intensive.  
Returning a reference only involves copying the object's address, which is typically a 4 byte operation

*/
const Cat& Cat::copy()
{
	return *this;
}



int main()
{
	Cat Frisky(5,8),Boots; 
	Frisky.display();
	Boots = Frisky.copy();
	Boots.display();
	
	return 0;
}
