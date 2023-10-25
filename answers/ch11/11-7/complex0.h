#ifndef COMPLEX0_H_
#define COMPLEX0_H_
#include <iostream>

class Complex {
 private:
  float real_v;
  float virtual_v;

 public:
  Complex(float r = 0, float v = 0);

  Complex operator+(const Complex& c) const;
  Complex operator-(const Complex& c) const;
  Complex operator*(const Complex& c) const;
  Complex operator*(double n);
  friend Complex operator*(double n, const Complex& c);
  friend Complex operator~(const Complex& c);
  friend std::istream& operator>>(std::istream& ins, Complex& c);
  friend std::ostream& operator<<(std::ostream& os, const Complex& c);
};

#endif