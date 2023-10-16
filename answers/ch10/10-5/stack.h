#ifndef STACK_H
#define STACK_H
#include <cstring>

struct custormer
{
    /* data */
    char fullname[35];
    double payment;
    custormer(){}
    custormer(const char p_name[],const double p_pay){
        strcpy(fullname, p_name);
        payment = p_pay;
    }
};

typedef custormer Item;

class Stack{
private:
    enum {MAX = 10};
    Item items[MAX];
    int top;
public:
    Stack();
    bool isempty();
    bool isfull();
    bool push(const Item &item);
    bool pop(Item &item);
};

#endif