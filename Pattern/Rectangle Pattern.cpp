#include<iostream>
using namespace std;

int main(){

    int row,col;
    cout<<"Enter Row and Column: ";
    cin>>row>>col;

    for(int i=1; i<=row; i++)
    {
        for(int j=1; j<=col; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}

/*
Input:-Enter Row and Column: 5 7

Output:

*******
*******
*******
*******
*******

*/
