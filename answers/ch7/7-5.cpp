#include <iostream>
using namespace std;

long double factorial(unsigned n);

int main() {
  unsigned n;
  while (cin >> n) {
    long double res = factorial(n);
    cout << n << "! = " << res << endl;
  }
  return 0;
}

long double factorial(unsigned n) {
  long double ans = 1.0;
  while (n > 0) {
    ans *= n;
    n--;
  }
  return ans;
}

// 题目：