#include<iostream>
#include<conio.h>
using namespace std;

int main(){

int n;

cout<<"Enter number of Students: ";
cin>>n;

int students[n],sum=0;

//For Input
for(int i=0;i<n;i++){

   cout<<"Marks For Student "<<i+1<<" = ";
   cin>>students[i];

  sum=sum+students[i];

}
cout<<"Total Marks: "<<sum<<endl;

float avg = (float)sum/n; //Type casting
cout<<"Average: "<<avg<<endl;

//Maximum and Minimum
int max = students[0];
int min = students[0];

for(int i=1; i<n; i++){

    if (max < students[i])
    {
        max = students[i];
    }

     if (min > students[i])
    {
        min = students[i];
    }

}

cout<<"Maximum Marks:" <<max<<endl;
cout<<"Minimum Marks:" <<min<<endl;

getch();
}
