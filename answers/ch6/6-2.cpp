#include<iostream>
using namespace std;

int main()
{
    double dons[10];
    int count=0;
    while(count<10 && cin>>dons[count]){
        count++;
    }
    double sum=0;
    for(int i=0;i<count;i++)
        sum+=dons[i];
    double avg = sum/count;
    int upcount=0;
    for(int i=0;i<count;i++)
        if(dons[i]>avg) upcount++;
    
    cout<<"average donation is: "<<avg<<"\n"<<upcount<<" beyond average.\n";

    return 0;
}



//题目：