#include<iostream>
#include<conio.h>
using namespace std;

int main(){

int n, A[30];
cout<<"How Many Fibonacci Numbers ? ";
cin>>n;

A[0]=0;
A[1]=1;

for(int i=2; i<n; i++)
{
    A[i] = A[i-1] + A[i-2];
}

for(int i=0;i<n;i++)
{
    cout<<A[i]<<endl;
}

getch();
}
