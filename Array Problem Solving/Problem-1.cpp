/*Initialize TWO integer arrays of different sizes. And
Merge the input arrays and create a new array. Then print the new array in reverse order*/

#include <iostream>
using namespace std;

int main()
{
    int Size1, Size2;
    cout<<"Enter the size of first array: ";
    cin>>Size1;
    cout<<"Enter the size of second array: ";
    cin>>Size2;

    int Array1[Size1], Array2[Size2], Array3[Size1+Size2];

    cout<<"\nPlease enter the element of the first array: ";
    for(int i=0; i<Size1; i++)
    {
        cin >> Array1[i];
    }

    cout<<"\nPlease enter the element of the second array: ";
    for(int i=0; i<Size2; i++)
    {
        cin >> Array2[i];
    }

    int k = 0;
    for(int i = 0 ; i < Size1+Size2; i++)
    {
        if(i < Size1)
        {
            Array3[i] = Array1[i];
        }
        else
        {
            Array3[i] = Array2[k];
            k++;
        }
    }

   /* for (int i = 0; i < Size1+Size2; i++)
    {
        Array3[i] = Array1[i];
        Array3[i + (Size1+Size2)] = Array2[i];
    }*/

    cout << "\nThe Array after marging : ";
    for (int i = 0; i < Size1+Size2; i++)
    {
        cout << Array3[i] <<" ";
    }

    cout << "\n\nThe Marge Array in reverse order : ";
    for (int i = Size1+Size2-1; i >= 0; i--)
    {
        cout << Array3[i] <<" ";
    }
    cout<<endl<<endl;
    return 0;
}





