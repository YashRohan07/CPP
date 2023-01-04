/* Using Nested if else, Find the maximum number between 3 number */

#include<iostream>
using namespace std;

int main(){

    int A,B,C;
    cout<<"Enter 3 Numbers: ";
    cin>>A>>B>>C;

    if(A>B){
        if(A>C){
            cout<<A<<endl;  // A>B and A>C
        }
        else{
            cout<<C<<endl;  // C>A>B
        }
    }
    else{
        if(B>C){
            cout<<B<<endl;  // B>A and B>C
        }
        else{
            cout<<C<<endl;  // C>B>A
        }
    }
}
