/*Initialize TWO integer arrays A and B of different sizes.
Make a new array with the common elements between A and B. Print the new array element(s).
If there is no common element, output “No common element!”*/

#include <iostream>
using namespace std;

int main()
{
    int size1, size2, n=0;
    cout<<"Enter the size of first array: ";
    cin>>size1;
    cout<<"Enter the size of second array: ";
    cin>>size2;

    int Array1[size1], Array2[size2], Array3[max(size1,size2)];

    cout<<"\nPlease enter the element of first array: ";
    for(int i=0; i<size1; i++)
    {
        cin >> Array1[i];
    }

    cout<<"\nPlease enter the element of second array: ";
    for(int j=0; j<size2; j++)
    {
        cin >> Array2[j];
    }

    for(int i = 0 ; i < size1; i++)
    {
        for (int j = 0 ; j < size2; j++)
        {
            if(Array1[i] == Array2[j])   //== use for comparison.
            {
                Array3[n] = Array2[j];
                n++;
            }
        }
    }

    if(n == 0)
    {
        cout<<"\n\n ------- No Common Element is here -------"<<endl<<endl;
    }
    else
    {
        cout<<"\n\nThe common elements of both array : "<<endl;
        for (int i = 0; i<n; i++)
        {
                cout << Array3[i] << " ";
        }
        cout<<endl<<endl;
    }
    return 0;
}





