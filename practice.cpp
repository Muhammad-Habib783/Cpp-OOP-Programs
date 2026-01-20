// friend function and friend class read must and implement 
#include<iostream>
#include<string>
using namespace std;
class ABC
{
public:
ABC()
{
    cout<< "construcrtor\n";
}
~ABC()
{
    cout<< "destrucrtor\n";
}

};
int main()
{
    if(true)
    {
   static ABC obj;
    }
   cout<<" end of main ";
    return 0;
}