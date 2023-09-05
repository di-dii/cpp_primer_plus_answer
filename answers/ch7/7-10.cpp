#include <iostream>
using namespace std;

double add(double x, double y);
double multi(double x, double y);
double calculate(double x, double y, double (*func)(double, double));

int main() {
  double add_v = calculate(2.5, 4, add);
  double multi_v = calculate(2.5, 4, multi);
  cout << "two numbers: 2.5  4 \n";
  cout << "add result: " << add_v << endl;
  cout << "multiply result: " << multi_v << endl;

  return 0;
}

double add(double x, double y) { return x + y; }
double multi(double x, double y) { return x * y; }
double calculate(double x, double y, double (*func)(double, double)) {
  return func(x, y);
}

// 题目：