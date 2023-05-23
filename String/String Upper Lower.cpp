#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char string1[]="Yash Rohan";
    char string2[]="Virat Kholi";

    strupr(string1);
    strlwr(string2);

    cout<<"Upper Case: "<<string1<<endl;
    cout<<"Lower Case: "<<string2<<endl;
}
