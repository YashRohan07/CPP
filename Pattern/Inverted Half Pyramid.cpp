#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter a number: ";
    cin>>n;

    for(int i=n; i>=1; i--)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}

/*
Input:-Enter a number: 8

Output:

********
*******
******
*****
****
***
**
*

*/

