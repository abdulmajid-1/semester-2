//Question No 2:
//Imagine you're developing a software system to manage university courses. Each course has a
//list of enrolled students, and you need to implement a mechanism to copy the course object while
//ensuring that each copy has its own independent list of students.
//Implementation:
//You can create a Course class with the following attributes:
// - courseName: Name of the course.
// - students: A dynamic list/array to store enrolled students.
// - numStudents: Number of students currently enrolled.
#include<iostream>
using namespace std;
class Course
{
	string course_name;
	string *p;
	int num_students;
	public:
	Course()
	{
		cout<<"Enter the course name : ";
		cin>>course_name;
		cout<<"How many students are ther in the course : ";
		cin>>num_students;
		p = new string[num_students];
		int i = 0;
		cout<<"enter students ";
		while(num_students > i)
		{
			cin>>p[i];
			i++;
		}	
	}
	
	Course(Course &C)
	{
		cout<<"How many students are ther in the course : ";
		cin>>num_students;
		p = new string [num_students];
		course_name = C.course_name;
		int j = 0;
		while(num_students > j)
		{
			p[j] = C.p[j];
			j++;
		}
		
	
	}
	void display()
	{
		cout<<"Course name is : "<<course_name<<endl;
		cout<<"Number of students in the course is : "<<num_students<<endl;
		
		
	}

};

int main()
{
	Course c1;
	c1.display();
	cout<<endl<<endl;
	Course c2(c1);
	c2.display();

}
