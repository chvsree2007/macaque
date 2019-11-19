/*call by pointer or pass by pointer*/
#include<iostream>
using namespace std;
void swap(int *a, int *b);
void swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
	return;
}
int main()
{
	int a=10,b=20;
	cout <<"Before swap a = "<<a<<" b = "<<b<<endl;
	swap(&a,&b);
	cout <<"After swap a = "<<a<<" b = "<<b<<endl;
	return 0;
}

