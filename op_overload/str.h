#ifndef STR_H
#define STR_H
#include <iostream>

class Str {
 public:
  Str();
  Str(const char* s);
  Str(const Str& s);
  ~Str();
  Str& operator=(const Str& s);
  // s += " more"
  Str& operator+=(const char* s);

  // s += t
  Str& operator+=(const Str& s);

  size_t size() const;
  // str s1;  s1[2] = 'X';
  char& operator[](unsigned int i);
  // str s1, s2;  s1 == s2
  bool operator==(const Str &rhs);
  // str s1, s2;  s1+s2
  Str operator+(const Str& rhs);
  // str s1; s1 + " world"
  Str operator+(const char* rhs  );
  private:
  char* _data;

};

#endif
