#include "bankaccount.h"
#include <iostream>

BankAccount::BankAccount(const string p_name,const string p_accnum,double p_money)
{
    name = p_name;
    account_num = p_accnum;
    money = p_money;
}

void BankAccount::show_info() const{
    using namespace std;
    cout<<"user name: "<<name<<endl;
    cout<<"account: "<<account_num<<endl;
    std::streamsize prec = cout.precision(8);
    cout<<"money: "<<money<<endl;
    cout.precision(prec);
}

void BankAccount::save_money(double p_money){
    money += p_money;
}

bool BankAccount::extract_money(double p_money){
    if(p_money<=money){
        money -= p_money;
        return true;
    }else{
        std::cout<<"You have no enough money in account.\n";
        return false;
    }
}