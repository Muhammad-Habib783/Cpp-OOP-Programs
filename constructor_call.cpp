#include <iostream>
using namespace std;
class Heater
 {
private:
    int temperature;
    int min,max,increment;
public:
    Heater(int minVal,int maxVal)
     {
        min=minVal;
        max=maxVal;
        temperature=min;  
        increment=5;   
    }
    void warmer()
     {
        if(temperature+increment<=max)
         {
            temperature=temperature+increment;
        } 
        else
         {
            cout<<"\n Temperature cannot exceed max value!";
        }
    }
    void cooler() 
    {
        if(temperature-increment>=min)
         {
            temperature=temperature-increment;
        }
         else 
         {
            cout<<"\n Temperature cannot go below min value!";
        }
    }
    void setIncrement(int newIncrement)
     {
        if(newIncrement>=0)
         {
            increment=newIncrement;
        }
         else
         {
            cout<<"\n Increment value cannot be negative!";
        }
    }
    void display() 
     {
        cout<<"\n Current Temperature: "<<temperature<<"C";
    }
};
int main() 
{
    Heater myHeater(10,30);

    myHeater.display();
    myHeater.warmer();
    myHeater.display();
    myHeater.cooler();
    myHeater.display();
    
    myHeater.setIncrement(3);  
    myHeater.warmer();
    myHeater.display();

    myHeater.setIncrement(-5); 
    myHeater.display();

    return 0;
}