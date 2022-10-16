#include<iostream>
#include<conio.h>
using namespace std;

int main(){

int marks[5];

//For Array Input
for(int i=1; i<=5; i++){

    cout<<"Marks For Student: "<<i<<" = ";
    cin>>marks[i];
}

cout<<"Expected Output: ";

//For Array Output
for(int i=0; i<5; i++){
    cout<<marks[i]<<" ";
}

getch();
}



