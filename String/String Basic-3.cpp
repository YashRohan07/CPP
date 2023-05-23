#include<iostream>
using namespace std;

int main()
{
    char s1[20];   //String Declaration

    cout<<"Enter Your Name: ";

    //cin>>s1;

    gets(s1);  //cin kono sentence a space er pore kaj korte parena tai etar alternative solution gets()

    cout<<"Name: "<<s1<<endl;

}


