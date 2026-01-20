#include<iostream>
#include<string.h>
using namespace std;
class stud
{
    private :
    int sap;
    string name;
    float marks;
    string address;
    char gender;
    public:
    void store()
    {
        cout<<"\n Enter your sap id :";
        cin>>sap;
        cin.ignore();
        cout<<"\n Enter your name :";
        getline(cin,name);
        cout<<"\n Enter your marks :";
        cin>>marks;
        cin.ignore();
        cout<<"\n Enter your address :";
        getline(cin,address);
        cout<<"\n Enter your gender (M/F):";
        cin>>gender;
    }
    void display()
    {
        cout<<"\n The sap id is :"<<sap;
        cout<<"\n The name is :"<<name;
        cout<<"\n The marks are :"<<marks;
        cout<<"\n The address is :"<<address;
        cout<<"\n The gender is :"<<gender;
    }
};
int main()
{
 stud s,s2;
 s.store();
 s.display();
 s2.store();
 s2.display();
    return 0;
}