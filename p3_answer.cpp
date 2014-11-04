#include <iostream>
using namespace std;
int main()
{
	int SomeVariable = 5;
	cout << "SomeVariable: " << SomeVariable << "\n";
	int *pVar = & SomeVariable;
	*pVar = 9; //We are not assigning a pointer but the variable pointed by the pointer.
	cout << "SomeVariable: " << *pVar << "\n";
	return 0;
}
