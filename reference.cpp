/* Reference variable is an alias to already existing variable
 * -> We cannot have NULL refrence. Refrence always connected to a storage
 * -> When a refrence is initialised to an object, it cannot refer to another object; 
 *    ptr can point to another object
 * -> A reference must be initialised when created, ptr can be initialised at any time
 */
#include<iostream>
using namespace std;
int main()
{
	int i=10;
	int &j=i;
	cout <<"Value of i: "<<i<<endl;
	cout <<"Value of i reference: "<<j<<endl;
	return 0;
}
