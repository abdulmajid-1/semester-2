//Task 1:
//Create a class Employee with the following attributes and member functions:
//• Employee registeration number
//• Employee name
//• Destination
//• Human resource Allowance
//• Basic salary
//• Profitable fund
//• Get function to take input of Registeration number, name and destination.
//Inherit(public) a class Salary from employee . Salary should contain the following
//member functions:
//• Get function to take input of human resource allowance, basic salary and
//profitable fund.

#include<iostream>
using namespace std;

class Employee
{
	protected:
	long e_regis;
	string name;
	string designation;
	int hra;
	int basic_salary;
	int p_fund;
	public:
		void get()
		{
			cout<<"Enter your registration number : ";
			cin>>e_regis;
			cout<<"Enter your name : ";
			cin>>name;
			cout<<"Enter your designation : ";
	    	cin>>designation;
	    		

	 	
		}
};
class Salary : protected Employee
{
	public:
	void get_salary()
	{
		get();
	
		cout<<"Enter your basic salary : ";
		cin>>basic_salary;
		cout<<"Enter your human resourse allowance : ";
		cin>>hra;
		cout<<"Enter your profitable fund : ";
		cin>>p_fund;
	}
	void display()
	{
		cout<<"Name is : "<<name<<endl;
		cout<<"Registration number is : "<<e_regis<<endl;
		cout<<"Degisnation is : "<<designation<<endl;
		cout<<"Basic salary is : "<<basic_salary<<endl;
		cout<<"Human resourse allowance is : "<<hra<<endl;
		cout<<"Profitable fund : "<<p_fund<<endl;
	}
	
};
int main()
{
	Salary s1;
	s1.get_salary();
	s1.display();
	
}

