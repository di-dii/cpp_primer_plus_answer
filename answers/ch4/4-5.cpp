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
    CandyBar snack = {"Mocha Munch",2.3,350};
    cout<<"snack. \nbrand: "<<snack.brand
    <<"\nweight: "<<snack.weight
    <<"\nCal: "<<snack.Cal<<endl;
    return 0;
}




//题目：
