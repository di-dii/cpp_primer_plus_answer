#include <iostream>
using namespace std;

int Fill_array(double *arr, int len);
void Show_array(double *arr, int n);
void Reverse_array(double *arr, int n);

int main() {
  double arr[10];
  int n;
  n = Fill_array(arr, 10);
  Show_array(arr, n);
  Reverse_array(arr, n);
  Show_array(arr, n);
  Reverse_array(arr + 1, n - 2);
  Show_array(arr, n);
  return 0;
}

int Fill_array(double *arr, int len) {
  int i = 0;
  double temp;
  while (cin >> temp && i < len) {
    arr[i++] = temp;
  }
  return i;
}
void Show_array(double *arr, int n) {
  for (int i = 0; i < n; i++) cout << arr[i] << ' ';
  cout << endl;
}
void Reverse_array(double *arr, int n) {
  for (int i = 0, j = n - 1; i < j; i++, j--) std::swap(arr[i], arr[j]);
}

// 题目：