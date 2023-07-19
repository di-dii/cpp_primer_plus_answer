#include<iostream>
using namespace std;

int main()
{
    int num1,num2;
    cout<<"Enter num1 and num2: \n";
    cin>>num1;
    cin>>num2;
    int sum=0;
    for(int i=num1;i<=num2;i++)
        sum+=i;
    cout<<sum<<endl;
    return 0;
}



//题目：