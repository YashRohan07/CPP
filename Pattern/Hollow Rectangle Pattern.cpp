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
          if(i==1 || i==row)
          {
              cout<<"*";
          }
          else if(j==1 || j==col)
          {
              cout<<"*";
          }
          else{
            cout<<" ";
          }
        }
        cout<<endl;
    }
}

/*
Input:-Enter Row and Column: 5 8

Output:

********
*      *
*      *
*      *
********


*/

