#include<iostream>
using namespace std;

int main(){

    int i=1;
    int j=2;
    int k=3;

            //1      //2     //3
    int x = (i--) - (j--) - (k--);

     cout<<"i:"<<i<<endl;
      cout<<"j:"<<j<<endl;
       cout<<"k:"<<k<<endl;
        cout<<"x:"<<x<<endl;
}

/*Output:
i:0
j:1
k:2
x:-4
*/

