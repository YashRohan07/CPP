#include<iostream>
using namespace std;

int main(){

    int num,count=0;

    cout<<"Enter an integer: ";
    cin>>num;

    while(num != 0)
    {
        num = num/10;
        count++;
    }

    cout<<"Total Number Of Digits: "<<count;






}