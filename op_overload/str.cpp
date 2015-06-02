#include <iostream>
#include <cstring>
#include <stdexcept>
#include "str.h"

Str::Str()
{
  _data = NULL;
}

Str::Str(const char* s)
{
  int len = strlen(s);
  _data = new char[len+1];
  strcpy(_data, s);
}

Str::Str(const Str& s)
{
  int len = strlen(s._data);
  _data = new char[len+1];
  strcpy(_data, s._data);
  
}
Str& Str::operator=(const Str& s)
{
  if( this == &s ) return *this;
  if(_data != NULL) delete [] _data;
  int len = strlen(s._data);
  _data = new char[len+1];
  strcpy(_data, s._data);
  return *this;
}

Str::~Str()
{
  delete [] _data;
}

size_t Str::size() const
{
  return strlen(_data);
}

char& Str::operator[](unsigned int i) 
{
  if(i >= strlen(_data) ){
    throw std::out_of_range("Index is out of range");
  }
  return _data[i];
}

bool Str::operator==(const Str& rhs)
{
  return (strcmp(_data, rhs._data) == 0);
}

Str Str::operator+(const Str& rhs)
{
  int len1 = size();
  int len2 = strlen(rhs._data);
  char* temp = new char[len1+len2+1];
  strcpy(temp, _data);
  strcpy(temp+len1, rhs._data);
  Str s1;
  s1._data = temp;
  return s1;
}

// s1 + "world"
Str Str::operator+(const char* rhs)
{

}

// cout << s1;
