#include<iostream>
using namespace std;

int main()
{
    char s1[]={'Y','A','S','H','\0'};

    char s2[]= "ROHAN"; //Directly initialization for single line

    char s3[]= "Yash Rohan \
                 YR";        // Line Breaking character(\) is used for multiple line string initialization



    cout<<s1<<endl;
    cout<<s2<<endl;
    cout<<s3;
}

