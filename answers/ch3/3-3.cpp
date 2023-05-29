#include<iostream>
using namespace std;

int main()
{
    int degree,minute,second;
    const float convdeg2min = 60;  //float for in computing totaldegrees not get int result.
    const float convmin2sec = 60;
    cout<<"Enter a latitude in degrees, minutes, and seconds:"<<endl;
    cout<<"First, enter the degrees: ";
    cin>>degree;
    cout<<"Next, enter the minutes of arc: ";
    cin>>minute;
    cout<<"Finally, enter the seconds of arc: ";
    cin>>second;
    float totaldegrees;
    totaldegrees = degree + (second/convmin2sec+minute)/convdeg2min;
    cout<<degree<<" degrees, "<<minute<<" minutes, "<<second<<" seconds = "<<totaldegrees<<" degrees"<<endl;

    return 0;
}



//题目：