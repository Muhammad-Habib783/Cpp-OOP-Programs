#include<iostream>
using namespace std;
class marks
{
    public:
    float num[10];
    float sum1=0,average1=0;
    marks()
    {
        for(int i=0;i<10;i++)
            num[i]=0;
    }
    marks(float n[])
    {
        for(int i=0;i<10;i++)
            num[i]=n[i];
    }
    void sum()
    {
        sum1=0;
        for(int i=0;i<10;i++)
            sum1=sum1+num[i];
    }
    void average()
    {
        average1=(sum1/10);
        cout<<"\n The average of all the numbers is "<<average1;
    }
    void display()
    {
        cout<<"\n The numbers are: ";
        for(int i=0;i<10;i++)
            cout<<num[i]<<" ";
            cout<<endl;
    }
};
int main()
{
    float numbers[10]={7, 1, 2, 3, 4, 5, 5, 6, 7, 8};
    marks m(numbers);
    m.display();
    m.sum();
    m.average();
    return 0;
}