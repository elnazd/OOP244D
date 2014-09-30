/*
Program5: Run the following code and answer these questions:
1. What is wrong with the code?
*/

#include <iostream>
using namespace std;

class Foo
{
private:
    int m_nValue;

public:
    int GetValue() { return m_nValue; }
};

int main()
{
    Foo cFoo;
    if (cFoo.GetValue() > 0)
        cout<<"Do something";
    else
        cout<<"Do something else!";
}
