// Write a class Cricket that contains attributes for the player’s name , average and team. Write
//three functions to input, change and display these attributes. Also write a constructor to
//initialize the values.

#include<iostream>
using namespace std;

class Cricket 
{
	string name;
	float average;
	string team;
	public:
		
		Cricket(string Name,float Avg,string Team)
		{
			name = Name;
			average = Avg;
			team = Team;
		}
		void input_name()
		{
			cout<<"Enter name : ";
			cin>>name;
		}
		void input_average()
		{
			cout<<"Enter average of the player : ";
			cin>>average;
		}
		void input_team()
		{
			cout<<"Enter team name of the player : ";
			cin>>team;
		}
		void set_name(string name)
		{
			this -> name = name;
	
		}
		void set_average(float avg)
		{
			average = avg;
		}
		void set_team(string team)
		{
			this -> team = team ;
		}
		void display()
		{
			cout<<"The name of the player is : "<<name<<endl;
			cout<<"The average of the player is : "<<average<<endl;
			cout<<"The team name of the player is  "<<team<<endl<<endl;
		}
		
};
int main()
{
	Cricket c1("majid",244,"Pakistan");
	c1.display();
	c1.input_name();
	c1.input_average();
	c1.input_team();
	cout<<endl;
	c1.display();
	c1.set_name("Ali");
	c1.set_average(55);
	c1.set_team("India");
	c1.display();
	return 0;
		
}
