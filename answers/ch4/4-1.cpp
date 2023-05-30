#include<iostream>
using namespace std;

int main()
{
    char firstn[20];
    char lastn[20];
    char grade;
    int age;
    cout<<"What is your first name? ";
    cin.getline(firstn,20);
    cout<<"What is your last name? ";
    cin.getline(lastn,20);
    cout<<"What is your grade? ";
    cin>>grade;
    cout<<"What is your age? ";
    cin>>age;

    cout<<"Name: "<<lastn<<", "<<firstn<<endl;
    cout<<"Grade: "<<char(grade+1)<<endl;
    cout<<"Age: "<<age<<endl;


    return 0;
}



//题目：