#include "bankaccount.h"

int main(){
    BankAccount John("John Smith","100111000011001",569000.7);
    John.show_info();
    John.save_money(999.3);
    John.extract_money(70000);
    John.extract_money(9999999);
    John.show_info();

    return 0;
}