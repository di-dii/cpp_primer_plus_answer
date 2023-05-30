#include<iostream>
#include<string>
using namespace std;

int main()
{
    string name,food;
    cout<<"Enter your name:\n";
    getline(cin,name);     // cin>>name;  will split by space key, use getline(cin,str) instead.
    cout<<"Enter your favorite dessert:\n";
    cin>>food;
    cout<<"I have some delicious "<<food;
    cout<<" for you, "<< name << ".\n";

    return 0;
}



//题目：