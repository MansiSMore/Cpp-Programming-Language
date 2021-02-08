//Destructor

//Destructor is an user-defined function which takes no arguments and gets called implictly before deallocating memory for an object.
//Destructor function is automatically invoked when the objects are destroyed. It has no return type not even void. A destructor should be declared in the public section of the class. The programmer cannot access the address of destructor.

#include <iostream>
using namespace std;

class demo
{
	public :
			int m = 20;
			
			//Default Constructor.
			demo()
			{
				cout << "Memory Allocation	->	Inside Default Constructor	->	";
			}
			
			//Destructor.
			~demo()
			{
				cout << "Inside Destructor	->	Memory Deallocation\n";
			}
};

int main()
{
	demo dobj;
	return 0;
}
