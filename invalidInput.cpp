/*
For example, we can localize all of the validation for a class within one constructor and use *this to invoke validation within the other constructors:
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
	const Cat &copy();
	void display();
private:
	int itsAge;
	int itsWeight;
};

//Check for invalide age or weight
Cat::Cat(int age, int weight)
{
	if(age>10) //Invalid age
	{
		//Calling the safe empty state
		*this = Cat();
	
	}
	
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


const Cat& Cat::copy()
{
	return *this;
}



int main()
{
	Cat Frisky(11,8),Boots; 
	Frisky.display();
	Boots = Frisky.copy();
	Boots.display();
	
	return 0;
}
