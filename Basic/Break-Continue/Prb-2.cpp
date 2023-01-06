/* Print all prime numbers between A and B.. */

#include<iostream>
using namespace std;

int main(){

    int A,B;
    cout<<"Enter the range: ";
    cin>>A>>B;
    int i,num;

    for(num=A; num<=B; num++){

            for(i=2; i<=num; i++){

                 if(num%i == 0){
                 break;
                }
              }

        if(i == num){
        cout<<num<<endl;
      }

   }


}



