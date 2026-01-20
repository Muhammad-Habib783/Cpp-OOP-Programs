#include<iostream>
using namespace std;
class bag
{
    int price;
    string brand;
    public:
    bag()
    {
        price=0;
        brand="unknown";
    }
    bag(int p, string b)
    {
        price=p;
        brand=b;
    }
    bag(bag(& b)) // copy constructor
    {
    price=b.price;
    brand=b.brand;
    }
    void dsp()
    {
        cout<<"Price: "<<price<<endl;
        cout<<"Brand: "<<brand<<endl;
    }
};
int main()
{
    bag b(1,"j.j");
    b.dsp();
    bag b3;
    b3.dsp();
    bag b2(b);
    b2.dsp();
    return 0;
}