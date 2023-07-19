#include<iostream>
#include<string>
using namespace std;

struct car{
    string MakeCop;
    int Year;
};

int main()
{
    int n;
    cout<<"How many cars do you wish to catalog? ";
    cin>>n;
    car* cars = new car[n];
    for(int i=0;i<n;i++){
        cout<<"Car #"<<i+1<<":\n";
        cout<<"Please enter the make: ";
        cin.get();
        getline(cin,cars[i].MakeCop);
        cout<<"Please enter the year made: ";
        cin>>cars[i].Year;
    }
    cout<<"Here is your collection:\n";
    for(int i=0;i<n;i++){
        cout<<cars[i].Year<<" "<<cars[i].MakeCop<<endl;
    }

    return 0;
}



//题目：