#include<iostream>
using namespace std;

int main(){

    char Button;
    cout<<"Enter a Button: ";
    cin>>Button;

   switch(Button)
   {
    case 'a':
    cout<<"Anaconda";
    break;

    case 'b':
    cout<<"Bear";
    break;

    case 'c':
    cout<<"Cat";
    break;

    case 'd':
    cout<<"Dog";
    break;

    default:
        cout<<"Nothing!";
        break;
   }
}

