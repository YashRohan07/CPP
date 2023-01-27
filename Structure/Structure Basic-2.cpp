#include<iostream>
using namespace std;

int main(){

//Local Structure
struct person
{
    int age;
    float salary;
};

    struct person person1,person2; // Local Variable

    person1.age = 25;
    person1.salary = 25000;

    person2.age = 26;
    person2.salary = 26000;

    cout<<"Person-1: "<<endl;
    cout<<"Age: "<<person1.age<<endl;
    cout<<"Salary: "<<person1.salary<<endl;

    cout<<" "<<endl;

    cout<<"Person-2: "<<endl;
    cout<<"Age: "<<person2.age<<endl;
    cout<<"Salary: "<<person2.salary<<endl;

}

/*
#include<iostream>
using namespace std;

//Global Structure
struct person
{
    int age;
    float salary;
};

struct person person1,person2; // Global Variable

int main(){

    person1.age = 25;
    person1.salary = 25000;

    person2.age = 26;
    person2.salary = 26000;

    cout<<"Person-1: "<<endl;
    cout<<"Age: "<<person1.age<<endl;
    cout<<"Salary: "<<person1.salary<<endl;

    cout<<" "<<endl;

    cout<<"Person-2: "<<endl;
    cout<<"Age: "<<person2.age<<endl;
    cout<<"Salary: "<<person2.salary<<endl;

}
*/

