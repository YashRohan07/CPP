#include<iostream>
using namespace std;

void addition(int,int);  //Prototype function

int main()
{
    addition(10,20);
    addition(10,30);
    addition(10,40);
}

void addition(int a,int b)
{
    int sum = a+b;
    cout<<"Sum: "<<sum<<endl;
}


