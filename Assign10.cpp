#include<iostream>
#include<string>
using namespace std;

int main(){
	string time;
	cout<<"Enter time in format HH:MM :";  //  12:25
	cin>>time;
	
	string hour =time.substr(0, 2);
	string minute =time.substr(3, 2);
	
	cout<<"Hour -"<<hour<<",Minute -"<<minute<<endl;  //Hour -12, Minute -25
	
	
	return 0;
	
}

