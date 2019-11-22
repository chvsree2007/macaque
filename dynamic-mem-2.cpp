/*Dynamic memory allocation for an array*/
#include<iostream>
using namespace std;
int main()
{
	const char *ptr =NULL;
	ptr = new char[10];
	ptr = "how are you";
	cout <<ptr<<endl;
	delete [] ptr;
	return 0;
}
