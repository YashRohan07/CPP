#include<iostream>
using namespace std;

void sum(int a, int b)
{
    int add = a+b;
    cout<<add<<endl;
}

void sum(int a, int b, int c)
{
    int add = a+b+c;
    cout<<add<<endl;
}


int main()
{
    sum(10,20);
    sum(10,20,30);
}


/*

#include<iostream>
using namespace std;

void sum(int x)
{
    cout<<x<<endl;
}

void sum(double x)
{
   cout<<x<<endl;
}


int main()
{
    sum(10);
    sum(10.5);
}

*/

