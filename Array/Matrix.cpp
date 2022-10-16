#include<iostream>
#include<conio.h>
using namespace std;

int main(){

int A[3][4], B[3][4],row,col;

cout<<"Enter elements for A matrix: ";

//Input A Matrix
for(row=0; row<3; row++)
{
   for(col=0; col<4; col++ )
   {
       cin>>A[row][col];
   }
}

//Printing A Matrix
cout<<"A = ";
for(row=0; row<3; row++)
{
    cout<<endl;
   for(col=0; col<4; col++ )
   {
       cout<<A[row][col]<< " " ;
   }
     cout<<endl;
}

cout<<"Enter elements for B matrix: ";

//Input B Matrix
for(row=0; row<3; row++)
{
   for(col=0; col<4; col++ )
   {
       cin>>B[row][col];
   }
}

//Printing B Matrix
cout<<"B = ";
for(row=0; row<3; row++)
{
    cout<<endl;
   for(col=0; col<4; col++ )
   {
       cout<<B[row][col]<<" ";
   }
     cout<<endl;
}


getch();
}


