#ifndef PERSON_H
#define PERSON_H
#include <string>

class Person {
 public:
  Person();
  Person(std::string myname, int myid);
  ~Person();
  std::string get_name();
  int get_id();
 private:
  std::string name_;
  int id_;
};

#endif
