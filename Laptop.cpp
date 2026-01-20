#include<iostream>
#include<string.h>
using namespace std;
class laptop
{
    public:
    string brand,model,color;
    int serial;
    float price,processor_speed,screen_size;
    int RAM;
    laptop()
     {
    brand="";
    model="";
    color="";
    serial=0;
    price=0.0;
    processor_speed=0.0;
    RAM=0;
    screen_size=0.0;
     }
    laptop(string b,string m,string c,int s,float p,float q,int r,float d )
    {
        brand=b;
        model=m;
        color=c;
        serial = s;
        price=p;
        processor_speed=q;
        RAM=r;
        screen_size=d;
    }
void store()
{
    cout<<"\n Enter the brand of laptop :";
    cin>>brand;
    cout<<"\n Enter the model of laptop :";
    cin>>model;
    cout<<"\n Enter the serial of laptop :";
    cin>>serial;
    cout<<"\n Enter the color of laptop :";
    cin>>color;
    cout<<"\n Enter the price of laptop :";
    cin>>price;
    cout<<"\n Enter the processor speed of laptop :";
    cin>>processor_speed;
    cout<<"\n Enter the RAM of the laptop :";
    cin>>RAM;
    cout<<"\n Enter the screen size of the laptop :";
    cin>>screen_size;
}
void display()
{
    cout<<"\n The brand of laptop is "<<brand;
    cout<<"\n The model of laptop is "<<model;
    cout<<"\n The color of laptop is "<<color;
    cout<<"\n The serial of laptop is "<<serial;
    cout<<"\n The price of laptop is "<<price;
    cout<<"\n The processor speed of laptop is "<<processor_speed;
    cout<<"\n The RAM of laptop is "<<RAM;
    cout<<"\n The screen size of laptop is "<<screen_size;
}
};
int main()
{
    laptop l1("HP","2007","black",123,20000,20.11,2334,22);
    l1.display();
    return 0;
}