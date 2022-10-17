#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
   int A[3][3], i,j,uppersum=0,lowersum=0;

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

   //sum Of Upper And lower triangle elements
   cout<<"Upper & Lower Triangle Elements:";
   for(int i=0;i<3;i++)
   {
       for(int j=0;j<3;j++)
       {
           if(i<j)   //Where The Index of col are greater than the index of row.
           {
               cout<<A[i][j]<<" ";
               uppersum = uppersum + A[i][j];
           }

           if(i>j)   //Where The Index of row are greater than the index of col.
           {
               cout<<A[i][j]<<" ";
               lowersum = lowersum + A[i][j];
           }
       }
   }

   cout<<"\nSum Of Upper Triangle Elements  = "<<uppersum;
   cout<<"\nSum Of Lower Triangle Elements  = "<<lowersum;




    getch();
}

