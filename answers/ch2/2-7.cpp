#include<iostream>
using namespace std;

void showtime(int hours, int minutes);

int main()
{
    int hours,minutes;
    cout<<"Enter the number of hours: ";
    cin>>hours;
    cout<<"Enter the number of minutes: ";
    cin>>minutes;
    showtime(hours,minutes);
    return 0;
}

void showtime(int hours, int minutes){
    cout<<"Time: "<<hours<<':'<<minutes<<endl;
}


//题目：