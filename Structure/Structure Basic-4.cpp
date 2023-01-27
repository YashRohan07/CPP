// Initialize Structure Variables

#include<iostream>
using namespace std;

//Global Structure
struct person
{
    int age;
    float salary;
};

int main(){

    struct person person1 = {25,50000};

    struct person person2,person3;


    //Element wise assignment
    person2.age = 26;
    person2.salary = 26000;


    //Structure variable assignment
    person3 = person2;


    cout<<"Person-1: "<<endl;
    cout<<"Age: "<<person1.age<<endl;
    cout<<"Salary: "<<person1.salary<<endl;

    cout<<" "<<endl;

    cout<<"Person-2: "<<endl;
    cout<<"Age: "<<person2.age<<endl;
    cout<<"Salary: "<<person2.salary<<endl;

    cout<<" "<<endl;

    cout<<"Person-3: "<<endl;
    cout<<"Age: "<<person3.age<<endl;
    cout<<"Salary: "<<person3.salary<<endl;


}
