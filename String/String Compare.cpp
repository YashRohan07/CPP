#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char string1[]="Yash";
    char string2[]="Rohan";

    int result = strcmp(string1,string2); //compare kore equal hole result 0 return korbe

    if(result==0)
    {
        cout<<"Equal";
    }
    else{
        cout<<"Not Equal";
    }

}
