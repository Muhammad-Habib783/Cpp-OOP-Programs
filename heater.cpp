#include<iostream>
#include<string.h>
using namespace std;
class Heater
{
    public:
    float temperature;
    Heater()
    {
        temperature=15.0;
    }
    void warmer()
    {
     cout<<"\n The warm temperature is :"<<(temperature+5.0);
    }
    void cooler()
    {
     cout<<"\n The cool  temperature is :"<<(temperature-5.0);
    }
};
int main()
{ 
    Heater h;
    h.warmer();
    h.cooler();
    return 0;
}