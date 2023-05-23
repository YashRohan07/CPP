#include<iostream>
using namespace std;

int main()
{
    char s1[4]; //Character type array (string declaration)

    //String initialization
    s1[0]='Y';
    s1[1]='A';
    s1[2]='S';
    s1[3]='H';

    s1[4]='\0';   //null character is used to avoid garbage value
                 //and \0 indicates that, this is the last index and the string is finished here

    cout<<s1;
}
