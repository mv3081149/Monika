#include<iostream>
using namespace std;

int main(){
	float cpDozen ,spDozen;
	 float cp, sp;;
	
	
	cout<<"Enter cost price per dozen :"; // 70
	cin>>cpDozen;
	
	cout<<"Enter selling price per dozen :"; //80
	cin>>spDozen;
	
	cp=(cpDozen/12)*25;
	sp=(spDozen/12)*25;
	
	if(sp>cp)
	cout<<"profit ="<<sp - cp <<endl; //20.833
	
	else if (cp > sp)
	cout<<"Loss ="<<cp-sp<<endl;
	
	else
	cout<<"NO profit , no loss"<<endl;
	
	return 0;	
	
}
