/*
Program1: Run the following code and answer these questions:
1. What is the output? Why is there a problem?
2. How could pLong's value change, given that pLong wasn't touched?
3. Where did the 20 go when pInt was used in line 17?

*/

#include <iostream>
using namespace std;

int main()
{
	int * pInt = new int;
	*pInt = 10;
	cout << "*pInt: " << *pInt << endl;
	delete pInt;
	pInt = 0;
	long * pLong = new long;
	*pLong = 90000;
	cout << "*pLong: " << *pLong << endl;

	*pInt = 20; 

	cout << "*pInt: " << *pInt << endl;
	cout << "*pLong: " << *pLong << endl;
	delete pLong;
	return 0;
}
