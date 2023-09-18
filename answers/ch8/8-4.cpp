#include <iostream>
using namespace std;
#include <cstring>
struct stringy {
  char* str;
  int ct;
};

void set(stringy& stry, const char* cstr);
void show(const stringy& stry, int times = 1);
void show(const char* cstr, int times = 1);

int main() {
  stringy beany;
  char testing[] = "Reality is's what it used to be.";

  set(beany, testing);
  show(beany);
  show(beany, 2);
  testing[0] = 'D';
  testing[1] = 'u';
  show(testing);
  show(testing, 3);
  show("Done");

  return 0;
}

void set(stringy& stry, const char* cstr) {
  int i = 0;
  for (; cstr[i] != '\0'; i++)
    ;
  stry.str = new char[i + 1];
  for (int j = 0; j < i; j++) stry.str[j] = cstr[j];
  stry.str[i] = '\0';
  stry.ct = i;
}

void show(const stringy& stry, int times) {
  for (int i = 0; i < times; i++) cout << stry.str << endl;
}

void show(const char* cstr, int times) {
  for (int i = 0; i < times; i++) cout << cstr << endl;
}
// 题目：