#include<iostream>
using namespace std;
class Student
{
    private:
          string name;
          int rollNumber;
          float cgpa;
    public:
            void set(string n,int r,float c)
            {
                name=n;
                rollNumber=r;
                if(c>=0.0&&c<= 4.0)
                {
                cgpa=c;
            }
            else
            {
                cgpa=0;
            }
        }
            void get()
            {
                cout<<"\n The name of the student is :"<<name;
                cout<<"\n The roll number of the student is :"<<rollNumber;
                cout<<"\n The cgpa of the student is :"<<cgpa;
            }
};
int main()
{
  Student s1,s2;
     s1.set("Ali Khan",67892,5.5);
    s1.get();
    s2.set("ASAD",37264,5.0);
    s2.get();
    return 0;
}
