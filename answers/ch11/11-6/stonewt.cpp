#include "stonewt.h"

Stonewt::Stonewt(float lbs) {
  pounds = lbs;
  mode = M_PD_F;
}
Stonewt::Stonewt(int stn, float lbs) {
  pounds = stn * 14 + lbs;
  mode = M_ST;
}
Stonewt::Stonewt() {
  pounds = 0;
  mode = M_PD_F;
}

Stonewt Stonewt::operator+(const Stonewt& s) const {
  Stonewt wt(pounds + s.pounds);
  wt.mode = mode;
  return wt;
}
Stonewt Stonewt::operator-(const Stonewt& s) const {
  Stonewt wt(pounds - s.pounds);
  wt.mode = mode;
  return wt;
}
Stonewt Stonewt::operator*(const Stonewt& s) const {
  Stonewt wt(pounds * s.pounds);
  wt.mode = mode;
  return wt;
}

// Stonewt& Stonewt::operator=(Stonewt& other)const{
//     if (this == &other) {
//             return other;
//     }
//     *this = other;
//     return other;
// }

std::ostream& operator<<(std::ostream& os, const Stonewt& s) {
  if (s.mode == Stonewt::M_ST) {
    os << int(s.pounds / s.Lbs_per_stn) << " stone, "
       << (int(s.pounds) % s.Lbs_per_stn) + s.pounds - int(s.pounds)
       << " pounds";
  } else if (s.mode == Stonewt::M_PD_I)
    os << int(s.pounds) << " pounds";
  else if (s.mode == Stonewt::M_PD_F)
    os << s.pounds << " pounds";
  else
    os << " Wrong mode!";
  return os;
}