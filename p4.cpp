/*
Program4: Run the following code and answer these questions:
1. What is wrong with the code?
*/

#include <iostream>
using namespace std;

int main()
{
	int * pPointer = new int;
    *pPointer = 72;
    pPointer = new int;
    *pPointer = 84;
    return 0;
}
