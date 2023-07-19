#include<iostream>
#include<cctype>
#include<string>
#include <stdlib.h>  //use c_str()
using namespace std;

bool sispdigit(string str){
    for(char c: str){
        if(!isdigit(c))
            return false;
    }
    return true;
}

int main()
{
    string str;
    int income;
    float tax;
    while(cin>>str && sispdigit(str)){
        income = atoi(str.c_str());
        tax = 0;
        if(income>35000){
            tax += (income-35000)*0.2;
            income = 35000;
        }
        if(income>15000){
            tax += (income-15000)*0.15;
            income = 15000;
        }
        if(income>5000){
            tax += (income-5000)*0.10;
            income = 5000;
        }
        cout<<"Your tax should be: "<<tax<<endl;
    }
    cout<<"end.\n";
    return 0;
}



//题目：