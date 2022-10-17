#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
   int A[3][3], i,j,sum;

   //Getting the elements for the matrix
   cout<<"\nEnter The elements for the Matrix:\n";
   for(int i=0; i<3; i++)
   {
       for(int j=0;j<3;j++)
       {
           cin>>A[i][j];
       }
   }

   //Printing the matrix
   cout<<"\nEntered Matrix\n";
   for(int i=0; i<3; i++)
   {
       for(int j=0;j<3;j++)
       {
           cout<<A[i][j]<<" ";
       }
       cout<<"\n";
   }

   //sum Of Diagonal elements
   cout<<"Diagonal Elements:";
   for(int i=0;i<3;i++)
   {
       for(int j=0;j<3;j++)
       {
           if(i==j)   //Where The Index of row and Col are same.
           {
               cout<<A[i][j]<<" ";
               sum = sum + A[i][j];
           }
       }
   }

   cout<<"\nThe Sum Of Diagonal Elements are = "<<sum;




    getch();
}

