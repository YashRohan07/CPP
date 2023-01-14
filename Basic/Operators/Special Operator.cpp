#include<iostream>
using namespace std;

int main()
{
    int a;
    float f;
    double b;
    char ch;
    char name[20];

    int c,x,y,sum;

    //SizeOff Operator

     c = sizeof(a);
     cout<<c<<endl;

     c = sizeof(f);
     cout<<c<<endl;

     c = sizeof(b);
     cout<<c<<endl;

     c = sizeof(ch);
     cout<<c<<endl;

     c = sizeof(name);
     cout<<c<<endl;


     //Comma Operator
     sum = (x=10, y=20, sum=x+y);
     cout<<sum;

}
