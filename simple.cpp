
#include<iostream>
#include<string>
using namespace std;
class person{
	int age;
	string name;
	string address;
	public:
		void inpt(){
			cout<<"Enter Age :";
			cin>>age; 
			cout<<"Enter Name :";
			cin.ignore(); // To clear the newline character left in the input buffer
			getline(cin, name);
			cout<<"Enter Address :";
			getline(cin, address);
		}
		void show(){
			cout<<" Age is :"<<" "<<age<<endl;
			cout<<" Name is :"<<" "<<name<<endl;
			cout<<" Address is :"<<" "<<address<<endl;
		}
};
int main()
{
	person p1,p2;
	
	p1.inpt();
	p2.inpt();
	person p3;
	p3.inpt();
	p1.show();
	p2.show();
	p3.show();
    return 0;
}