#include<iostream>
using namespace std;

int main(){

    float num1,num2;
    cout<<"Enter two Number: ";
    cin>>num1>>num2;

    char op;
    cout<<"Enter a Operator:";
    cin>>op;

   switch(op)
   {
    case '+':
    cout<<"Addition: "<<num1+num2;
    break;

    case '-':
    cout<<"Subtraction: "<<num1-num2;
    break;

    case '*':
    cout<<"Multiplication: "<<num1*num2;
    break;

    case '/':
    cout<<"Division: "<<num1/num2;
    break;


    default:
        cout<<"Enter Another Operator: ";
        break;
   }
}


