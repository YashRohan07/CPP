#include<iostream>
using namespace std;

int main()
{
    int num;

    cout<<"Enter An Integer Number: ";
    cin>>num;

    if(num % 2 == 0)
    {
        cout<<"Even";
    }

    else{
        cout<<"Odd";
    }
}

/* Using Conditional or Ternary Operator

#include<iostream>
using namespace std;

int main(){

    int num;
    cout<<"Enter any integer: ";
    cin>>num;

    (num%2==0) ? cout<<num<<" Is Even"  : cout<<num<<" Is Odd";
}

// Expression-1 ? Expression-2 : Expression-3;   (If Expression-1 is true then Expression-2 will print, If Expression-1 is false then Expression-3 will print)


*/
