#include<iostream>
using namespace std;

int main()
{
    int heightinch;
    const int convfactor = 12;
    cout<<"Enter total ins:_____\b\b\b\b\b";
    cin>>heightinch;
    cout<<"height is "<<heightinch/convfactor<<" feet "<<heightinch%convfactor<<" inch."<<endl;
    return 0;
}



//题目：