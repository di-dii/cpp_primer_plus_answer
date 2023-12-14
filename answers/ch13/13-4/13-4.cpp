#include "port.h"

int main(){
    Port p1("Tay","Baijiu",50);
    VintagePort p2("Hugh",500,"The Nobel",1902);
    p1.Show();
    p2.Show();
    p1+=30;
    p1-=20;
    cout<<p1<<endl;
    cout<<p2<<endl;
    Port * ptr = &p2;
    ptr->Show();
    cout<<*ptr<<endl;

    return 0;
}