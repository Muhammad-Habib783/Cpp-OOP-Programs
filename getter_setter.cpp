
#include<iostream>
#include<string.h>
using namespace std;
class Employee
{
    public:
    string name;
    int idNumber;
    string department;
    string position;
    Employee(string n,int i,string d,string p)
    {
        name=n;
        idNumber=i;
        department=d;
        position=p;
    }
    Employee(string n,int i)
    {
        name=n;
        idNumber=i;
        department="";
        position="";
    }
    Employee()
    {
        name="";
        idNumber=0;
        department="";
        position="";
    }
    void setname(string n)
    {
      name=n;
    }
    void setidNumber(int i)
    {
        idNumber=i;
    }
    void setdepartment(string d)
    {
      department=d;
    }
    void setposition(string p)
    {
        position=p;
    }
    string getname()
    {
        return name;
    }
    int getidNumber()
    {
        return idNumber;
    }
    string getdepartment()
    {
       return department;
    }
    string getposition()
    {
        return position;
    }
    void display_Employee()
    {
        cout<<"\n The name of the employee is :"<<name;
        cout<<"\n The id number of the employee is :"<<idNumber;
        cout<<"\n The department of the employee is :"<<department;
        cout<<"\n The position of the employee is :"<<position;
    }
};
int main()
{
    Employee emp1("Ali khan",60922,"SOFTWARE ENGINEERIG","Student");
    Employee emp2("ali",52233,"SOFTWARE ENGINEERIG","Student");
    Employee emp3("asad",69282,"SOFTWARE ENGINEERIG","Student");

    cout<<"\n Employee details :";
    emp1.display_Employee();
    emp2.display_Employee();
    emp3.display_Employee();


    return 0;
}