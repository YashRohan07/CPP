#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char string1[]="Yash ";
    char string2[]="Rohan";

    strcat(string1,string2);

    cout<<"String1: "<<string1<<endl;
    cout<<"String2: "<<string2<<endl;
}


/*
Output:
String1: Yash Rohan
String2: Rohan
*/

/*
int main()
{
    char string1[]="Yash ";

    strcat(string1,"Rohan");

    cout<<"String1: "<<string1<<endl;
}

*/



