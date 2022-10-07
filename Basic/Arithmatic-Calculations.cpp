#include<iostream>
#include<conio.h>
using namespace std;

int main(){

int num1,num2;

cout<<"Enter Two Number: ";
cin>>num1>>num2;

int sum = num1 + num2;
cout<<"The Sum is : "<<sum;
cout<<endl;

int sub = num1 - num2;
cout<<"The Subtraction is : "<<sub;
cout<<endl;

int mul = num1 * num2;
cout<<"The Multiplication is : "<<mul;
cout<<endl;

double div = (float)num1 / num2;   //Type Casting
cout<<"The Division is : "<<div;
cout<<endl;

int rem = num1 % num2;
cout<<"The Remainder is : "<<rem;
cout<<endl;


getch();
}



