//Encapsulation and Abstraction

//Encapsulation : Binding characteristics and behaviour together. We can achieve the encapsulation by defining a class datatype.
//Abstraction : Hiding something from outside world, it may be characteristics or behaviour. To achieve abstraction use private or protected access specifier.

#include <iostream>
using namespace std;

//Class
class student
{
	//Public access specifier
	public :
			//Characteristics
			string first_name;
			string last_name;
			int standard;
			
			//Behaviours
			void accept_details(int id, string first_name, string last_name, int std)
			{
				//Copying the data into class characteristics.
				this -> student_id = id;
				this -> first_name = first_name;
				this -> last_name = last_name;
				this -> standard = std;
			}
			
			void show_details()
			{	
				cout << "------ Student Information ------\n\n";
				cout << "Student's id : " << student_id << endl;
				cout << "Student's First Name : " << first_name << endl;
				cout << "Student's Last Name : " << last_name << endl;
				cout << "Student's standard : " << standard << endl << endl;
			}
			
	//Private access specifier
	private :
	        //hidden data from outside world
			int student_id;						//id is not accessible to outside world. It is abstracted.
			
};

int main()
{
	student sobj;
	
	//Calling behaviours.
	sobj.accept_details(4, "Mansi", "More", 8);
	sobj.show_details();
	return 0;
}
