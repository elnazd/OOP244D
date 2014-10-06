#include <iostream>
using namespace std;
	
class Cat
{
public:
	Cat (int age, int weight);
	~Cat() {}
	int GetAge() { return itsAge; }
	int GetWeight() { return itsWeight; }
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

void Cat::display()
{
	cout << itsAge << " "<<itsWeight;
}

	
int main()
{
	Cat Frisky(5,8); //Setting Frisky's parameters via explicit arguments
	Frisky.display();      //Displaying Frisky's parameters via implicit arguments

	return 0;
}
