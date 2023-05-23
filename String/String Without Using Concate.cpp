#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char string1[20]="Yash ";
    char string2[]="Rohan";

    int i=0, length=0, j=0;

    while(string1[i] != '\0')  //String1 er length ber korar jonno
    {
        i++;
        length++;
    }

    while(string2[j] != '\0')
    {
        string1[length+j]=string2[j]; //String1 jekhane ses hoise sekhane string2 add kora hoise
        j++;
    }

    cout<<"String1: "<<string1<<endl;

}
