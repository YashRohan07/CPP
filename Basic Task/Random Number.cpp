#include<iostream>
#include<stdlib.h>  //for rand function
using namespace std;

int main()
{
    for(int i=1; i<=5; i++)
    {
      int randomNumber =rand();
      cout<<"Random Number= "<< randomNumber <<endl;
    }

    cout<<endl<<endl;

    for(int i=1; i<=5; i++)
    {
      int randomNumber =rand()%5;
      cout<<"Random Number= "<< randomNumber <<endl;
    }

    cout<<endl<<endl;

    for(int i=1; i<=5; i++)
    {
      int randomNumber =rand()%5 + 1;  //when we don't need zero
      cout<<"Random Number= "<< randomNumber <<endl;
    }

}

/*
Random Number= 41
Random Number= 18467
Random Number= 6334
Random Number= 26500
Random Number= 19169


Random Number= 4
Random Number= 3
Random Number= 3
Random Number= 2
Random Number= 4


Random Number= 1
Random Number= 1
Random Number= 2
Random Number= 3
Random Number= 2

*/
