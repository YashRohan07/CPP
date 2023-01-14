// 1 + 1/2 + 1/3 + 1/4 +....+ 1/n,  Print sum of 1 to n.

#include<iostream>
using namespace std;

int main(){

    float sum=0, n;
    cout<<"Enter the last number: ";
    cin>>n;

    for(float i=1; i<=n; i++)
    {
        sum = sum + (1/i);
    }

    cout<<"Sum: "<<sum;
}





