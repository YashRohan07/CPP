// 1^2 + 2^2 + 3^2 +...+n^2,  Print sum of 1 to n.

#include<iostream>
using namespace std;

int main(){

    int sum=0, n;
    cout<<"Enter the last number: ";
    cin>>n;

    for(int i=1; i<=n; i++)
    {
        sum = sum + i*i;
    }

    cout<<"Sum: "<<sum;
}



