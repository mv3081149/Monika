#include<iostream>
using namespace std;

int main(){
	char ch1,ch2,ch3;
	cout<<"Enter three characters :";  // P @ #
	cin>>ch1>>ch2>>ch3;
	
	cout<<ch1<<" : "<<int(ch1)<<endl;  //80
	cout<<ch2<<" : "<<int(ch2)<<endl;  //64
	cout<<ch3<<" : "<<int(ch3)<<endl;   //35
	
	return 0;
}
