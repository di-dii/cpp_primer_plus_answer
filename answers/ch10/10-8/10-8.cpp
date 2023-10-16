#include "list.h"
#include <iostream>

using namespace std;

void show_item(Item & item){
    cout<<item<<endl;
}

void double_item(Item & item){
    item *= 2;
}

int main(){
    List mylist;
    std::cout << std::boolalpha;
    cout<<"isempty: "<<mylist.isempty()<<endl;
    cout<<"isfull: "<<mylist.isfull()<<endl;
    mylist.add(5.5);
    mylist.add(6.6);
    mylist.visit(show_item);
    mylist.visit(double_item);
    mylist.visit(show_item);
    for(int i=0;i<List::LEN;i++)
        mylist.add(i);
    cout<<"isfull: "<<mylist.isfull()<<endl;
    return 0;
}