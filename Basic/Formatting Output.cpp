#include<iostream>
#include<conio.h>
#include<iomanip> //This header file (Input-Output-Manipulation) is used for Setprecision
using namespace std;

int main(){

int num1,num2;

cout<<"Enter Two Number: ";
cin>>num1>>num2;

cout<<showpoint;  //Use for Showing point
cout<<fixed; //Use for expected digit after point
cout<<setprecision(5);

float sum = num1 + num2;
cout<<setw(25)<<"The Sum is : "<<sum;
cout<<endl;

float sub= num1 - num2;
cout<<setw(25)<<"The Subtraction is : "<<sub; //setwith is used for line formatting
cout<<endl;

cout<<noshowpoint; //Use for not showing point specificly.
float mul= num1 * num2;
cout<<setw(25)<<"The Multiplication is : "<<mul;
cout<<endl;

double div = (float)num1 / num2;   //Type Casting
cout<<setw(25)<<"The Division is : "<<div;
cout<<endl;

/*int rem = num1 % num2;
cout<<"The Remainder is : "<<rem;     //Remainder always integer type
cout<<endl;*/


getch();
}




