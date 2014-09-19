
#include <iostream>
 using namespace std;
#include "cat.h"
#include <new> // reuired for nothrow

 int main() {
 
	int n;
    Cat* cat = nullptr;
    
	cout << "Enter the number of cats : ";
    cin >> n;
    cat = new Cat[n];
	
	cat = new (nothrow) Cat[n]; // for nullptr on failure
     if (cat == nullptr)
         cerr << "Memory Allocation Failed" << endl;
	
	for (int i = 0; i < n; i++) {
	
		int tempAge,tempweight;
         cout << "Cat's age: ";
         cin  >> tempAge;
		 cat[i].SetAge(tempAge);
		 
         cout << "Cat's weight: ";
         cin  >> tempweight;
		 cat[i].SetWeight(tempweight);
     }

     for (int i = 0; i < n; i++)
         cout << cat[i].GetAge() << ' ' << cat[i].GetAge() << endl; 

     delete [] cat;
     cat = nullptr;
	

 }
 
