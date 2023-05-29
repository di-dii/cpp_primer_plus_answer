#include<iostream>
using namespace std;

int main()
{
    long long worldP, USP;
    cout<<"Enter the world's population: ";
    cin>>worldP;
    cout<<"Enter the population of US: ";
    cin>>USP;
    //cout.setf(ios_base::fixed, ios_base::floatfield);
    cout<<"The population of the US is "<<float(USP)/worldP*100<<"% of the world population."<<endl;

    return 0;
}



//题目：