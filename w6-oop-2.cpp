//Task 2:
//Make A simple Billing System, with help of Multilevel Inheritance.
#include<iostream>
using namespace std;
class Product
{
	public:
		string arr[10] = {"Milk","Eggs","Bread","Juice","Apple","bannana","orange","Kiwi","Mango"};
		int Price[10] = {100,200,300,400,200,150,200,250,300};

	
};
class List : public Product
{
	public:

		void product_names()
		{
			cout<<"choice\tProduct Names\tPrice"<<endl;
			cout<<"1)\tMilk\t\t100\n2)\tEggs\t\t200\n3)\tBread\t\t300\n4)\tJuice\t\t400\n";
			cout<<"5)\tApple\t\t200\n6)\tBannana\t\t150\n7)\tOrange\t\t200\n";
			cout<<"8)\tKiwi\t\t250\n9)\tMango\t\t300"<<endl;		
		}
};
class Bill : public List
{
	public:
		void bill_calculator()
		{
			int n;
			int w = 0;
			long sum = 0;
			string cancel;
			int d[7] = {0,0,0,0,0,0,0};
			product_names();
			do
			{
				cout<<"what you want to order (enter the item no.)";
				cin>>n;
			if(n == 1)
			{
				d[0]++;
					
			}
			else if(n == 2)
			{
				d[3]++;
			}
			else if(n == 3)
			{
				d[2]++;
		
			}
	 		else if(n == 4)
			{
				d[3]++;
			}
			else if(n == 5)
			{
				d[4]++;
		
			}
			else if(n == 6)
			{
				d[5]++;
			}
			else if(n == 7)
			{
				d[6]++;
		
			}
			else if(n == 8)
			{
				d[7]++;
			}
			else if(n == 9)
			{
				d[8]++;
			}
			else
			{
				cout<<"invalid number \n";
			}

			cout<<"do you want something else (yes or no) ";
			cin>>cancel;
			}
			while(cancel=="yes");
			cout<<"\nName\tquantity\tprice \t\ttotal\n\n";
			do
	    	{
				if(d[w] != 0)
				{
					cout<<"\t"<<d[w]<<"\t\t"<<Price[w]<<"\t\t"<<d[w]* Price[w]<<"\n\n";
					sum = d[w] * Price[w] + sum;
				}
				w++;
			}
			while(w != 8);
		cout<<"Total amount\t\t\t"<<sum<<endl<<endl;
	
		
		
		}
};
int main()
{
	Bill b1;
	b1.bill_calculator();
}
