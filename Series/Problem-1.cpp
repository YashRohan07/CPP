// 1+2+3+...+n,  Print sum of 1 to n

#include<iostream>
using namespace std;

int main(){

    int sum, n;
    cout<<"Enter the last number: ";
    cin>>n;

    for(int i=1; i<=n; i++)
    {
        sum= sum+i;
    }

    cout<<"Sum: "<<sum;
}


