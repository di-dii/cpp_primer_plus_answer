#include "list.h"
#include <iostream>

bool List::isempty(){
    return len==0;
}

bool List::isfull(){
    return len==LEN;
}

bool List::add(const Item& item){
    if(len<LEN){
        list[len++]=item;
        return true;
    }else{
        std::cout<<"add error! list is already full!\n";
        return false;
    }
}

void List::visit(void (*pf)(Item& )){
    for(int i=0;i<len;i++){
        (*pf)(list[i]);
    }
}