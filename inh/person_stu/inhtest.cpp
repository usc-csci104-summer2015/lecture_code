#include <iostream>
#include <string>
#include "person.h"
#include "student.h"
using namespace std;

int main()
{
  Person p1("Mark",10); 
  Student s1("Tommy",90);
  s1.add_grade(100);
  cout << "Person 1: " << p1.get_name() << " id: " << p1.get_id() << endl;
  cout << "Student 1: " << s1.get_name() << " id: " << s1.get_id() << endl;
  cout << "Student 1 grade: " << s1.get_grade(0) << endl;
  return 0;
}
