#include<iostream>
using namespace std;
class bag{
	
	int price;
	string brand;
	
public:
bag(){
	price=0;
	brand="unknown";
}
bag(int i, string p){  //parameterize constructor
	price=i;
	brand=p;
}
bag(bag(& b)){  
	price=b.price;
	brand=b.brand;
}
void dis();
};

int main(){
	bag b(1,"J.J");
	b.dis();
	bag b3;
	b3.dis();
 bag b2(b);
	b2.dis(); 
}
void bag::dis(){
	cout<<"Bag price: "<<price<<endl<<"bag brand: "<<brand<<endl;
}