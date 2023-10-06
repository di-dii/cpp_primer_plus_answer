#include "golf.h"

const int LenG = 5;
int main() {
  using namespace std;
  golf g_arr[LenG];
  int i = 0;
  while (i < LenG && setgolf(g_arr[i])==1) {
    i++;
  }

  for (int j = 0; j < i; j++) {
    showgolf(g_arr[j]);
  }

  golf g_sig;
  setgolf(g_sig,"Brilliant Job",23);
  showgolf(g_sig);

  return 0;
}