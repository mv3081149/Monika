#include<iostream>
using namespace std;

int main(){
	int score;
	char grade;
	cout<<"Enter student's score (0-100) :";  //35
	cin>>score;
	
	if(score>=90 && score <=100)
	grade='A';
	else if (score>= 80 && score<=80)
	grade='B';
	else if (score>= 60 && score<=70)
	grade='C';
	else if (score>= 0 && score<=50)
	grade='F';
	else{
		cout<<"Invalid score entered !"<<endl;
		
	}
	cout<<"The grade is :"<<grade<<endl;   // F
	
	return 0;
}
