//Constructors

/*
Constructor is an user-defined function which gets called implictly after memory for an object is allocated.
It should be in a public section. It has no return value.

There are 4 types of constructor :
1) Default
2) Parameterized
3) Copy
4) Move(cpp 11)

*/

/*
If we don't specify any constructor, cpp will generate :
	i) The default constructor is auto-generated if there is no user-declared constructor.
	ii) The copy constructor is auto-generated if there is no user-declared move constructor or move assignment operator (because there are no 		move constructors or move assignment operators in C++03, this simplifies to "always" in C++03).
	iii) The copy assignment operator is auto-generated if there is no user-declared move constructor or move assignment operator.
	iv) The destructor is auto-generated if there is no user-declared destructor.
	v) The move constructor is auto-generated if there is no user-declared copy constructor, copy assignment operator or destructor, and if 	the generated move constructor is valid.
	vi) The move assignment operator is auto-generated if there is no user-declared copy constructor, copy assignment operator or destructor, 		and if the generated move assignment operator is valid (e.g. if it wouldn't need to assign constant members).

*/

#include <iostream>
using namespace std;

class demo
{
	public :
			int j;
			
			//Default constructor : Constructor with no parameters.
			demo()
			{
				cout << "Inside Default Constructor\n";
				j = 20;
				
			}
			
			//Parameterized constructor : Constructor with parameters.
			demo(int data)
			{
				cout << "Inside Parameterized Constructor\n";
				j = data;
			}
			
			//Copy constructor : Constructor with object as a parameter.
			//Here, Deep copy is performed. Separate obj is created.
			//In copy constructor, you have l-value reference i.e. address.
			demo(demo &obj)
			{
				cout << "Inside Copy Constructor\n";
				this -> j = obj.j;
			}
			
			// Move Constructor
			//In move constructor, you have r-value reference. Move constructor moves the resources in the heap. Move constructor just makes the pointer of the declared object to point to the data of temporary object and nulls out the pointer of the temporary objects. Thus, move constructor prevents unnecessarily copying data in the memory.  
    		demo(demo&& dobj)
    		{
 				//Here, dobj is temporary object.
        		cout << "Inside Move Constructor dobj.j : " << dobj.j << endl;
             	dobj.show();
    		}
			
			void show()
			{
				cout << "Inside Show function\n"; 
				cout << "j : " << j << endl << endl;
			}

};
int main()
{
	//Default Constructor called automatically, when the object is created.
	demo d1;
	d1.show();
	
	//Parameterized Constructor called.
	demo d2(50);
	d2.show();
	
	//Copy Constructor called.
	demo d3 = d2;
	d3.show();
	
	//Move Constructor called.
	demo d4 = move(d3);
	
	//Below statment will give you any garbage value for j variable(same for behaviours), as d4 is a pointer to temporary object, 			 characteristics of d4 is not set.
	cout << "d4.j : " << d4.j << endl;
	
	//Below statment will give you the value which is same as the value given by d3 object for j variable, as we are calling move constructor it.
	cout << "\nmove(d3).j : " << move(d3).j << endl;

	return 0;
	
}
