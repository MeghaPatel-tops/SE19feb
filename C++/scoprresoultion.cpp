#include<iostream>
using namespace std;
class Maths{
	const float pi=3.14;
	public:
		void display();
};
void Maths::display(){
	cout<<"\n pi="<<Maths::pi;//const data access
	cout<<"\n create function outside the class";
}

main(){
	Maths m1;
	m1.display();
}
