#include <iostream>
using namespace std;

long double probability(unsigned numbers1, unsigned picks1, unsigned numbers2,
                        unsigned picks2);

int main() {
  unsigned numbers1, numbers2, picks1, picks2;
  while ((cin >> numbers1 >> numbers2 >> picks1 >> picks2) &&
         numbers1 >= picks1 && numbers2 >= picks2) {
    cout << "The chance you win is: "
         << probability(numbers1, picks1, numbers2, picks2) << endl;
  }

  return 0;
}

long double probability(unsigned numbers1, unsigned picks1, unsigned numbers2,
                        unsigned picks2) {
  long double p1 = 1.0, p2 = 1.0;
  int n, p;
  for (n = numbers1, p = picks1; p > 0; p--, n--) {
    p1 = p1 * n / p;
  }
  for (n = numbers2, p = picks2; p > 0; p--, n--) {
    p2 = p2 * n / p;
  }
  cout << p1 << p2 << endl;
  return p1 * p2;
}

// 题目：