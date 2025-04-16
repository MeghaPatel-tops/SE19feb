#include<iostream>
using namespace std;
class Calc;
class Maths{
	 private:
	 	int privateData;
	 protected:
	 	int proctedData;	
	 public:
	 	int publicData;
	 	Maths(){
	 		privateData=12;
	 		proctedData=13;
	 		publicData=14;
		 }	
		 
		 friend class Calc; 	
};

class Calc{
	public :
		void test(Maths m1){
			cout<<"\n private data="<<m1.privateData;
		}
};

main(){
    Maths m1;
    Calc c1;
    c1.test(m1);
}
