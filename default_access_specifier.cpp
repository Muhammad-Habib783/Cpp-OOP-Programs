#include<iostream>
#include<string>
using namespace std;
class stu
{
	string name;
	int sap;
	int num[3];
	int sum;
	public:
		stu()
        {
		sum=0;
		}
		void input()
        {
			cout<<"\n Enter name : ";
			cin>>name;
			cout<<"\n Enter sap : ";
			cin>>sap;
			for(int i=0;i<3;i++)
            {
			cout<<"\n Enter the marks  of  subject :"<<i+1<<" : ";
			cin>>num[i];
			sum=sum+num[i];
		}
		cout<<"\n Total number :"<<sum;	
		}
		void cgp()
        {
			if(sum>240)
            {
				cout<<"\n Student has 4 gpa";
			}
			else if(sum>210&&sum<240)
            {
				cout<<"\n CGPA is 3.5";
			}
			else if(sum>180&&sum<210)
            {
				cout<<"\n 3 CGPA";
			}
			else
            {
				cout<<"\n Student Fail";
			}	
		}
		void show()
        {
			cout<<"\n Student details :";
			cout<<"\n Name :"<<name;
			cout<<"\n Sap :"<<sap;
			cout<<"\n Total marks :"<<sum;
		}
		
};
int main()
{
	 stu obj;
	 obj.input();
	 obj.show();
	 obj.cgp();
     return 0;
}