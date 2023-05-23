#include<iostream>
using namespace std;

int main()
{
    char string1[] = "Yash Rohan";
    char string2[20];

    int i = 0, length = 0;
    while (string1[i] != '\0')  //String1 er length ber korar jonno
    {
        i++;
        length++;
    }

    int j = 0;
    for (i = length - 1; i >= 0; i--)  //string1 er seser index = length-1
    {
        string2[j] = string1[i];  //string1 er last index, string2 er 0 nb index a thakbe
        j++;
    }

    string2[j] = '\0'; //string2 ekhane ses hobe

    cout << "String1: " << string1 << endl;
    cout << "String2: " << string2 << endl;

    return 0;
}
