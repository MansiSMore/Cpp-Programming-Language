//Modes of Inheritance

//Inheritance - It is nothing but reusability.
//There are 3 ways, by using which we can inherit class.
//Public mode - In this situation, public remains public, private remains private, protected remains protected.
//Private mode - In this situation, public become private, private remains private, protected become private.
//Protected mode - In this situation, public become protected, private remains private, protected remains protected.

#include <iostream>
using namespace std;

class A
{
	public :
				int i = 10;
	private :
				int j = 20;
	protected :
				int k = 20;
};

class B : public A
{
	public :
			void display()
			{
				cout << "Public characteristic from class A remains public : i : " << i << endl;		//We can access public characteristic here.
				cout << "Protected characteristic from class A remains protected : k : " << k << endl;	//We can access protected characteristic herr.
				cout << "Private characteristic from class A remains private. We cannot access it."<< endl;
			}

};

class C : private A
{
	public :
			void display()
			{
				cout << "Public characteristic from class A becomes private : i : " << i << endl;		//We can access public characteristic here.
				cout << "Protected characteristic from class A becomes private : k : " << k << endl;	//We can access protected characteristic herr.
				cout << "Private characteristic from class A remains private. We cannot access it." << endl;
			}
};

class D : protected A
{
	public :
			void display()
			{
				cout << "Public characteristic from class A becomes protected : i : " << i << endl;		//We can access public characteristic here.
				cout << "Protected characteristic from class A remains protected : k : " << k << endl;	//We can access protected characteristic herr.
				cout << "Private characteristic from class A remains private. We cannot access it." << endl;
			}
};

int main()
{
	B b;
	cout << "Class B inherits class A in PUBLIC mode." << endl << endl;
	b.display();
	cout << "\n-----------------------------------------------------------\n\n";
	
	C c;
	cout << "Class C inherits class A in PRIVATE mode." << endl << endl;
	c.display();
	cout << "\n-----------------------------------------------------------\n\n";
	
	D d;
	cout << "Class D inherits class A in PROTECTED mode." << endl << endl;
	d.display();
	
	return 0;
}
