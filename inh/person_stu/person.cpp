#include <iostream>
#include <string>
#include "person.h"

using namespace std;

Person::Person() 
{
  cout << "In person, default constructor" << endl;
}

// Use constructor initialization list style
Person::Person(string myname, int myid) : name_(myname), id_(myid)
{
  cout << "In person, 2-arg constructor" << endl;

}

Person::~Person()
{
  cout << "In Person destructor" << endl;

}
string Person::get_name() 
{ 
  return name_; 
}

int Person::get_id() 
{ 
  return id_; 
}
