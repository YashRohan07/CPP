#include<iostream>
using namespace std;

int main()
{
    int num;

    cout<<"Enter Any Integer Number: ";
    cin>>num;

    if(num < 0)
    {
        cout<<(-num);
    }

    else{
        cout<<num;
    }
}

/* 

#include<iostream>
#include<cmath>   // Header file for Absolute Function
using namespace std;

int main(){

    int num;
    cout<<"Enter an Integer: ";
    cin>>num;

    int result = abs(-num);  // Absolute Function

    cout<<"Result Of Absolute Value: "<<result;
}

*/

