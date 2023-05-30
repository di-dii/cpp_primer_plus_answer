#include<iostream>
#include<string>
using namespace std;

struct Pizzainfo
{
    string CopName;
    float Diameter;
    float Weight;
};


int main()
{
    Pizzainfo PA;
    cout<<"Enter Pizza's CopName: ";
    getline(cin,PA.CopName);
    cout<<"Enter Pizza's Diameter: ";
    cin>>PA.Diameter;
    cout<<"Enter Pizza's Weight: ";
    cin>>PA.Weight;

    cout<<"\nPizza's CopName: "<<PA.CopName
    <<"\nPizza's Diameter: "<<PA.Diameter
    <<"\nPizza's Weight: "<<PA.Weight<<endl;
    return 0;
}




//题目：
