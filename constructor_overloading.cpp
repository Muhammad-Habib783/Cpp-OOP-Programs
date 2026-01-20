#include <iostream>
using namespace std;
class  student
{
    public:
    int id;
    string name;
    int marks;
    string address;
    char gender;
    student()
    {
        id=0;
        name=" ";
        marks=0;
        address=" ";
        gender=' ';
    }
    student(int i)
    {
        id=i;
        cout<<"\n The student id is :"<<id;
    }
    student(int i,string n)
    {
        id=i;
        name=n;
        cout<<"\n The student  id is :"<<id;
        cout<<"\n The student name is :"<<name;
    }
    student(int i,string n,int m)
    {
        id=i;
        name=n;
        marks=m;
        cout<<"\n The student id is :"<<id;
        cout<<"\n The student name is :"<<name;
        cout<<"\n The students marks are :"<<marks;
    }
    student(int i,string n,int m,string a)
    {
        id=i;
        name=n;
        marks=m;
        address=a;
        cout<<"\n The student id is :"<<id;
        cout<<"\n The student name is :"<<name;
        cout<<"\n The student marks are :"<<marks;
        cout<<"\n The student address is :"<<address;
    }
    student(int i,string n,int m,string a,char g)
    {
        id=i;
        name=n;
        marks=m;
        address=a;
        gender=g;
        cout<<"\n The student id is :"<<id;
        cout<<"\n The student name is :"<<name;
        cout<<"\n The student marks are :"<<marks;
        cout<<"\n The student address is :"<<address;
        cout<<"\n The student gender is  :"<<gender;
    }
};
int main()
{
    student s1(232);
    cout<<"\n";
    student s2(233,"ali");
    cout<<"\n";
    student s3(234,"ahmed",90);
    cout<<"\n";
    student s4(235,"hassan",80,"karachi");
    cout<<"\n";
    student s5(236,"asad",70,"lahore",'F');
    return 0;
}