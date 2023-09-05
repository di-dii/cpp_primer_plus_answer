#include <iostream>
using namespace std;

double *fill_array(double ar[], int limit);
void show_array(const double *ar, const double *arend);
void revalue(double r, double *ar, double *arend);

int main() {
  double properties[5];
  double *arend = fill_array(properties, 5);
  show_array(properties, arend);
  if (arend != properties) {
    double factor;
    while (!(cin >> factor)) {
      cin.clear();
      while (cin.get() != '\n') continue;
    }
    revalue(factor, properties, arend);
    show_array(properties, arend);
  }

  return 0;
}

double *fill_array(double ar[], int limit) {
  double temp;
  int i = 0;
  while (cin >> temp && i < limit && temp >= 0) {
    ar[i++] = temp;
  }
  return ar + i;
}
void show_array(const double *ar, const double *arend) {
  for (auto x = ar; x != arend; x++) cout << *x << ' ';
  cout << endl;
}
void revalue(double r, double *ar, double *arend) {
  for (auto x = ar; x != arend; x++) *x *= r;
}

// 题目：