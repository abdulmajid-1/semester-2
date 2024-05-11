//Question No 1:
//
//Write a class Employee with following data members and methods.
//Private:
//1. ID //A string to hold the ID of employee.
//2. Name //A string to hold the name of employee.
//3. Department //A string to hold the department name of employee.
//4. Bank Account number //A string to hold the organizational bank account number of
//employee (A read-only data member)
//5. Grade //A string to hold the employee grade (1 to 8, 8 being the highest) of
//employee.
//
//Public:
//1. Default Constructor should initialize all member variables with null value.
//2. Overloaded Constructor should initialize all (initialize-able) data members of the
//employee class.
//3. inputData Input from user for all data members
//4. setter set data of all attributes.
//5. getter get data of all attributes.
//6. displayData method that display data using (member function)
//7. Destructor
//Now create 3 other objects and initialize them with user input data. Show your results on
//console.
//Also dynamically create 3 other objects and initialize them with user input data. Show
//your results on console.

#include<iostream>
using namespace std;
class Employee 
{
	private:
		string id;
		string name;
		string depart;
		const string b_acc_num = "10009689";
		string grade;
	public:
		Employee()
		{
			id = "";
			name = "";
			depart = "";
		//	b_acc_num = "";
			grade = "";
		}
		Employee(string ID,string NAME,string DEPART,string B_accnum ,string Grade)
		{
			id = ID;
			name = NAME;
			depart = DEPART;
		//	b_acc_num = B_accnum  ;
			grade = Grade;
		}
		void inputdata()
		{
			cout<<"Enter your ID : ";
			cin>>id;
			cin.ignore();
			cout<<"Enter your name : ";
			getline(cin,name);
			cout<<"Enter your department : ";
			cin>>depart;
		//	cout<<"Enter your bank account number : ";
		//	cin>>b_acc_num;
			cout<<"Enter your grade : ";
			cin>>grade;
		}
		void set_id(string id)
		{
			this -> id = id;
		}
			
		void set_name(string name)
		{
			this -> name = name;
		}
		void set_dep(string depart)
		{
			this -> depart = depart;
		}
//		void set_bank(string bnum)
//		{
//			b_acc_num = bum;
//		}
		void set_grade(string grade)
		{
			this -> grade = grade;
		}
		string get_id()
		{
			return id;
		}
		string get_name()
		{
			return name;
		}
		string get_deprat()
		{
			return depart;
		}
		string get_banknum()
		{
			return b_acc_num;
		}
		string get_grade()
		{
			return grade;
		}
		void display()
		{
			cout<<"The id is : "<<id<<endl;
			cout<<"The name is : "<<name<<endl;
			cout<<"The departmen is : "<<depart<<endl;
			cout<<"The bank account number is : "<<b_acc_num<<endl;
			cout<<"The grade is : "<<grade<<endl;
		}
		~Employee()
		{
			cout<<"I am destructor "<<endl;
		}
};
int main()
{
	Employee e1,e2,e3;
	cout<<"Enter the data of first Employee : "<<endl;
	e1.inputdata();
	cout<<"Enter the data of second Employee : "<<endl;
	e2.inputdata();
	cout<<"Enter the data of third Employee : "<<endl;
	e3.inputdata();
	cout<<"First Employee "<<endl;
	e1.display();
	cout<<"Second Employee "<<endl;
	e2.display();
	cout<<"Third Employee "<<endl;
	e3.display();
	cout<<"\n\n";
	Employee *p;
	p = new Employee[3];
	cout<<"Enter the data of first Employee : "<<endl;
	p[0].inputdata();
	cout<<"Enter the data of second Employee : "<<endl;
	p[1].inputdata();
	cout<<"Enter the data of third Employee : "<<endl;
	p[2].inputdata();
	cout<<"First Employee "<<endl;
	p[0].display();
	cout<<"Second Employee "<<endl;
	p[1].display();
	cout<<"Third Employee "<<endl;
	p[2].display();
	
	
}
