/*
Structure of goto statement

goto label;
.............

label:
       statements
*/


#include<iostream>
using namespace std;

int main(){

    int i=1;

    print:
        cout<<i<<endl;
        i++;

        if(i<5)
            goto print;  // Label is calling here
}
