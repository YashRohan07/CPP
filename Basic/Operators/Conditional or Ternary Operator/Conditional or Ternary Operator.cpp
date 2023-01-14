#include<iostream>
using namespace std;

int main(){

    int num1,num2;

    num1=20;
    num2=30;

    int max= (num1>num2) ? num1 : num2;  // Expression-1 ? Expression-2 : Expression-3

    cout<<max;    // If Expression-1 is true then Expression-2 will print, If Expression-1 is false then Expression-3 will print.
}
