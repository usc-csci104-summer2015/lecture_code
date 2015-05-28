#include <iostream>
#include <string>
using namespace std;

class A {
private:
  string astr;
public:
  A() { cout << "In A default constructor" << endl; astr = "hi"; }
  A(string a) { cout << "In A regular constructor=" << a << endl; astr = a; }
  A(const A& a) { cout << "A Copy constructor" << endl; astr = a.astr; }
  A& operator=(const A& a) { cout << "A = other A" << endl; 
                             astr = a.astr; return *this; }
  A& operator=(string x) { cout << "A = str op" << endl; 
                           astr = x; return *this; }
  ~A() { cout << "In A destructor" << endl; }
};

class B1 {
private:
  A _a;
public:
  B1() { cout << "In B1 default constructor" << endl; _a = "bye1";  }
  B1(string a) {cout << "In B1 regular constructor" << endl; _a = a;  }
  ~B1() { cout << "In B1 destructor" << endl; }
};

class B2 {
private:
  A _a;
public:
  B2() :_a("bye2"){ cout << "In B2 default constructor" << endl;  }
  B2(string a) :_a(a) {cout << "In B2 regular constructor" << endl;  }
  ~B2() { cout << "In B2 destructor" << endl; }
};

int main()
{
  B1 w;
  cout << endl;
  B1 x("CS104");
  cout << endl;
  B2 y;
  cout << endl;
  B2 z("cool");
  cout << endl;
  return 0;
}
