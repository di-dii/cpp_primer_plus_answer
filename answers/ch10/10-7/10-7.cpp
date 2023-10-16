#include "plorg.h"

int main(){
    Plorg pg;
    pg.show_info();
    Plorg pg2("Good one",55);
    pg2.show_info();
    pg2.set_CI(124);
    pg2.show_info();
    return 0;
}