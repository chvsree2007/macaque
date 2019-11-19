#include<stdio.h>
void func(int *k);
void func(int *k){
	printf("inside func() %d\n",*k);
}

void func1(int &k){
	printf("in func1() %d\n",k);
}

int main()
{
	int i=10;
	func(&i);
	func1(i);
	return 0;
}
