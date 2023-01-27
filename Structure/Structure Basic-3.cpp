#include<iostream>
using namespace std;

//Global Structure
struct person
{
    int age;
    float salary;
};

int main(){

    struct person person1,person2;

    cout<<"Enter Information Of Person:-1"<<endl;

    cout<<"Enter Age: ";
    cin>>person1.age;

    cout<<"Enter Salary: ";
    cin>>person1.salary;

    cout<<"......."<<endl;

    cout<<"Enter Information Of Person:-2"<<endl;

    cout<<"Enter Age: ";
    cin>>person2.age;

    cout<<"Enter Salary: ";
    cin>>person2.salary;

    cout<<"......."<<endl;

    cout<<"Person-1: "<<endl;
    cout<<"Age: "<<person1.age<<endl;
    cout<<"Salary: "<<person1.salary<<endl;

    cout<<" "<<endl;

    cout<<"Person-2: "<<endl;
    cout<<"Age: "<<person2.age<<endl;
    cout<<"Salary: "<<person2.salary<<endl;

}

