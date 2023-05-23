#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char string1[]="Yash";
    char string2[20];

    strcpy(string2,string1);

    cout<<"String1: "<<string1<<endl;
    cout<<"String2: "<<string2<<endl;
}

/*
Output:
String1: Yash
String2: Yash

*/
