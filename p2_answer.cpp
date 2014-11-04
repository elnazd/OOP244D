#include <iostream>
using namespace std;
int main()
{
	int *pInt = new int; // claim a piece of memory in Free Store with size of an integer
	*pInt = 9;
	cout << "The value at pInt: " << *pInt << endl;
	delete pInt;
	pInt=0;
	return 0;
}
