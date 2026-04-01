#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int p=10;
	int* a=&p;
	*a+=2;
	cout<<*a<<endl;
	cout<<a<<endl;
	cout<<p<<endl;
	cout<<&p<<endl;	
	return 0;
  
}



//a function that takes an int* and
//doubles the value at that address. Print
//before and after
