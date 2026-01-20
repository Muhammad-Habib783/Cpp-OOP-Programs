#include<iostream>
using namespace std;
class encap{
	private: 
	int age;
	
	public:
		void setval(int x){
			age=x;
			
			
		}
		int getval(){
			return age;
		
		}
};
int main(){
	encap e;
	e.setval(22);
    cout<<e.getval();
    return 0;
}
