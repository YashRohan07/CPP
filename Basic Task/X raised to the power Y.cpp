#include<iostream>
#include<cmath>   // Header file for power function
using namespace std;

int main(){

    int x,y;
    cout<<"Enter the base value and power value: ";
    cin>>x>>y;

    double result = pow(x,y);  // X^Y

    cout<<"Result Of X to the power Y: "<<result;
}


