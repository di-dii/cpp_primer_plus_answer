#include "cow.h"
#include <cstring>
#include <iostream>

Cow::Cow(){
    hobby = new char[1];
    hobby[0] = '\0';
}

Cow::Cow(const char * nm, const char * ho, double wt){
    std::strcpy(name,nm);
    hobby = new char[std::strlen(ho)+1];
    std::strcpy(hobby,ho);
    weight = wt;
}

Cow::Cow(const Cow &c){
    hobby = new char[std::strlen(c.hobby)+1];
    std::strcpy(hobby,c.hobby);
    weight = c.weight;
    std::strcpy(name,c.name);
}

Cow::~Cow(){
    delete [] hobby;
}

Cow & Cow::operator=(const Cow & c){
    if(this==&c){
        return *this;
    }
    hobby = new char[std::strlen(c.hobby)+1];
    std::strcpy(hobby,c.hobby);
    weight = c.weight;
    std::strcpy(name,c.name);
    return *this;
}

void Cow::ShowCow() const{
    std::cout<<"name: "<<name;
    std::cout<<"\nhobby: "<<hobby;
    std::cout<<"\nweight: "<<weight<<'\n';
}