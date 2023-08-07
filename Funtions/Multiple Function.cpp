#include<iostream>
using namespace std;

//Prototype function..
void addition(int,int);
void subtraction(int,int);
void multiplication(int,int);
void division(int,int);

int main()
{
    addition(10,20);
    addition(10,30);

    subtraction(30,20);
    subtraction(40,20);

    multiplication(10,5);
    multiplication(10,6);

    division(10,2);
    division(10,5);

}

void addition(int a,int b)
{
    int sum = a+b;
    cout<<"Sum: "<<sum<<endl;
}

void subtraction(int a,int b)
{
    int sub = a-b;
    cout<<"Sub: "<<sub<<endl;
}

void multiplication(int a,int b)
{
    int mul = a*b;
    cout<<"Mul: "<<mul<<endl;
}

void division(int a,int b)
{
    float div = (float)a/b;
    cout<<"Div: "<<div<<endl;
}


