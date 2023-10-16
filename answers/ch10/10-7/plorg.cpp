#include "plorg.h"
#include <cstring>
#include <iostream>

Plorg::Plorg(const char p_name[], int p_ci){
    std::strcpy(name,p_name);
    CI = p_ci;
}
void Plorg::set_CI(int ci){
    CI = ci;
}
void Plorg::show_info() const{
    std::cout<<"name: "<<name<<" , CI: "<<CI<<std::endl;
}