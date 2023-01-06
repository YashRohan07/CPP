#include<iostream>
using namespace std;

int main(){

    char Button;
    cout<<"Enter a Button: ";
    cin>>Button;

    if(Button=='a')
    {
        cout<<"Anaconda"<<endl;
    }
    else if(Button=='b')
    {
        cout<<"Bear"<<endl;
    }
    else if(Button=='c')
    {
        cout<<"Cat"<<endl;
    }
    else if(Button=='d')
    {
        cout<<"Dog"<<endl;
    }
    else{
        cout<<"Nothing!!";
    }
}
