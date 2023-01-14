/* Input a number n and tell whether it is equal to,less than or more than 10 */

#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter Any Number: ";
    cin>>n;

    if(n==10)
    {
        cout<<"Equal To 10";
    }
    else if(n>10)
    {
        cout<<"More Than 10";
    }
    else{
        cout<<"Less Than 10";
    }
}
