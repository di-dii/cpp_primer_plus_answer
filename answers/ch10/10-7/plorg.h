#ifndef PLORG_H
#define PLORG_H

class Plorg{
private:
    char name[19];
    int CI;
public:
    Plorg(const char p_name[]="Plorg", int p_ci=50);
    void set_CI(int ci);
    void show_info() const;
};


#endif