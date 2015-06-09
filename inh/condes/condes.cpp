#include <iostream>
using namespace std;

class A {
  int a;
public:
  A()  { a=0; cout << "A:" << a << endl; }
  ~A() { cout << "~A" << endl; }
  A(int mya) { a = mya; cout << "A:" << a << endl; }
};

class B : public A {
  int b;
public:
  B()  { b = 0; cout << "B:" << b << endl; }
  ~B() { cout << "~B "; }
  B(int myb) { b = myb; cout << "B:" << b << endl; }
};

class C : public B {
  int c;
public:
  C()  { c = 0; cout << "C:" << c << endl; }
  ~C() { cout << "~C "; }
  C(int myb, int myc) : B(myb) { c = myc; cout << "C:" << c << endl; }
};

int main()
{
  cout << "Allocating a B object" << endl;
  B b1;
  cout << "Allocating first C object" << endl;
  C* c1 = new C;
  cout << "Allocating second C object" << endl;
  C c2(4,5);
  cout << "Deleting c1 object" << endl;
  delete c1;
  cout << "Quitting" << endl;
  return 0;
}
