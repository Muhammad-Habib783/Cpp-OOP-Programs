#include<iostream>
using namespace std;
class car
{
    public:
    int model;
    string name;
    int price;
    car(int i,string j,int a)
    {
        model= i;
        name=j;
        price=a;
    }
    void dsp()
    {
        cout<<"\n car model :"<<model<<endl<<" car Name : "<<name<<endl<<"car price :"<<price;
    }
};
int main()
{
    car w(2022,"Audi",400000);
    w.dsp();
    return 0;
}