#include <iostream>
using namespace std;

struct CandyBar {
  char brand[20];
  float weight;
  int heat;
};

void set_candy(CandyBar& candy, const char* brand = "Millennium Munch",
               float weight = 2.85, int heat = 350);
void express_candy(const CandyBar& candy);

int main() {
  CandyBar candy;
  set_candy(candy);
  express_candy(candy);
  set_candy(candy, "Big rabbit");
  express_candy(candy);
  set_candy(candy, "Big rabbit", 6.8, 510);
  express_candy(candy);

  return 0;
}

void set_candy(CandyBar& candy, const char* brand, float weight, int heat) {
  int i;
  for (i = 0; brand[i] != '\0'; i++) candy.brand[i] = brand[i];
  candy.brand[i] = '\0';
  candy.weight = weight;
  candy.heat = heat;
}

void express_candy(const CandyBar& candy) {
  cout << "candy info:\nbrand: " << candy.brand << "\nweight: " << candy.weight
       << "\nheat: " << candy.heat << endl;
}

// 题目：