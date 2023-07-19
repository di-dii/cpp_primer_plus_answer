#include<iostream>
using namespace std;

int main()
{
    const char Month[12][10]={"January","February","March","April","May","June","July","August","September","Octorber","November","December"};
    int sales[3][12] {{0}};
    for(int j=0;j<3;j++){
        for(int i=0;i<12;i++){
            cout<<"Enter the "<<j+1<<" year "<<Month[i]<<"'s book sales volume: ";
            cin>>sales[j][i];
        }
    }
    int Tsum=0;
    for(int j=0;j<3;j++){
        int sum=0;
        for(int i=0;i<12;i++)
            sum += sales[j][i];
        cout<<"The "<<j+1<<" year sales number is: "<<sum<<endl;
        Tsum += sum;
    }
    cout<<"Total 3 years sales is: "<<Tsum<<endl;

    return 0;
}



//题目：