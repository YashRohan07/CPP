/* Write a program to output whether a number is divisible by both 2 and 3 or divisible by one of them */

#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter Any Number: ";
    cin>>n;

    if(n%2 == 0 && n%3 == 0)
    {
        cout<<"Divisible By Both";
    }
    else if(n%2 == 0)
    {
        cout<<"Divisible By 2";
    }
    else if(n%3 == 0)
    {
        cout<<"Divisible By 3";
    }
    else{
        cout<<"Divisible By None";
    }
}

