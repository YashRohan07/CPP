// Structure is a collection of different data type

#include<iostream>
using namespace std;

// Global Structure (Eta sob jaiga theke access kora jai)
struct person  // Here person is a user defined data type
{
    int age;
    float salary; // Age and salary are the member of person structure
};

/* struct person person1,person2;  // Global Variable */

int main(){

    struct person person1,person2;  // Local Variable

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
