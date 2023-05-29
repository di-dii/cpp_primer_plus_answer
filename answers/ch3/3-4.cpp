#include<iostream>
using namespace std;

int main()
{
    long long totalsec,totalsecT;
    const int dayhour = 24;
    const int hourmin = 60;
    const int minsec = 60;
    cout<<"Enter the number of seconds: ";
    cin>>totalsec;
    totalsecT = totalsec;
    int day,hour,min,sec;
    day = totalsec/(minsec*hourmin*dayhour);
    totalsec = totalsec%(minsec*hourmin*dayhour);
    //totalsec = totalsec - day*minsec*hourmin*dayhour;
    hour = totalsec/(minsec*hourmin);
    totalsec = totalsec%(minsec*hourmin);
    //totalsec = totalsec - hour*minsec*hourmin;
    min = totalsec/minsec;
    sec = totalsec%minsec;
    cout<<totalsecT<<" seconds = "<<day<<" days, "<<hour<<" hours, "<<min<<" minutes, "<<sec<<" seconds"<<endl;

    return 0;
}



//题目：