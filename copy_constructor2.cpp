#include<iostream>
using namespace std;
class  student
{
    public:
    int id;
    string name;
    int marks;
    string address;
    char gender;
    student(int i,string n,int m,string a,char g)
    {
        id=i;
        name=n;
        marks=m;
        address=a;
        gender=g;
    }
    student(student &s)
    {
        id=s.id;
        name=s.name;
        marks=s.marks;
        address=s.address;
        gender=s.gender;
    }
    void display()
    {
        cout<<"\n The student id is :"<<id;
        cout<<"\n The student name is :"<<name;
        cout<<"\n The student marks are :"<<marks;
        cout<<"\n The student address is :"<<address;
        cout<<"\n The student gender is  :"<<gender;
    }
};
    int main()
{
    student s1(236,"asad",70,"lahore",'F');
    s1.display();
    cout<<"\n";
    student s2(s1);
    s2.display();
    return 0;
}