#include <iostream>
#include <cstring>  // Include the <cstring> header for the strcmp() function
using namespace std;

int main()
{
    char string1[] = "MADAM";  //Madam is palindrome
    char string2[20];

    int i = 0, length = 0;
    while (string1[i] != '\0')  // Calculate the length of string1
    {
        i++;
        length++;
    }

    int j = 0;
    for (i = length - 1; i >= 0; i--)  // Reverse string1 and store it in string2
    {
        string2[j] = string1[i];
        j++;
    }

    string2[j] = '\0';  // Add the null terminator at the end of string2

    int d = strcmp(string1, string2);  // Compare string1 and string2 using strcmp()

    if (d == 0)
    {
        cout << "Palindrome";  // If string1 and string2 are the same, it is a palindrome
    }
    else {
        cout << "Not palindrome";
    }

    return 0;
}
