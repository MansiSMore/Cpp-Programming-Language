//Class Datatype demo

//Class is a blueprint for an object. It contains characteristics and behaviour together.

#include <iostream>
using namespace std;

class mydemo
{
	//Access Specifier
	public:
			//Characteristics
			int no1, no2;
			
			//Behaviours
			void add()
			{
				int sum = no1 + no2;
				cout << "Addition of two numbers : " << sum << endl;
			}
};

int main()
{
	//Object creation
	mydemo mobj;							//Here, memory for characteristics is allocated seperately for every object.
	
	//Storing values into data members.
	mobj.no1 = 10;
	mobj.no2 = 20;
	
	//Accessing data members.
	cout << "Members of mydemo class are : no1 = "<< mobj.no1 << " no2 = " << mobj.no2 << endl;
	
	//Accessing member function.
	mobj.add();
	
	return 0;
}
