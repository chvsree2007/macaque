#include<iostream>
using namespace std;
/*create namespaces -a,b*/
namespace space_a{
	void test()
	{
		cout << "From namespace a" <<endl;
	}
}
namespace space_b{
	void test()
	{
		cout << "From namespace b" <<endl;
	}
}
/*
int main()
{
	space_a::test();
	space_b::test();
	return 0;
}
*/
using namespace space_a;
int main()
{
	test();
	return 0;
}
