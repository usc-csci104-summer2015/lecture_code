#include "complex.h"
#include <iostream>
using namespace std;

Complex::Complex()
{
  _real = 0;
  _imag = 0;
}

Complex::Complex(double r, double i)
{
  _real = r;
  _imag = i;
}  

Complex Complex::add(const Complex& rhs) const
{
  Complex temp;
  temp._real = _real + rhs._real;
  temp._imag = _imag + rhs._imag;
  return temp;
}

