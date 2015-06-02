#ifndef COMPLEX_H
#define COMPLEX_H
#include <iostream>

class Complex
{
 public:
  Complex();
  Complex(double r, double i);
  double getReal() const { return _real; }
  double getImag() const { return _imag; }
  Complex add(const Complex& rhs) const;
  
 private:
  double _real;
  double _imag;
};

#endif
