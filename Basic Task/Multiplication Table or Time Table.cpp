#include<iostream>
using namespace std;

int main(){

    int num;
    cout<<"Enter an integer: ";
    cin>>num;

    for(int i=1; i<=10; i++)
    {
        cout<< num << "X" << i << "=" << (num*i)<<endl;
    }

}

/*
Input: Enter an integer: 5

Output:
5X1=5
5X2=10
5X3=15
5X4=20
5X5=25
5X6=30
5X7=35
5X8=40
5X9=45
5X10=50

*/
