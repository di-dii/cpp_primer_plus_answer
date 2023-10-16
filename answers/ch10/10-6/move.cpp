#include "move.h"
#include <iostream>

void Move::showmove() const{
    std::cout<<"x: "<<x<<", y: "<<y<<std::endl;
}
Move Move::add(const Move& m){
    return Move(x+m.x,y+m.y);
}
void Move::reset(double a,double b){
    x=a;
    y=b;
}