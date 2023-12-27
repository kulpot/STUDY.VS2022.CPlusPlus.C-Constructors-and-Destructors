#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;

// --------------------------------------- C++ Constructors and Destructors ------------------------------------
//ref link:https://www.youtube.com/watch?v=eeooGDIyQpM&list=PLRwVmtr-pp05LyV3bYHwrFacNSNjbUqS6&index=4

class Person
{
public:
	Person()		// Constructor 
	{
		cout << "Person()" << endl;
	}
};

void main()
{
	cout << "Before the scoped block" << endl;
	{
		Person person;
	}
	cout << "After the scoped block" << endl;
	//Person person;
}































// -------------------------------- C++ Classes --------------------------------
// ref link:https://www.youtube.com/watch?v=a9R9mP3oJBY&list=PLRwVmtr-pp05LyV3bYHwrFacNSNjbUqS6

// C++ Classes - 

//class Person
//{
//public:
//	string firstName;
//	string lastName;
////private:
//};
//
//void main()
//{	
//	//Person person = new Person();		// C# or Java
//	Person person;		// "person" object is in stack instead on the heap
//	person.firstName = "Kulpot";
//	person.lastName = "King";
//	cout << person.firstName << " " << person.lastName;
//}