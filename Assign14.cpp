#include<iostream>
using namespace std;
int main(){

 int num1, num2;
 cout<<"Enter the first integer : ";   //35
 cin>>num1;
 
 cout<<"Enter the second integer : ";   //4
 cin>>num2;
 
            if(num2==0){
 	cout<<"Division by zero is not allowed !"<<endl;
            }
            
            else{
              if(num1% num2==0){
 		cout<<num1<<"is divisible by "<<num2<<endl;
                }
                
              else{
 		cout<<num1<<"is not divisible by "<<num2<<endl;    //35 is not divisible by 
 }
 }
 return 0;
}


