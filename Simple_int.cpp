#include<iostream>
using namespace std;

float simple(int P,int T,float R){
 
 	float si;
	si=(P * T * R)/100;
	return si;
	
	}
	int main(){
		
	int P=1000000;
	int T=7;
	float R=6.25;
	
	cout<<"Simple intrest for 1000000 with ROI 6.25% for 2 years is :";
	
	float result;
	result = simple(P, T, R );

	cout<<result<<endl<<endl;
	cout<<"Total amount is :"<<P + result;	
	
	return 0;
	
}
