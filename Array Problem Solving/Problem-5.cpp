/*Initialize an integer array A of size 10.
Take an integer as input and print how many times that integer occurs in A.*/

#include <iostream>
using namespace std;

int main()
{
    int size, count, i, j;
    cout<<"Enter the size of the array: ";
    cin>>size;

    int Array[size], Repeat[size];

    cout<<"\nPlease enter the element of the array: ";
    for(i=0; i<size; i++)
    {
        cin >> Array[i];
        Repeat[i] = 0;
    }

    for(i=0; i<size; i++)
    {
        count = 1;
        for(j=i+1; j<size; j++)
        {
            /* If duplicate element is found */
            if(Array[i] == Array[j])
            {
                count++;
                Repeat[j] = -1;
            }
        }

        if(Repeat[i] == 0)
        {
             Repeat[i] = count;
        }
    }

    cout<<"\n\n --------- Repetition of all elements of the array --------- \n\n";
    for(i=0; i<size; i++)
    {
        if( Repeat[i] != -1)
        {
            cout<< Array[i] <<" occurs = " <<  Repeat[i] << " times."<<endl<<endl;
        }
    }
    return 0;
}
