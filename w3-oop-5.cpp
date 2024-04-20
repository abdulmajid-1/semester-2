#include <iostream>
using namespace std;

class Bankaccount
{
    long accnum;
    int balance;
    float interest_rate;

public:
    long getAccountNumber()
    {
        return accnum;
    }

    int getBalance()
    {
        return balance;
    }

    float getInterestRate()
    {
        return interest_rate;
    }

    // Setter functions
    void setAccountNumber(long newAccNum)
    {
        accnum = newAccNum;
    }

    void setBalance(double newBalance)
    {
        balance = newBalance;
    }

    void setInterestRate(double newInterestRate)
    {
        interest_rate = newInterestRate;
    }
    double calculateInterest();
};
double Bankaccount::calculateInterest()
{
    return (balance * (interest_rate / 100));
}
int main()
{
    Bankaccount newacc;
    newacc.setAccountNumber(2023266);
    newacc.setBalance(200000);
    newacc.setInterestRate(0.5);
    cout << "Account number is " << newacc.getAccountNumber() << endl;
    cout << "Balance is " << newacc.getBalance() << endl;
    cout << "Interest rate is " << newacc.getInterestRate() << endl;
    return 0;
}