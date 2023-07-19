#include<iostream>
#include<fstream>
#include<cctype>
using namespace std;

int main()
{
    ifstream fin;
    fin.open("./6-8.txt");
    char ch;
    int count=0;
    fin>>ch;
    while(fin.good()){
        count++;
        fin>>ch;
    };
    cout<<count<<endl;
    return 0;
}



//题目：