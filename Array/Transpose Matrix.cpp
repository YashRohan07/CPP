#include<iostream>
#include<conio.h>

using namespace std;
int main(){

int A[10][10], transpose[10][10],i,j,row,col;

 cout<<"Enter Number Of Rows and Columns for the Matrix: ";
 cin>>row>>col;

 //Getting the elements for the matrix
 for(int i=0;i<row;i++)
 {
     for(int j=0;j<col;j++)
     {
         cin>>A[i][j];
     }
 }

 //Printing the matrix
 cout<<"\nEntered Matrix\n";
 for(int i=0;i<row;i++)
 {
     cout<<"\n";
     for(int j=0;j<col;j++)
     {
         cout<<A[i][j]<<" ";
     }
     cout<<"\n";
 }

 //Transpose
 for(int i=0;i<row;i++)
 {
     cout<<"\n";
     for(int j=0;j<col;j++)
     {
        transpose[j][i]=A[i][j];
     }
     cout<<"\n";
 }

 //Printing Transpose Matrix
 cout<<"\nAfter Transpose\n";
 for(int i=0;i<col;i++)
 {
     cout<<"\n";
     for(int j=0;j<row;j++)
     {
       cout<< transpose[i][j]<<" ";
     }
     cout<<"\n";
 }


getch();
}
