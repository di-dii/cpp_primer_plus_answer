#ifndef GOLF_H
#define GOLF_H

class Golf{
private:
    static const int Len = 40;
    char fullname[Len];
    int handicap_;
public:
    Golf(){}
    Golf(const char* name, int  hc);
    int setgolf();
    void handicap(int hc);
    void showgolf() const;
};

#endif