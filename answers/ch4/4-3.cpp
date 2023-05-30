#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char firstn[20],lastn[20];
    char name[40];
    cout<<"Enter your first name: ";
    cin.getline(firstn,20);
    cout<<"Enter your last name: ";
    cin.getline(lastn,20);
    strcat(lastn,", ");          //strcat(A,B) A+B->A
    strcpy(name,lastn);
    strcat(name,firstn);
    cout<<"Here's the information in a single string: "<<name<<endl;

    return 0;
}



//题目：