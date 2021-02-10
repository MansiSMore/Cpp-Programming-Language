//Access specifiers
#include <iostream>
using namespace std;

//Base Class
class parent
{
	//We can access any class member inside class without considering access specifier. Access specifiers is for outsiders, not for the class members.
	//Public access specifier - It can be accessed from anywhere in the program.
	public :
			//public characteristics.
			int i = 10;
			
			//public method.
			void fun()
			{
				cout << "\nHello from fun function\n";
				cout << "i : " << i << endl;
				cout << "j : " << j << endl;
				cout << "k : " << k << endl;
				
				//We are calling private method from public section.
				gun();
				
			}
			
	//Private access specifier - It can be accessed only from within the class. Rather than class, it is not accesible to anyone, not even main function.
	private :
			//private characteristics.
			int j = 20;
			
			//private method.
			void gun()
			{
				cout << "\nHello from gun function\n";
				cout << "i : " << i << endl;
				cout << "j : " << j << endl;
				cout << "k : " << k << endl;
				
				//We are calling protected method from private section.
				sun();
			}
			
	//Protected access specifier - It can be accessed from that class and their derived class only.
	protected :
			//private characteristics.
			int k = 30;
			
			//private method.
			void sun()
			{
				cout << "\nHello from sun function\n";
				cout << "i : " << i << endl;
				cout << "j : " << j << endl;
				cout << "k : " << k << endl;
			}
};

//Derived class
class child : public parent
{
	public :
			//public characteristics.
			int x = 40;
			
			//public method.
			void num()
			{
				cout << "\nHello from num function\n";
				//We can access public members of parent class. Here, i is public.
				cout << "i variable from parent class : " << i << endl;
				
				//We cannot access private members of parent class. Below statement will generate error.
				//cout << "j variable from parent class : " << j << endl;
				
				//As we are inside derived class of parent class, We can access protected members of parent class. Here, k is protected.
				cout << "k variable from parent class : " << k << endl;
			}
};

//Naked Function.
void rum()
{
	parent p;
	cout << "\nHello from rum function"<<endl;
	
	//We can access public members inside any naked function.
	cout << "Accessing i variable of parent class inside naked function : " << p.i << endl;
	
	//We cannot access private members inside any naked function. Because of this, below statement will generate error.
	//cout << "Accessing j variable of parent class inside naked function : " << p.j << endl;
	
	//We cannot access protected members inside any naked function. Because of this, below statement will generate error.
	//cout << "Accessing k variable of parent class inside naked function : " << p.k << endl;

	
}

int main()
{
	//Creating an object of a parent class.	
	parent pobj;
	
	//We can access public members inside main() function.
	cout << "Accessing i variable of parent class inside main function : " << pobj.i << endl;
	pobj.fun();
	
	//We cannot access private members inside main() function. Because of this, below statements will generate error.
	//cout << "Accessing j variable of parent class inside main function : " << pobj.j << endl;
	//pobj.gun();
	
	//We cannot access protected members inside main() function. Because of this, below statements will generate error.
	//cout << "Accessing k variable of parent class inside main function : " << pobj.k << endl;
	//pobj.sun();
	
	//Creating an object of a child class.	
	child cobj;
	cobj.num();
	
	//Calling naked function.
	rum();
	
	return 0;
}
