#include<iostream>
using namespace std;

int main()
{
    float Dmoney=0;
    float CTmoney=100;
    int i=0;
    for(;Dmoney>=CTmoney-100;i++){
        Dmoney += 10;
        CTmoney += 0.05*CTmoney;
    }
    cout<<i<<" year.\n";
    cout<<"Daphne's interest: "<<Dmoney
    <<"\nCleo's interest: "<<CTmoney-100<<endl;
    
    return 0;
}



//题目：