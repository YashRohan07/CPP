#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter Number: ";
    cin>>n;

    do{                                 // do{..Body..} while(Condition)
        cout<<"The Number Is: "<<n;
        cin>>n;
    }
    while(n>0);


}

