#include<iostream>
using namespace std;
template <typename T>
class Sortarray{
	public:
		T a[5],temp;
		int i,j;
		Sortarray(){
			cout<<"\n Enter array Elements\n";
			for(i=0;i<5;i++){
				cout<<"\n Enter "<<i<<"index:";
				cin>>a[i];
			}
		}
		void sortArrayFunction(){
			for(i=0;i<5;i++){
				for(j=i+1;j<5;j++){
					if(a[i]> a[j]){
						temp=a[i];
						a[i]=a[j];
						a[j]=temp;
					}
				}
			}
		}
		void printArray(){
			cout<<"\n============= array==================\n";
			for(i=0;i<5;i++){
				cout<<"\n "<<i<<"="<<a[i];
			}
		}
};

main(){
	Sortarray <int>s1;
	s1.sortArrayFunction();
	s1.printArray();
	
	Sortarray <char>s2;
	s2.sortArrayFunction();
	s2.printArray();
}
