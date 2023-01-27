// Passing Structure Variable To Function

#include<iostream>
#include<cstring> // For strcpy
using namespace std;

struct person
{
    char name[50];
    int age;
    float salary;
};

void display(struct person p)
{
    cout<<"Name: "<<p.name<<endl;
    cout<<"Age: "<<p.age<<endl;
    cout<<"Salary: "<<p.salary<<endl;
}

int main(){

    struct person person1,person2;

    strcpy(person1.name,"Yash"); // strcpy(des,src) copy the contents of source to destination
    person1.age = 22;
    person1.salary = 20000;

    strcpy(person2.name,"Rohan");
    person2.age = 25;
    person2.salary = 30000;

    display(person1);
    cout<<endl;
    display(person2);
}
