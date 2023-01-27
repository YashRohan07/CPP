// Structure Comparision

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

    if(person2.age==person3.age  && person2.salary==person3.salary)
    {
        cout<<"Person-2 equal to Person-3 ";
    }

    else{
        cout<<"Person-2 not equal to Person-3 ";
    }



}

