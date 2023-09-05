#include <iostream>
using namespace std;

float comp_F(int a, int b);

int main() {
  int a, b;
  cin >> a >> b;
  while (a != 0 && b != 0) {
    float ans = comp_F(a, b);
    cout << "the harmonic mean of " << a << " and " << b << " is: " << ans
         << endl;
    cin >> a >> b;
  }
  return 0;
}

float comp_F(int a, int b) { return 2.0 * a * b / (a + b); }

// 题目：