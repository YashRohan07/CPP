#include<iostream>
#include<cmath>
using namespace std;

int main(){

    double x;
    cout<<"Enter a number: ";
    cin>>x;

    double result1 = sin(x);
    double result2 = cos(x);
    double result3 = tan(x);


    cout<<"sin("<<x<<")"<<" = "<<result1<<endl;

    cout<<"cos("<<x<<")"<<" = "<<result2<<endl;

    cout<<"tan("<<x<<")"<<" = "<<result3<<endl;
}

/*

Input:- Enter a number: 45

Output:-

sin(45) = 0.850904
cos(45) = 0.525322
tan(45) = 1.61978


*/




