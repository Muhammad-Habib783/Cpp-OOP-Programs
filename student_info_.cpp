#include<iostream>
using namespace std;
class student
{
    private:
    int id;
    string name;
    char grade;
    public:
    void store()
    {
        cout<<"\n Enter the id of the student :";
        cin>>id;
        cin.ignore();
        cout<<"\n Enter the name of student  : ";
        getline(cin,name);
        cout<<"\n Enter the grade of the student (A/B/C/D/E/F) : ";
        cin>>grade;
    while(grade!='A'&&grade!='a'&&grade!='B'&&grade!='b'&&grade!='C'&&grade!='c'&&grade!='D'&& grade!='d'&&grade!='E'&&grade!='e'&&grade!='F'&&grade!='f')
    {
        cout<<"\n invalid choice enter again :";
        cin>>grade;
    }
}
    void display()
    {
        cout<<"\n Id of the student :"<<id;
        cout<<"\n Name of the student :"<<name;
        cout<<"\n Grade of the student :"<<grade;
    }
};
int main()
{
   student s[100];
   for(int i=0;i<100;i++)
   {
   s[i].store();
   }
    for(int i=0;i<100;i++)
    {
        s[i].display();
    }
    return 0;
}
