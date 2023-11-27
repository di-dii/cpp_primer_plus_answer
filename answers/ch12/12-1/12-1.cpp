#include "cow.h"

int main(){
    Cow c1;
    Cow c2("fang","eat grass",120);
    Cow c3(c2);
    {
        Cow c4 = c2;
        c4.ShowCow();
    }
    c3.ShowCow();

    return 0;
}