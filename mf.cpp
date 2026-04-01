#include<iostream>
using namespace std;

int main()
{
	int *num =NULL;
	int size;
	cin >> size;
	
	num=new int[size];
	
	for(int i=0;i<size;i++)
	{
	  cin >> num[i];
	}
	cout<< num <<endl;
	cout<<*num<<endl;
	delete[] num;
	return 0;
	
	
	
}
