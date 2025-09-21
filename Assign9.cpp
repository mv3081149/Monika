#include<iostream>
#include<string>
using namespace std;

int main(){
	string date;
	cout<<"Enter date in format DD/MM/YYYY :";  // 13/09/2025
	cin>>date;
	
	string day =date.substr(0, 2);
	string month =date.substr(3, 2);
	string year =date.substr(6, 4);
	
	cout<<"Day :"<<day<<", Month : "<<month<<",Year :"<<year<<endl; 
	// Day-13 ,Month -09 ,year-2025
	
	
	
	return 0;
	
}

