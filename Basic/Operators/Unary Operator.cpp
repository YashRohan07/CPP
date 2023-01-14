#include<iostream>
using namespace std;

int main()
{
    int x = 6;
    int result;

    result = -x; //Unary Minus
    cout<<result<<endl;

    result = +x; //Unary Plus
    cout<<result<<endl;

    result = --x; //Pre Decreement
    cout<<result<<endl;

    result = x--; //Post Decreement
    cout<<result<<endl;

    result = x++; //Post Increment
    cout<<result<<endl;

    result = ++x; //Pre Increment
    cout<<result<<endl;

}
