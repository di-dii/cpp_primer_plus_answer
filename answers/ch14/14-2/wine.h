#include<string>
#include<valarray>
#include<utility>
#include<iostream>

typedef std::valarray<int> ArrayInt;
typedef std::pair<ArrayInt,ArrayInt> PairArray;

class Wine : private PairArray{
private:
    std::string name;
    //PairArray years_bottles;
    int years;
public:
    Wine();
    Wine(const char* l, int y, const int yr[],const int bot[]);
    Wine(const char* l, int y);
    void GetBottles();
    std::string& Label();
    int sum();
    void Show();
};