/*
Problem Statement 2: 
Define a class “Bank: that includes the following data members:
• Name of Depositor
• Account Number
• Balance Amount
 The class also contains the following member functions:
• A parameterized constructor to initialize:
? Name->Ahmed
? Balance Amount->100
? Account Number->123
• Deposit Function to deposit some amount. It should accept amount as a 
parameter.
• Withdraw function to withdraw an amount. It should also accept amount as a 
parameter.
• Display function to display name and balance amount after deposit and withdraw
*/
#include<iostream>
using namespace std;

class Bank
{
	string name_depo;
	int account_num;
	int balance_amount;
	public:
		Bank(string name , int b_amount , int acc_num)
		{
			name_depo = name;
			balance_amount = b_amount;
		 	account_num = acc_num;
		}
		void deposit(int amount)
		{
			balance_amount += amount;
		}
		void withdraw (int amount)
		{
			balance_amount -= amount;
		}
		void display()
		{
			cout<<"The name of the person : "<<name_depo<<endl;
			cout<<"The bank balance of the person is : "<<balance_amount<<endl<<endl;
		}
};
int main()
{
	Bank b1("ali",240,2023299);
	b1.deposit(550);
	cout<<"after the deposit "<<endl;
	b1.display();
	b1.withdraw(250);
	cout<<"after the withdrawal "<<endl;
	b1.display();
	return 0;
}
