#include<iostream>
using namespace std;

int addition(int,int);

int main()
{
   cout<< addition(10,20)<<endl;
   cout<< addition(30,20)<<endl;
}

int addition(int a,int b)
{
    int sum = a+b;
    return sum;
}

/*
#include<iostream>
using namespace std;

double addition(double,double);

int main()
{
   cout<< addition(10.5, 20.5) <<endl;
   cout<< addition(30.5, 20.8) <<endl;
}

double addition(doulbe a,double b)
{
    double sum = a+b;
    return sum;
}
*/
