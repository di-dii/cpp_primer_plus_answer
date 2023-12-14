#ifndef CLASSIC_H_
#define CLASSIC_H_
#include <cstring>
#include <iostream>

class Cd{
private:
    char performers[50];
    char label[20];
    int selections;
    double playtime;
public:
    Cd(const char* s1,const char* s2, int n,double x);
    //Cd(const Cd &d);
    Cd(){};
    //~Cd();
    virtual void Report() const;
    //Cd & operator=(const Cd &d);
};

class Classic:public Cd{
private:
    char mainwork[50];
public:
    Classic(){};
    Classic(const char* s0,const char* s1,const char* s2, int n,double x);
    //~Classic();
    virtual void Report() const;
};

#endif