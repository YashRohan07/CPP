#include<iostream>
using namespace std;

int main()
{
    int i,capital,small,digit;
    i=capital=small=digit=0;

    char string[100];

    cout<<"Enter a string: ";
    gets(string);


    while(string[i]!='\0')
    {
         if(string[i]>=65 && string[i]<=90) //ASCE value of A=65, Z=90

            capital++; //For capital letter counting

         else if(string[i]>=97 && string[i]<=122) //ASCE value of a=97, z=122

            small++; //For small letter counting

         else if(string[i]>=48 && string[i]<=57) //ASCE value of 0=48, 9=57

            digit++; //For Digit counting


         i++;  //protibar i er value increment er jonno

    }


    cout<<"Number Of Capital Letter= "<<capital<<endl;
    cout<<"Number Of Small Letter= "<<small<<endl;
    cout<<"Number Of Digits= "<<digit<<endl;

}

/*

Output:
Enter a string: Yash Rohan 66
Number Of Capital Letter= 2
Number Of Small Letter= 7
Number Of Digits= 2

*/

