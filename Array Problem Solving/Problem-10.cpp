/* # Create an array of size 10.
   # Initialize the array with different elements.
   # Print the elements from the array
   # Print in reverse order
   # Copy the elements in reverse to another array
   # Copy Even/Odd elements in separate array  */

#include<iostream>
using namespace std;

int main()
{
    int arr1[10]={1,2,3,4,5,6,7,8,9,10};
    cout<<"Printing the Array "<<endl;
    for(int i=0;i<10;i++)
    {
        cout<<arr1[i]<<" "<<endl;
    }

    cout<<"Array in Reverse order "<<endl;
    for(int i=9;i>=0;i--)
    {
        cout<<arr1[i]<<" "<<endl;
    }

    int arr2[10];
    cout<<"Array printing in Reverse order "<<endl;
    for(int i=9;i>=0;i--)
    {
        arr2[i]=arr1[i];
        cout<<arr2[i]<<" "<<endl;
    }

    int arrEven[10];
    int arrOdd[10];

    cout<<"Even array "<<endl;
    for(int i=0;i<10;i++)
    {
        if(arr1[i]%2 == 0)
        {
            arrEven[i]=arr1[i];
            cout<<arrEven[i]<<" "<<endl;

        }
    }
    cout<<"Odd Array "<<endl;
    for(int i=0;i<10;i++)
    {
        if(arr1[i]%2 != 0)
        {
            arrOdd[i]=arr1[i];
            cout<<arrOdd[i]<<" "<<endl;
        }
    }
}


