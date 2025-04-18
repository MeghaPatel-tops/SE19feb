#include<iostream>
#include<fstream>
using namespace std;
main(){
	char data[50];
	ofstream file1;//fstream
	file1.open("cppdata.txt");//sec parameter ios::in
	file1<<"hello wolrd";
	file1.close();
	
	ifstream file2;
	file2.open("cppdata.txt");
	//file2>>data;
	file2.getline(data,30);
	cout<<"\n read data from file="<<data;
	file2.close();
}
