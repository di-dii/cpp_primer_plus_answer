#include "mytime.h"

// int hours;
// int minutes;

Time::Time() {
  hours = 0;
  minutes = 0;
}
Time::Time(int h, int m) {
  hours = h;
  minutes = m;
}
void Time::AddMin(int m) {
  minutes += m;
  hours += minutes / 60;
  minutes = minutes % 60;
}
void Time::AddHr(int h) { hours += h; }
void Time::Reset(int h, int m) {
  hours = h;
  minutes = m;
}

Time operator+(const Time t1, const Time t2) {
  int m = t1.minutes + t2.minutes;
  int h = t1.hours + t2.hours + m / 60;
  m %= 60;
  return Time(h, m);
}
Time operator-(const Time t1, const Time t2) {
  int m = t1.minutes - t2.minutes;
  int h = t1.hours - t2.hours;
  if (m < 0) {
    m += 60;
    h--;
  }
  return Time(h, m);
}
Time operator*(const Time t, double n) {
  int m = t.hours * n * 60 + t.minutes * n;
  int h = m / 60;
  m %= 60;
  return Time(h, m);
}
Time operator*(double n, const Time t) { return t * n; }
std::ostream& operator<<(std::ostream& os, const Time t) {
  os << t.hours << " hours, " << t.minutes << " minutes";
  return os;
}
