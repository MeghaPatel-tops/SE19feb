#include<iostream>
using namespace std;
template <typename T>
void calc(T a, T b){
	cout<<"\n addition="<<a+b;
	cout<<"\n mul="<<a*b;
	cout<<"\n div="<<a/b;
	cout<<"\n sub="<<a-b;
}
main(){
	calc<int>(12,3);
	calc<float>(12.4,3.4);
}
