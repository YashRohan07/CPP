#include<iostream>
#include <cstring> // Include the <cstring> header for strlen function
using namespace std;

int main()
{
    char s1[]="YASH ROHAN";

    int length = strlen(s1);  //strlen function return the size of the S1

    cout<<"Length= "<<length;

}

/*

//without using strlen function

#include<iostream>
using namespace std;

int main()
{
    char s1[]="YASH ROHAN";

    int i=0, length=0;

    while(s1[i]!='\0')  //Jotokhon string ses hobena totokhon cholbe. Last value hosse null '\0'
    {
       i++;
       length++;
    }

    cout<<"Length= "<<length;

}

*/
