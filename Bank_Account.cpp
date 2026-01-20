#include<iostream>
using namespace std;
class BankAccount
{
private:
    double balance;
public:
    BankAccount(double openingBalance)
    {
        if(openingBalance>=0)
        {
            balance=openingBalance;
        }
        else
        {
            balance=0;
            cout<<"Invalid opening balance. Setting balance to 0."<<endl;
        }
    }
    void displayBalance()
    {
        cout<<"\n Current balance "<<balance;
    }
    void deposit(double amount)
    {
        if(amount>0)
        {
            balance=balance+amount;
            cout<<"\n Deposited "<<amount;
        }
        else
        {
            cout<<"\n Invalid deposit amount ";
        }
    }
    void withdraw(double amount)
    {
        if(amount>0&&amount<=balance)
        {
            balance=balance-amount;
            cout<<"\n Withdrew "<<amount;
        }
        else
        {
            cout<<"Invalid withdrawal amount or insufficient funds."<<endl;
        }
    }
};
int main()
{
    double openingBalance, depositAmount, withdrawAmount;
    cout<<"Enter opening balance";
    cin>>openingBalance;
    BankAccount account(openingBalance);
     account.displayBalance();
    cout<<"Enter amount to deposit ";
    cin>>depositAmount;
    account.deposit(depositAmount);
    cout<<"Enter amount to withdraw ";
    cin>>withdrawAmount;
    account.withdraw(withdrawAmount);
   account.displayBalance();
    return 0;
}
