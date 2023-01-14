// 2+4+6+8+...+n,  Print sum of even numbers from 2 to n

#include<iostream>
using namespace std;

int main(){

    int sum=0, n;
    cout<<"Enter the last number: ";
    cin>>n;

    for(int i=2; i<=n; i=i+2)
    {
        sum= sum+i;
    }

    cout<<"Sum: "<<sum;
}


