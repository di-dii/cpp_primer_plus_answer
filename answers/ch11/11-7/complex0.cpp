#include "complex0.h"

//     float real_v;
//     float virtual_v;
// public:

Complex::Complex(float r, float v) {
  real_v = r;
  virtual_v = v;
}

Complex Complex::operator+(const Complex& c) const {
  return Complex(real_v + c.real_v, virtual_v + c.virtual_v);
}
Complex Complex::operator-(const Complex& c) const {
  return Complex(real_v - c.real_v, virtual_v - c.virtual_v);
}
Complex Complex::operator*(const Complex& c) const {
  return Complex(real_v * c.real_v - virtual_v * c.virtual_v,
                 real_v * c.virtual_v + virtual_v * c.real_v);
}
Complex Complex::operator*(double n) {
  return Complex(n * real_v, n * virtual_v);
}
Complex operator*(double n, const Complex& c) { return c * n; }
Complex operator~(const Complex& c) { return Complex(c.real_v, -c.virtual_v); }
std::istream& operator>>(std::istream& ins, Complex& c) {
  std::cout << "input real part: ";
  if (!(ins >> c.real_v)) return ins;
  std::cout << "input virtual part: ";
  ins >> c.virtual_v;
  return ins;
}
std::ostream& operator<<(std::ostream& os, const Complex& c) {
  os << '(' << c.real_v << ',' << c.virtual_v << "i)";
  return os;
}
