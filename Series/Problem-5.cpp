// 1^5 + 2^5 + 3^5 +...+n^5,  Print sum of 1 to n.

#include<iostream>
#include<cmath>    // For power function
using namespace std;

int main(){

    int sum=0, n;
    cout<<"Enter the last number: ";
    cin>>n;

    for(int i=1; i<=n; i++)
    {
        sum = sum + pow(i,5);  // pow(base,power)
    }

    cout<<"Sum: "<<sum;
}




