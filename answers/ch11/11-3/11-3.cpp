#include <climits>
#include <cstdlib>  //rand, srand
#include <ctime>
#include <fstream>
#include <iostream>

#include "vect.h"

int main() {
  using namespace std;
  using VECTOR::Vector;
  srand(time(0));
  double direction;
  Vector step;
  Vector result(0, 0);
  unsigned long steps = 0;
  double target;
  double dstep;
  int cnts = 0;
  double sum_step = 0;
  int maxstep = 0;
  int minstep = INT_MAX;
  cout << "Enter test times: ";
  cin >> cnts;
  int t = cnts;
  while (t-- > 0) {
    cout << "test" << cnts - t << ":\n"
         << "Enter target distance: ";
    cin >> target;
    cout << "Enter step length: ";
    if (!(cin >> dstep)) break;
    cout << "Targer Distance: " << target << ", Step Size: " << dstep << endl;
    while (result.magval() < target) {
      direction = rand() % 360;
      step.reset(dstep, direction, Vector::POL);
      result = result + step;
      steps++;
    }
    if (steps >= maxstep) maxstep = steps;
    if (steps <= minstep) minstep = steps;
    sum_step += steps;
    steps = 0;
    result.reset(0, 0);
  }
  cout << "Test over!\n";
  cin.clear();
  while (cin.get() != '\n') continue;
  cout << "\nREPORT:\nMax step takes: " << maxstep
       << "\nMin step takes: " << minstep
       << "\nAverage step is: " << sum_step / cnts << endl;

  return 0;
}