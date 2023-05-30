#include<iostream>
#include<string>
using namespace std;

struct CandyBar
{
    string brand;
    float weight;
    int Cal;
};


int main()
{
    CandyBar* snack =new CandyBar[3];
    snack[0] = {"Mocha Munch",2.3,350};
    snack[1] = {"big rabbit",3.4,230};
    snack[2] = {"little rabbit",4.2,310};
     //{ {"Mocha Munch",2.3,350}, {"big rabbit",3.4,230}, {"little rabbit",4.2,310} };
    cout<<"snack0. \nbrand: "<<snack[0].brand<<"\nweight: "<<snack[0].weight<<"\nCal: "<<snack[0].Cal<<endl<<endl;   //can use loop
    cout<<"snack1. \nbrand: "<<snack[1].brand<<"\nweight: "<<snack[1].weight<<"\nCal: "<<snack[1].Cal<<endl<<endl;
    cout<<"snack2. \nbrand: "<<snack[2].brand<<"\nweight: "<<snack[2].weight<<"\nCal: "<<snack[2].Cal<<endl;
    return 0;
}




//题目：
