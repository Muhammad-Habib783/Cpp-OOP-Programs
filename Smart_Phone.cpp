#include<iostream>
using namespace std;
class SmartPhone
{
private:
    string brand;
    string model;
    int pinCode;
public:
    // Constructor to initialize smartphone details
    SmartPhone(string phoneBrand,string phoneModel) 
    {
        brand=phoneBrand;
        model=phoneModel;
        pinCode=0000; // Default PIN set to 0000
    }
    // Function to set a PIN code ensuring it is exactly 4 digits
    void setPinCode(int code) 
    {
        if(code>=1000&&code<=9999) // ensure a 4-digit PIN
         {
            pinCode=code;
            cout<<"\n PIN set successfully";
        } 
        else
         {
            cout<<"\n invalid PIN Please enter a 4 digit code";
        }
    }
    // Function to unlock the phone by checking the entered PIN
    void unlockPhone(int code)
     {
        if(code==pinCode)
         {
            cout<<"\n Phone unlocked successfully";
        } 
        else
        {
            cout<<"\n incorrect PIN Phone remains locked";
        }
    }
    // Function to display phone details
    void displayPhoneDetails() 
    {
        cout<<"\n Brand: "<<brand;
        cout<<"\n Model: "<<model;
    }
};
int main() 
{
    SmartPhone myPhone("Samsung","Galaxy S21");

    // Displaying phone details
    cout<<"Phone Details:";
    myPhone.displayPhoneDetails();
    cout<<"\n";

    // Setting a valid PIN
    myPhone.setPinCode(1234);

    // Attempting to unlock with different PINs
    cout<<"\n Trying to unlock with PIN 5678:";
    myPhone.unlockPhone(5678); // incorrect PIN

    cout<<"\n Trying to unlock with PIN 1234:";
    myPhone.unlockPhone(1234); // correct PIN

    return 0;
}