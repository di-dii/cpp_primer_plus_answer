#include "stack.h"
#include <iostream>


int main(){
    Stack s1(5);
    std::cout <<"s1.isempty(): "<<s1.isempty()<<'\n';
    s1.push(111);
    s1.push(222);
    s1.push(333);
    s1.push(444);
    if(!s1.push(555)) std::cout<<"s1.push(555) false\n";
    if(!s1.push(666)) std::cout<<"s1.push(666) false\n";
    std::cout <<"s1.full(): "<<s1.isfull()<<'\n';
    Stack s2(s1);
    Stack s3 = s1;
    std::cout <<"s2.full(): "<<s2.isfull()<<'\n';
    Item x;
    s2.pop(x);
    std::cout << "s2.pop(): "<<x<<'\n';
    std::cout <<"s2.full(): "<<s2.isfull()<<'\n';
    std::cout <<"s3.full(): "<<s3.isfull()<<'\n';
    s3.pop(x);
    std::cout << "s3.pop(): "<<x<<'\n';
    std::cout <<"s3.full(): "<<s3.isfull()<<'\n';
    std::cout <<"s1.full(): "<<s1.isfull()<<'\n';

    return 0;
}