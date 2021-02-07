//References in CPP

//Reference is just a another name for existing variable. For reference, memory is not allocated. Only the thing is reference type and referred type should be same.

#include<iostream>
using namespace std;
 
int x = 100;
int& fun()
{
    return x;
}

int main()
{
	int m = 10;
	
	//Creating reference for m variable.
	int &ref1 = m;
	cout << "Value of m : " << m << "\nValue of reference of variable m i.e. ref1 : " << ref1 << endl;
	
	//Whenever we create reference variable, we have to initialze that variable, otherwise it will generate error.
	//int &ref2;					//This will generate error.
	
	//We are not allowed to bind non-const lvalue reference to an rvalue. As 20 a numeric constant, i.e. without a specific memory address, i.e. an rvalue, the expression clashes with the very spirit of the reference. Because of this, below syntax is not allowed.
	//int &myref = 20;
	
	//GCC complains about the reference not being const i.e. non-constant lvalue, namely a constant. According to the language specifications, you are allowed to bind a const lvalue to an rvalue. Because of this, below syntax is allowed.
	const int &ref6 = 20;
	cout << "Value of constant reference with numeric value : " << ref6 << endl;
	
	//Creating multiple references to one variable.
	int &ref2 = m;
	int &ref3 = m;
	cout << "Value of ref2 : " << ref2 << "\nValue of ref3 : " << ref3 << endl;
	
	//Creating reference to reference.
	int &ref4 = ref2;
	cout << "Value of ref4 : " << ref4 << endl;
	
	//Creating pointer to reference.
	//Here, we are creating pointer to reference ref4.
	int *ptr = &ref4;
	cout << "Value of *ptr : " << *ptr << endl;
	
	//Creating reference to pointer.
	//Here, we are creating reference variable for pointer ptr.
	//reference variable ref5 will display the address of pointer ptr.
	int *(&ref5) = ptr;
	cout << "Value of ref5 : " << ref5 << "\nValue of *ref5 : " << *ref5 << endl;
	
	//Creating reference to an array.
	int arr[5] = {10, 20, 30, 40, 50};
	int (&arr_ref)[5] = arr;
	cout << "Value of arr : " << arr[0] << "\nValue of arr_ref[0] : " << arr_ref[0] << endl;
	
	//We are creating a function which returns reference variable.
	//Here, fun function returns reference of global variable x. fun() is a reference of global variable of x. We are modifying global variable using fun().
	cout << "Value of x before modification : " << x << endl;
	fun() = 400;
    cout << "Value of fun() reference : " << fun() << endl;
	cout << "Value of x after modification : " << x << endl;
	
    return 0;
}
