//Array Of Structure

#include<iostream>
using namespace std;

struct person
{
    int age;
    float salary;
};

int main(){

    struct person person[3];

    //Input Loop
    for(int i=0; i<3; i++)
    {
        cout<<"Enter Information for Person:-"<<i+1<<endl;

        cout<<"Enter Age: ";
        cin>>person[i].age;

        cout<<"Enter Salary: ";
        cin>>person[i].salary;

        cout<<endl;

    }

    //Output Loop
    for(int i=0; i<4; i++)
    {
        cout<<"Information for Person:-"<<i+1<<endl;

        cout<<"Age: "<<person[i].age<<endl;
        cout<<"Salary: "<<person[i].salary<<endl<<endl;

    }


}
