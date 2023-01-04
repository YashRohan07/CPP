#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter Number: ";
    cin>>n;

    int sum = 0;
    for(int counter = 1; counter <= n; counter++){   // for(Initialization; Condition; Update)
        sum = sum + counter;
    }

    cout<<"The Sum is: "<<sum;


}
