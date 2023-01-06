#include<iostream>
using namespace std;

int main(){

    for(int i=1; i<=100; i++){
        if(i==10){
            continue;  // Skips the current iteration of the loop
        }
       cout<<i<<endl;
    }
}

