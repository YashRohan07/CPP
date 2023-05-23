#include<iostream>
using namespace std;

int main()
{
    char s1[]="YASH";

    int i=0;

    while(s1[i]!='\0')  //Jotokhon string ses hobena totokhon cholbe. Last value hosse null '\0'
    {
       cout<<s1[i]<<endl;
       i++;
    }

}

/*

Output:
Y
A
S
H

*/
