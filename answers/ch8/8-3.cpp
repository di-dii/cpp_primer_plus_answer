#include <cctype>
#include <iostream>
#include <string>
using namespace std;

void toupperS(string& str);

int main() {
  string str;
  std::getline(std::cin, str);
  while (str != "q") {
    toupperS(str);
    cout << str << endl;
    std::getline(std::cin, str);
  }

  return 0;
}

void toupperS(string& str) {
  for (int i = 0; i < str.size(); i++) {
    str[i] = toupper(str[i]);
  }
}

// 题目：