#include<iostream>
#include<cmath>
using namespace std;

int main(){

    double x;
    cout<<"Enter a number: ";
    cin>>x;

    double result1 = log(x);
    double result2 = log10(x);
    double result3 = exp(x);


    cout<<"log("<<x<<")"<<" = "<<result1<<endl;

    cout<<"log10("<<x<<")"<<" = "<<result2<<endl;

    cout<<"exp("<<x<<")"<<" = "<<result3<<endl;
}

/*

Input:- Enter a number: 1

Output:-
log(1) = 0
log10(1) = 0
exp(1) = 2.71828



*/


