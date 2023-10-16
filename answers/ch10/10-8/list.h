#ifndef LIST_H
#define LIST_H

typedef float Item;

class List{
public:
    static const int LEN = 10;
private:
    Item list[LEN];
    int len;
public:
    List(){len=0;};
    bool isempty();
    bool isfull();
    bool add(const Item& item);
    void visit(void (*pf)(Item& ));
};

#endif