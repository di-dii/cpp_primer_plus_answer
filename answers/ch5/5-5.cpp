#include<iostream>
using namespace std;

int main()
{
    const char Month[12][10]={"January","February","March","April","May","June","July","August","September","Octorber","November","December"};
    int sales[12] {0};
    for(int i=0;i<12;i++){
        cout<<"Enter "<<Month[i]<<"'s book sales volume: ";
        cin>>sales[i];
    }
    int sum=0;
    for(int i=0;i<12;i++)
        sum += sales[i];
    cout<<"Total number is: "<<sum<<endl;

    return 0;
}



//题目：