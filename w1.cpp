#include <iostream>
using namespace std;

void One(int &num){
	int val=3;
	num=20;
	num=val;
	num*=2;
}

void Two(int num){
	int val=3;
	num=20;
	num=val;
	num*=2;
}

void Three(int *num){
	int val=3;
	*num=20;
	num=&val;
	*num*=2;
}

int main(){
	int a,b,c;
	a=b=c=10;

	One(a);
	Two(b);
	Three(&c);

	cout << "a = " << a <<endl<< "b = " << b <<endl<< "c = " << c << endl;
}


/*a = 6
b = 10
c = 20*/
