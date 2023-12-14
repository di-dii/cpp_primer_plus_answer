#include "classic.h"

Cd::Cd(const char* s1,const char* s2, int n,double x){
    std::strcpy(performers,s1);
    std::strcpy(label,s2);
    selections = n;
    playtime = x;    
}

void Cd::Report() const{
    using std::cout;
    cout<<"performers: "<<performers<<'\n';
    cout<<"label: "<<label<<'\n';
    cout<<"selections: "<<selections<<'\n';
    cout<<"playtime: "<<playtime<<'\n';
}

Classic::Classic(const char* s0,const char* s1,const char* s2, int n,double x):Cd(s1,s2,n,x){
    std::strcpy(mainwork,s0);
}

void Classic::Report() const{
    Cd::Report();
    std::cout<<""<<mainwork<<'\n';
}