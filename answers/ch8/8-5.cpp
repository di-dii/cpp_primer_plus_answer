#include <iostream>
using namespace std;

template <typename T>
T max5(T arr[]);

int main() {
  int test1[] = {1, 5, 2, 3, 4};
  double test2[] = {1.6, 5.6, 2.6, 3.6, 4.6};
  cout << "max test1 is: " << max5(test1) << endl;
  cout << "max test2 is: " << max5(test2) << endl;

  return 0;
}

template <typename T>
T max5(T arr[]) {
  T maxv = arr[0];
  for (int i = 0; i < 5; i++) {
    maxv = max(maxv, arr[i]);
  }
  return maxv;
}
// 题目：