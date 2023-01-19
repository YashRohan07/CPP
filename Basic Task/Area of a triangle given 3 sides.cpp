#include<iostream>
#include<cmath>
using namespace std;

int main(){

    double a,b,c,s,area;
    cout<<"Enter 3 Value: ";
    cin>>a,b,c;

    s = (a+b+c)/2;

    area = sqrt(s*(s-a)*(s-b)*(s-c));

    cout<<"Area Of Triangle: "<<area;
}
