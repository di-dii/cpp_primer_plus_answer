#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    const int convfeet2inch = 12;
    const float convinch2meter = 0.0254;
    const float convpounds2kg = 1/2.2;
    float Hinch,Hfeet,Wpounds,Wkg,Hmeter;
    cin>>Hfeet;
    cin>>Hinch;
    cin>>Wpounds;
    float BMI;
    Hmeter = (Hfeet*convfeet2inch+Hinch)*convinch2meter;
    BMI = Wpounds*convpounds2kg / pow(Hmeter,2);
    cout<<"BMI is: "<<BMI<<endl;
    
    return 0;
}



//题目：