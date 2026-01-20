#include<iostream>
using namespace std;
class BankAccount 
{
private:
int accountNumber;
 string ownerName;
double balance;
public:
    // Constructor to initialize account details
    BankAccount(int accNumber,string accOwner,double initialBalance) 
    {
        accountNumber=accNumber;
        ownerName=accOwner;
        if(initialBalance>=0)
        {
        balance=initialBalance;
        }
        else
        {
            balance=0;
            cout<<"\n Invalid initial balance setting balance to 0";
        }
    }
    // Function to deposit money into the account
    void deposit(double amount) 
    {
        if(amount>0) 
        {
            balance=balance+amount;
            cout<<"\n Deposited: "<<amount<<" successfully";
        } 
        else
     {
            cout<<"\n invalid deposit amount";
        }
    }
    // Function to withdraw money, ensuring balance never goes negative
    void withdraw(double amount)
     {
        if(amount>0&&amount<=balance)
         {
            balance=balance-amount;
            cout<<"\n Withdrawn: "<<amount<<" successfully";
        } 
        else
     {
            cout<<"\n insufficient balance or invalid amount ";
        }
    }
    // Function to get the current balance
    double getBalance() 
    {
        return balance;
    }
    // Function to display account details
    void displayAccountDetails()
     {
        cout<<"\n Account Number: "<<accountNumber;
        cout<<"\n Owner Name: "<<ownerName;
        cout<<"\n Current Balance: "<<balance;
    }
};
int main() 
{
    // Create an  bank account object
    BankAccount customer1(672834, "Hassan khan", 500.0);

    // Displaying initial account details
    cout<<"\n Initial Account Details:";
    customer1.displayAccountDetails();
    cout<<"\n";

    // Performing deposit and withdrawal
    customer1.deposit(200.0);
    customer1.withdraw(100.0);
    customer1.withdraw(700.0); // This line can  show an error message
     cout<<"\n";
    // Displaying final account details
    cout<<"\n Final Account Details:";
    customer1.displayAccountDetails();

    return 0;
}