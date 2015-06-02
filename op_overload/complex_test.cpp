#include <iostream>
#include "complex.h"

using namespace std;

int main()
{
  Complex c1(2,3);
  Complex c2(4,5);

  Complex c3 = c1.add(c2);

  cout << c3.getReal() << "+" << c3.getImag() << "j" << endl;

  return 0;
}
