#include<iostream>
#include<conio.h>
using namespace std;

int main(){

int A[10][10], B[10][10], C[10][10], row,col,numberOfRows,numberOfcols;
cout<<"Enter The Number Of Rows and Columns: ";
cin>>numberOfRows>>numberOfcols;

cout<<"Enter elements for A matrix: ";
//Input A Matrix
for(row=0; row<numberOfRows; row++)
{
   for(col=0; col<numberOfcols; col++ )
   {
       cin>>A[row][col];
   }
}

cout<<"Enter elements for B matrix: ";
//Input B Matrix
for(row=0; row<numberOfRows; row++)
{
   for(col=0; col<numberOfcols; col++ )
   {
       cin>>B[row][col];
   }
}

//Printing A Matrix
cout<<"A Matrix ";
for(row=0; row<numberOfRows; row++)
{
    cout<<endl;
   for(col=0; col<numberOfcols; col++ )
   {
       cout<<A[row][col]<<" ";
   }
     cout<<endl;
}

cout<<"///////"<<endl<<endl;

//Printing B Matrix
cout<<"B Matrix ";
for(row=0; row<numberOfRows; row++)
{
   cout<<endl;
   for(col=0; col<numberOfcols; col++ )
   {
       cout<<B[row][col]<<" ";
   }
       cout<<endl;
}

cout<<"///////"<<endl<<endl;

//Matrix Addition
for(row=0; row<numberOfRows; row++)
{
   for(col=0; col<numberOfcols; col++ )
   {
       C[row][col] = A[row][col] + B[row][col];
   }
}

//Printing C Matrix
cout<<"C = A + B  ";
for(row=0; row<numberOfRows; row++)
{
    cout<<endl;
   for(col=0; col<numberOfcols; col++ )
   {
       cout<<C[row][col]<<" ";
   }
     cout<<endl;
}

cout<<"///////"<<endl<<endl;


//Matrix Subtraction
for(row=0; row<numberOfRows; row++)
{
   for(col=0; col<numberOfcols; col++ )
   {
       C[row][col] = A[row][col] - B[row][col];
   }
}

//Printing C Matrix
cout<<"C = A - B  ";
for(row=0; row<numberOfRows; row++)
{
    cout<<endl;
   for(col=0; col<numberOfcols; col++ )
   {
       cout<<C[row][col]<<" ";
   }
     cout<<endl;
}

cout<<"///////"<<endl<<endl;




getch();
}



