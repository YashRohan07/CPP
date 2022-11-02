#include<iostream>
using namespace std;

int main()
{
    int a = 32;
    int b = 12;
    int c;

    c = a & b;  //Bitwise And
    cout<<c<<endl;

    c = a | b;  //Bitwise Or
    cout<<c<<endl;

    c = a ^ b;  //Bitwise Exor
    cout<<c<<endl;

    c = a>>3;  // Right Shift
    cout<<c<<endl;

    c = a<<3;  // Left Shift
    cout<<c<<endl;




}
