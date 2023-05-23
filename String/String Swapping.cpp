#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char string1[]="India";
    char string2[]="Pakistan";
    char temp[20];  //swapping korar jonno temporary variable nea hoise

    cout<<"Before Swapping\n";
    cout<<"String1: "<<string1<<endl;
    cout<<"String2: "<<string2<<endl;

    strcpy(temp,string1);      //string1 ke temp er moddhe rakha hoise tai string1 akhon empty
    strcpy(string1,string2);  //string1 er moddhe string2 ke copy kora hoise
    strcpy(string2,temp);    //string2 er moddhe temp ke rakha hoise

    cout<<"After Swapping\n";
    cout<<"String1: "<<string1<<endl;
    cout<<"String2: "<<string2<<endl;

}

/*

Output:
Before Swapping
String1: India
String2: Pakistan

After Swapping
String1: Pakistan
String2: India

*/
