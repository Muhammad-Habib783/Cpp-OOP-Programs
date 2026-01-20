#include<iostream>
#include<string.h>
using namespace std;
class student
{
    public:
    int roll_no;
    string name;
    string address;
   void get()
   {
    cout<<"\n Enter your roll no :" ;
    cin>>roll_no;
    cin.ignore();
    cout<<"\n Enter your name : ";
    getline(cin,name);
    cout<<"\n Enter your address : ";
    getline(cin,address);
      }
      void display()
      {
        cout<<"\n The student roll no is "<<roll_no;
        cout<<"\n The student name is "<<name;
        cout<<"\n The student address is "<<address;
      }
}; 
int main()
{
    student s;
    s.get();
    s.display();
    return 0;
}