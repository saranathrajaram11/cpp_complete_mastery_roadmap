#include<iostream>
#include<memory>
using namespace std;


int main()
{
	int* ptr =NULL;
	
	ptr =new int[3];
	
	ptr[0]=1;
	ptr[1]=2;
	ptr[2]=3;
	
	 for(int i=0;i<3;i++)
	 {
	 	cout<< ptr[i]<< " ";
	 }
	 delete[] ptr;
	
	return 0;
}
