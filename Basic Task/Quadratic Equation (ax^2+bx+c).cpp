#include<iostream>
#include<cmath>
using namespace std;

int main(){

    double a,b,c,d, x1,x2;
    cout<<"Enter the value for A,B,C : ";
    cin>>a,b,c;

    d = sqrt(b*b - 4*a*c);

    x1 = (-b+d)/(2*a);
    x2 = (-b-d)/(2*a);

    cout<<"X1: "<<x1<<endl;
    cout<<"X2: "<<x2<<endl;


}
