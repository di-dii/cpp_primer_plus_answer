#include "stonewt.h"

int main() {
  using std::cin;
  using std::cout;
  using std::endl;
  Stonewt swts[6] = {Stonewt(5.6), Stonewt(18, 6.5), Stonewt(16.3)};
  for (int i = 0; i < 3; i++) {
    cout << "enter the pounds: ";
    float pounds;
    cin >> pounds;
    swts[i + 3] = pounds;  // hidden convert
  }

  Stonewt comp_wt(11, 0);
  Stonewt mins, maxs;
  int cnt_large_11 = 0;
  mins = maxs = swts[0];

  for (auto x : swts) {
    if (x >= comp_wt) cnt_large_11++;
    if (x > maxs) maxs = x;
    if (x < mins) mins = x;
  }

  cout << "max wt: " << maxs;
  cout << "\nmin wt: " << mins;
  cout << "\n>=11 stones count: " << cnt_large_11 << endl;
  return 0;
}