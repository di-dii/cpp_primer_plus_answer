#include <cstring>
#include <iostream>
using namespace std;

template <typename T>
T maxn(T arr[], int cnt);

template <>
const char* maxn(const char* arr[], int cnt);

int main() {
  int test1[] = {1, 5, 2, 3, 9, 4};
  double test2[] = {1.6, 2.6, 3.6, 4.6};
  const char* test3[] = {"abc", "defg", "hijklmn", "opqr", "st"};
  cout << "max test1 is: " << maxn(test1, 6) << endl;
  cout << "max test2 is: " << maxn(test2, 4) << endl;
  cout << "max test3 is: " << maxn(test3, 5) << endl;

  return 0;
}

template <typename T>
T maxn(T arr[], int cnt) {
  T maxv = arr[0];
  for (int i = 0; i < cnt; i++) {
    maxv = max(maxv, arr[i]);
  }
  return maxv;
}

template <>
const char* maxn(const char* arr[], int cnt) {
  const char* ptr;
  size_t maxlen = 0;
  for (int i = 0; i < cnt; i++) {
    if (strlen(arr[i]) > maxlen) {
      maxlen = strlen(arr[i]);
      ptr = arr[i];
    }
  }
  return ptr;
}
// 题目：