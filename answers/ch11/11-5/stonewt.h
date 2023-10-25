#ifndef STONEWT_H_
#define STONEWT_H_
#include <iostream>

class Stonewt {
 private:
  enum { Lbs_per_stn = 14 };
  enum Mode { M_ST, M_PD_I, M_PD_F };
  Mode mode;
  // int stone;
  // int pds_left;
  float pounds;

 public:
  Stonewt(float lbs);
  Stonewt(int stn, float lbs);
  Stonewt();
  void Mode_stone() { mode = M_ST; }
  void Mode_int_pds() { mode = M_PD_I; }
  void Mode_float_pds() { mode = M_PD_F; }

  Stonewt operator+(const Stonewt& s) const;
  Stonewt operator-(const Stonewt& s) const;
  Stonewt operator*(const Stonewt& s) const;

  friend std::ostream& operator<<(std::ostream& os, const Stonewt& s);
};

#endif