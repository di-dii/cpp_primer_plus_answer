#include "classic.h"

Cd::Cd(){
    performers = new char[1];
    performers[0] = '\0';
    label = new char[1];
    label[0] ='\0';
}
Cd::~Cd(){
    delete [] performers;
    delete [] label;
}

Cd::Cd(const Cd& d){
    performers = new char[std::strlen(d.performers)+1];
    label = new char[std::strlen(d.label)+1];
    std::strcpy(performers,d.performers);
    std::strcpy(label,d.label);   
    selections = d.selections;
    playtime = d.playtime;
}

Cd::Cd(const char* s1,const char* s2, int n,double x){
    performers = new char[std::strlen(s1)+1];
    label = new char[std::strlen(s2)+1];
    std::strcpy(performers,s1);
    std::strcpy(label,s2);
    selections = n;
    playtime = x;    
}

Cd & Cd::operator=(const Cd &d){
    if(this==&d){
        return *this;
    }
    delete [] performers;
    delete [] label;
    performers = new char[std::strlen(d.performers)+1];
    label = new char[std::strlen(d.label)+1];
    std::strcpy(performers,d.performers);
    std::strcpy(label,d.label);   
    selections = d.selections;
    playtime = d.playtime;
    return *this;
}

void Cd::Report() const{
    using std::cout;
    cout<<"performers: "<<performers<<'\n';
    cout<<"label: "<<label<<'\n';
    cout<<"selections: "<<selections<<'\n';
    cout<<"playtime: "<<playtime<<'\n';
}


Classic::Classic():Cd(){
    mainwork = new char[1];
    mainwork[0] = '\0';
}

Classic::Classic(const char* s0,const char* s1,const char* s2, int n,double x):Cd(s1,s2,n,x){
    mainwork = new char[std::strlen(s0)+1];
    std::strcpy(mainwork,s0);
}

Classic & Classic::operator=(const Classic &d){
    if(this==&d)
        return *this;
    Cd::operator=(d);
    delete [] mainwork;
    mainwork = new char[std::strlen(d.mainwork)+1];
    std::strcpy(mainwork,d.mainwork);
    return *this;
}

void Classic::Report() const{
    Cd::Report();
    std::cout<<""<<mainwork<<'\n';
}

Classic::~Classic(){
    delete [] mainwork;
}