/* write a program to check if a number is prime or not */

#include<iostream>
using namespace std;

int main(){

    int i,n;
    cout<<"Enter any number: ";
    cin>>n;

    for(i=2; i<n; i++){

        if(n%i == 0){
            cout<<"Non Prime!!";
            break;
        }
    }
    if(i==n){
        cout<<"Prime!";
    }

}


