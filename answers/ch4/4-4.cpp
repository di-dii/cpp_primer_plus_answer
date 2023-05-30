#include<iostream>
#include<string>
using namespace std;

int main()
{
    string firstn,lastn;
    string name;
    cout<<"Enter your first name: ";
    getline(cin,firstn);
    cout<<"Enter your last name: ";
    cin>>lastn;
    name = lastn + ", " + firstn;
    cout<<"Here's the information in a single string: "<<name<<endl;

    return 0;
}



//题目：