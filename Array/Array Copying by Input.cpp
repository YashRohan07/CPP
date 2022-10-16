//##Copy all elements of an array to another array.

#include<iostream>
#include<conio.h>
using namespace std;

int main(){

int n, array1[5], array2[5];
cout<<"How Many Numbers??";
cin>>n;

//For Input
for(int i=0; i<n; i++)
{
    cin>>array1[i];
}

cout<<"ARRAY-1!!"<<endl;
for(int i=0; i<n; i++)
{
    cout<<array1[i]<<endl;
}


for(int i=0;i<n; i++)
{
    array2[i] = array1[i];
}

cout<<"ARRAY-2!!"<<endl;
for(int i=0; i<5; i++)
{
    cout<<array2[i]<<endl;
}

getch();
}

