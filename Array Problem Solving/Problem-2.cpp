/*Initialize an array. Size should be more than FIVE.
Write your program to change the array in such a way so that there cannot be any duplicate element in the array anymore.
Print the changed array. If the initialized array already had no duplicate elements from the beginning,
output a message saying “Array already unique!”*/

#include <iostream>
using namespace std;

int main()
{
    int size, flag=0;
    cout<<"Enter the size of the array: ";
    cin>>size;

    int Array[size];
    cout<<"\nPlease enter the element of the array: ";
    for(int i=0; i<size; i++)
    {
        cin >> Array[i];
    }

    cout<<"\n\nThe array with duplicate elements are : ";
    for(int i=0; i<size; i++)
    {
        cout << Array[i] << " ";
    }
    cout << endl << endl;

    for (int i = 0; i < size; i++)
    {
        int j;
        for(j = 0; j < i; j++)
        {
            if (Array[i] == Array[j])
            {
                flag = 1;
                break;
            }
        }

        if (i == j)
        {
            cout << Array[i] << " ";
        }
    }

    if(flag == 0)
    {
        cout<<" ------- This is a unique collection of elements ------- ";
    }
    cout << endl << endl;
    return 0;
}




