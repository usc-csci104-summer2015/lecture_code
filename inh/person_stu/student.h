#ifndef STUDENT_H
#define STUDENT_H
#include <vector>
#include "person.h"
using namespace std;

class Student : public Person
{
 public:
  Student();
  Student(std::string myname);
  Student(std::string myname, int myid);
  ~Student();
  void add_grade(int score);
  int get_grade(int index);
private:
  std::vector<int> grades_;
};

#endif
