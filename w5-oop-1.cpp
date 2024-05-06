// Problem Statement 1:
//
// Implement a copy constructor for a class that represents a customer. The Customer class has two
// member variables: "name", which is a dynamically allocated string, and "address", which is a
// statically allocated char array. Test your implementation by creating two instances of the Customer
// class and using the copy constructor to create a deep copy of one of them.

#include <iostream>
using namespace std;

class Customer
{
	string *n;
	char address[7];

public:
	string s = "Lahore";
	Customer()
	{
	}
	void setter()
	{
		n = new string;
		*n = "majid";
		for (int i = 0; s[i] != '\0'; i++)
		{
			address[i] = s[i];
		}
	}
	Customer(Customer &c)
	{
		n = new string;
		*n = *(c.n);
		for (int i = 0; c.address[i] != '\0'; i++)
		{
			this->address[i] = c.address[i];
		}
	}
	void display()
	{
		cout << "The name of the customer is : " << *n << endl;
		cout << "The address of the customer is : ";
		for (int i = 0; address[i] != '\0'; i++)
		{
			cout << address[i];
		}
		cout << endl;
	}
};
int main()
{
	Customer c1;
	c1.setter();
	Customer c2(c1);
	c1.display();
	c2.display();
}
