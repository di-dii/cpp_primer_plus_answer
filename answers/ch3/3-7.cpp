#include<iostream>
using namespace std;

int main()
{
    float Eoil,Uoil;
    const float gkm2mile = 62.14;
    const float gal2L = 3.875;
    cin>>Eoil;
    Uoil = 1/((Eoil/gkm2mile)/gal2L);
    cout<<Eoil<<" L/100km equa "<<Uoil<<" mpg."<<endl;    //题目中第二项应为 27mpg约为8.7L/100km.  
    return 0;
}



//题目：