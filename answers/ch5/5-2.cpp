#include<iostream>
#include<array>
using namespace std;

int main()
{
    array<long double,101> ans{1};
    for(int i=1;i<101;i++)
        ans[i] = i*ans[i-1];
    for(int i=0;i<101;i++)
        cout<<i<<"! = "<<ans[i]<<endl;
    
    return 0;
}



//题目：