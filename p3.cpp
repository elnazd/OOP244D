/*
Program3: Run the following code and answer these questions:
1. What is wrong with the code?
*/

#include <iostream>
using namespace std;

int main()
{
	int SomeVariable = 5;
	cout << "SomeVariable: " << SomeVariable << "\n";
	int *pVar = & SomeVariable;
	pVar = 9;
	cout << "SomeVariable: " << *pVar << "\n";
	return 0;
}
