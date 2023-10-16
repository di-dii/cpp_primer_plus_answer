#include "golf.h"

const int LenG = 5;
int main() {
  using namespace std;
  Golf g_arr[LenG];
  int i = 0;
  while (i < LenG && g_arr[i].setgolf()==1) {
    i++;
  }

  for (int j = 0; j < i; j++) {
    g_arr[j].showgolf();
  }

  Golf g_sig("Brilliant Job",23);
  g_sig.showgolf();

  return 0;
}