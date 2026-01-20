#include<iostream>
using namespace std;

class softw{
	public:
	int sapid;
	string name;
	string address;
	softw(int i,string p,string j){
		sapid= i;
		name= p;
		address= j;
	}
	void dsp(){
		cout<<"Roll number: "<<sapid<<endl<<"Student Name: "<<name<<endl<<"Student Address :"<<address;
	}
};

int main(){
	softw mamon(638,"MamonIshaq","Jamshoro");
	softw hamad(879,"HamadbinNiaz","Antartica");

	mamon.dsp();
	hamad.dsp();
	
}