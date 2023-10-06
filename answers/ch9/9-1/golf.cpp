#include <iostream>
#include <cstring>
#include "golf.h"

void setgolf(golf& g, const char* name, int  hc){
    strcpy(g.fullname, name);
    g.handicap = hc;
}

int setgolf(golf& g){
    using namespace std;
    cout<<"Enter name and handicap: \n";
    cin.getline(g.fullname,Len);
    if(g.fullname[0]=='\0') return 0;
    cin>>g.handicap;
    cin.get();
    return 1;
}

void handicap(golf& g, int hc){
    g.handicap = hc;
}

void showgolf(const golf& g){
    using namespace std;
    cout<<"name: "<<g.fullname<<", handicap: "<<g.handicap<<endl;
}