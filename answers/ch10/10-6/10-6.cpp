#include "move.h"

int main(){
    Move ma(1.3,2.6);
    ma.showmove();
    Move mb(2.7,5.4);
    Move mc = ma.add(mb);
    mc.showmove();
    mc.reset(99,99);
    mc.showmove();
    return 0;
}