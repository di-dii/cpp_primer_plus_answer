#ifndef MOVE_H
#define MOVE_H

class Move{
private:
    double x;
    double y;
public:
    Move(double a=0,double b=0){x=a;y=b;}
    void showmove() const;
    Move add(const Move& m);
    void reset(double a=0,double b=0);
};

#endif