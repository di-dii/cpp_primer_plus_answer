#include "stack.h"

Stack::Stack(){
    top=0;
}

bool Stack::isempty(){
    return top == 0;
}

bool Stack::isfull(){
    return top == MAX;
}

bool Stack::push(const Item& item){
    if(top==MAX){
        return false;
    }
    items[top++] = item;
    return true;
}

bool Stack::pop(Item & item){
    if(top==0)
        return false;
    item = items[--top];
    return true;
}