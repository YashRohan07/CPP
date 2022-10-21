/* # Create an array of size 10.
   # Initialize the array with different elements.
   # Print the elements from the array
   # Print in reverse order
   # Copy the elements in reverse to another array */

//Using Function

#include<iostream>
using namespace std;

#define N 10

void array1(int arr1[N])
{
    cout<<"Array Printed"<<endl;
    for(int i=0; i<N; i++)
    {
        cout<<arr1[i]<<" "<<endl;
    }
}

void printingArrayInReverse(int arr[N])
{
    cout<<"Array printed in reverse"<<endl;
    for(int i=(N-1); i>=0; i--)
    {
        cout<<arr[i]<<" "<<endl;
    }
}

void copyArray(int arr[N], int arr1[N])
{
    cout<<"Copied Array"<<endl;
    for(int i=0; i<N; i++)
    {
        arr1[(N-1)-i] = arr[i];
    }
}

int main(){

int arr1[N]={10,20,30,60,30,20,55,35,75,90};
int arr2[N];
array1(arr1);
printingArrayInReverse(arr1);
copyArray(arr1,arr2);
array1(arr2);

}
