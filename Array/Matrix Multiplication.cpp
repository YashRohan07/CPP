#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int First[10][10], Second[10][10], Result[10][10], r1,r2, c1,c2, i,j,k ;

    cout<<"Enter The Number Of Rows and Columns for First Matrix: ";
    cin>>r1>>c1;

    cout<<"Enter The Number Of Rows and Columns for Second Matrix: ";
    cin>>r2>>c2;

    while(c1!=r2)
    {
        cout<<"Error!! Col of first matrix not equal to the row of second matrix"<<endl;

          //If Error then again give the proper input.
         cout<<"Enter The Number Of Rows and Columns for First Matrix: ";
         cin>>r1>>c1;

         cout<<"Enter The Number Of Rows and Columns for Second Matrix: ";
         cin>>r2>>c2;

    }

    //First Matrix Input Taking
    cout<<"Enter Elements for First Matrix"<<endl;
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            cin>>First[i][j];
        }
    }

    //Second Matrix Input Taking
    cout<<"Enter Elements for Second Matrix"<<endl;
    for(int i=0;i<r2;i++)
    {
        for(int j=0;j<c2;j++)
        {
            cin>>Second[i][j];
        }
    }

    //Printing First Matrix
    cout<<"\n\nFirst Matrix\n";
      for(int i=0;i<r1;i++)
    {
        cout<<"\t";
        for(int j=0;j<c1;j++)
        {
            cout<<First[i][j];
            cout<<"\n";

        }
    }

    //Printing second Matrix
    cout<<"\n\nSecond Matrix\n";
    for(int i=0;i<r2;i++)
    {
        cout<<"\t";
        for(int j=0;j<c2;j++)
        {
            cout<<Second[i][j];
            cout<<"\n";

        }
    }

    //Multiplying Matrix
    for(int i=0;i<r1;r1++)
    {
        for(int j=0;j<c2;c2++)
        {
            Result[i][j]=0;

            for(int k=0;k<c1;k++)
            {
               Result[i][j] += First[i][j] * Second[k][j];

            }

        }
    }

    //Printing Multiplication Matrix
    cout<<"\n\nMultiplication Matrix\n";
    for(int i=0;i<r1;i++)
    {
        cout<<"\t";
        for(int j=0;j<c2;j++)
        {
            cout<<Result[i][j];
            cout<<"\n";

        }
    }


getch();
}
