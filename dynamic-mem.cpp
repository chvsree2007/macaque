#include<iostream>
using namespace std;

int main()
{
	int* ptr=NULL;
	ptr = new int; /*This will allocate memory for 
			 int and also constructs the object*/
	*ptr=100;
	cout<<"Value at ptr is "<<*ptr<<endl;
	delete ptr; /*Free the allocated memory*/
	return 0;
}

