#include <iostream>
#include <cstring>
#include "golf.h"

Golf::Golf( const char* name, int  hc){
    strcpy(fullname, name);
    handicap_ = hc;
}

int Golf::setgolf(){
    using namespace std;
    cout<<"Enter name and handicap: \n";
    char t_fullname[Len];
    int t_handicap;
    cin.getline(t_fullname,Len);
    if(t_fullname[0]=='\0') return 0;
    cin>>t_handicap;
    cin.get();
    *this = Golf(t_fullname,t_handicap);
    return 1;
}

void Golf::handicap(int hc){
    handicap_ = hc;
}

void Golf::showgolf() const{
    using namespace std;
    cout<<"name: "<<fullname<<", handicap: "<<handicap_<<endl;
}