#include<iostream>
#include<array>
using namespace std;

int main()
{
    array<float,3> grade;
    cout<<"Enter your first time grade: ";
    cin>>grade[0];
    cout<<"Enter your second time grade: ";
    cin>>grade[1];
    cout<<"Enter your third time grade: ";
    cin>>grade[2];   
    cout<<"Your average grade is: "<<(grade[0]+grade[1]+grade[2])/3<<endl;

    return 0;
}



//题目：