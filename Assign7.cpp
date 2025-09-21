#include<iostream>
using namespace std;

int main(){
	int code;
	
	cout<<"Enter ASCII code (0 -127) :";   // 36
	cin>>code;
	
	cout<<"The character for ASCII code ' "<<code<<"'is :"<<char (code)<<endl;   // $
	
	return 0;
}
