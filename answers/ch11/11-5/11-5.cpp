#include "stonewt.h"

int main() {
  using std::cout;
  using std::endl;
  Stonewt s1;
  Stonewt s2(5);
  Stonewt s3(2, 2.5);
  cout << "s1: " << s1 << endl;
  cout << "s2: " << s2 << endl;
  cout << "s3: " << s3 << endl;
  cout << "s2+s3 " << s2 + s3 << endl;
  cout << "s2-s3 " << s2 - s3 << endl;
  cout << "s2*s3 " << s2 * s3 << endl;
  cout << "s3*s2 " << s3 * s2 << endl;
  s1 = s2 + s3;
  cout << "s2+s3\n";
  s1.Mode_stone();
  cout << "Stone format: " << s1 << endl;
  s1.Mode_float_pds();
  cout << "Pounds float format: " << s1 << endl;
  s1.Mode_int_pds();
  cout << "Pounds int format: " << s1 << endl;

  return 0;
}