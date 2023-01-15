#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter a number: ";
    cin>>n;

    //For Upper Part

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<"*";
        }

        int space= 2*n - 2*i;

        for(int j=1; j<=space; j++)
        {
            cout<<" ";
        }

         for(int j=1; j<=i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    //For Lower Part

    for(int i=n; i>=1; i--)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<"*";
        }

        int space= 2*n - 2*i;

        for(int j=1; j<=space; j++)
        {
            cout<<" ";
        }

         for(int j=1; j<=i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}

/*
Input:- Enter a number: 5
Output:
*        *
**      **
***    ***
****  ****
**********
**********
****  ****
***    ***
**      **
*        *

*/

