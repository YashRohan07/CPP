#include<iostream>
using namespace std;

int main()
{
    int i,vowel,consonant,digit,word,other;
    char string[100],ch;

    cout<<"Enter a string: ";
    gets(string);

    i=vowel=consonant=digit=word=other=0;

    while((ch=string[i])!='\0')
    {
         if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||
            ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')

            vowel++; //for vowel counting


         else if((ch>='a' && ch<='z')  || (ch>='A' && ch<='Z'))

            consonant++; //for consonant counting

         else if(ch>='0' && ch<='9')
            digit++;  //for digit counting

         else if(ch==' ')
            word++;  //jodi space er pore kisu thake setai word

         else
            other++;

         i++;  //protibar i er value increment er jonno

    }

    word++;  //First j word thake seta count er jonno,then bakigulo space er through te count hobe (ch==' ')

    cout<<"Number Of Vowels= "<<vowel<<endl;
    cout<<"Number Of Consonants= "<<consonant<<endl;
    cout<<"Number Of Digits= "<<digit<<endl;
    cout<<"Number Of Words= "<<word<<endl;
    cout<<"Number Of Others= "<<other<<endl;

}

/*

Output:
Enter a string: Yash Rohan @45
Number Of Vowels= 3
Number Of Consonants= 6
Number Of Digits= 2
Number Of Words= 3
Number Of Others= 1

*/
