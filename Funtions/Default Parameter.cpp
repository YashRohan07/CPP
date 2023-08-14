#include<iostream>
using namespace std;

void display(int a=10, int b=20)  //Default Value
{
    cout<< a << endl;
    cout<< b << endl;
}

int main()
{
    display(); //It calls the default value...

    display(25);
}

/*

#include<iostream>
using namespace std;

void display(int a, int b=20)  //Default Value
{
    cout<< a << endl;
    cout<< b << endl;
}

int main()
{
    display(25);
}

*/
