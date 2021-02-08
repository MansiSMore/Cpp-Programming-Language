//Composition

//Composition - In composition, we can create an object of a one class as a characteristics of another class.
//Composition is generally used when you want the features of an existing class inside your new class.
#include <iostream>
using namespace std;

class A
{
	public :
			char ch = 'm';
			int x = 20;

			
			void fun()
			{
				cout << "Hello from Class A\n";
			}
};

class B
{
	public :
			int y = 40;
			
			//Creating an object of class A inside class B.
			A aobj;
			
			void run()
			{
				cout << "Hello from Class B\n";
			}
};

int main()
{
	B bobj;
	
	//Size of object of class B is addition size of characteristics of class B and size of characteristics of class A.
	cout << "Size of object of class B : " << sizeof(bobj) << endl;

	cout << "Size of object of class A : " << sizeof(bobj.aobj) << endl;
	
	//To access members of class A, use following syntax.
	bobj.aobj.fun();
	cout << "Accessing characteristic of class A using class B object : " << bobj.aobj.x << endl;
	
	//Below syntax will generate error, beacause aobj is not declared in main scope. To access class A, create here another object.
	//aobj.x;
	
	A a1;
	a1.fun();
	cout << "Accessing characteristic of class A using class A object : " << a1.x << endl;
	
	//Accessing data members of class B
	bobj.run();
	cout << "Class B characteristic : " << bobj.y << endl;
	return 0;
}

