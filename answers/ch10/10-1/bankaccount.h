#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H
#include <string>

using std::string;
class BankAccount {
 private:
  string name;
  string account_num;
  double money;

 public:
  BankAccount(const string p_name, const string p_accnum, double p_money);
  void show_info() const;
  void save_money(double p_money);
  bool extract_money(double p_money);
};

#endif