/*Number swapping with temporary variable*/

#include<iostream>
using namespace std;

int main(){

    int num1=10;
    int num2=5;

    int temp;  // temporary variable

    temp = num1;  // temp a rakhar karone num-1 akhon khali ase, so now temp=10
    num1 = num2;  // num-2 er value num-1 er moddhe rakha hoise, so now num1=5
    num2 = temp;  // num-2 er moddhe temp rakha hoise karon temp er moddhe num-1 er value silo, so now num2=10

    cout<<"NUM-1: "<<num1<<endl;
    cout<<"NUM-2: "<<num2<<endl;

}

/*
Number swapping without temporary variable

int main(){

    int num1=10;
    int num2=5;

    num1 = num1 - num2;   // 5
    num2 = num1 + num2;   // 10
    num1 = num2 - num1;   // 5

    cout<<"NUM-1: "<<num1<<endl;
    cout<<"NUM-2: "<<num2<<endl;

}


Output:-
NUM-1: 5
NUM-2: 10

*/






