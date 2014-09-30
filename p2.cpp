/*
Program2: Run the following code and answer these questions:
1. What is wrong with the code?
*/

#include <iostream>
using namespace std;

int main()
{ 
	int *pInt;
	*pInt = 9;
	cout << "The value at pInt: " << *pInt;
	return 0;
}
