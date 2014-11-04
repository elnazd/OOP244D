/*
Program4: Run the following code and answer these questions:
1. What is wrong with the code?
*/

/*
Line 1 creates pPointer and assigns it the address of an area on the free store. Line 2 stores the value 72 in
that area of memory. Line 3 reassigns pPointer to another area of memory. Line 4 places the value 84 in
that area. The original area--in which the value 72 is now held--is unavailable because the pointer to that area
of memory has been reassigned. There is no way to access that original area of memory, nor is there any way to
free it before the program ends.
*/

#include <iostream>
using namespace std;

int main()
{
	int * pPointer = new int;
    *pPointer = 72;
	delete pPointer;
    pPointer = new int;
    *pPointer = 84;
    return 0;
}
