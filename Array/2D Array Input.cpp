#include<iostream>
#include<conio.h>

using namespace std;

int main(){

int A[2][3];
cout<<"Enter The Elements "<<endl;

//2D Array Input
for(int row=0; row<2; row++)
{
    for(int col=0; col<3; col++)
    {
        cin>>A[row][col];
    }

}

//2D Array Output
for(int row=0; row<2; row++)
{
    for(int col=0; col<3; col++)
    {
        cout<<A[row][col]<<" ";
    }
    cout<<endl;
}

getch();
}

