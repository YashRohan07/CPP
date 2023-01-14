// 1.5+2.5+3.5+....+n,  Print sum of 1 to n.

#include<iostream>
using namespace std;

int main(){

    float sum=0, n;
    cout<<"Enter the last number: ";
    cin>>n;

    for(float i=1.5; i<=n; i++)
    {
        sum = sum + i;
    }

    cout<<"Sum: "<<sum;
}




