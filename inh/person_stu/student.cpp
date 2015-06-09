#include <iostream>
#include <vector>
#include <string>
#include "student.h"

using namespace std;
Student::Student() 
{
  cout << "In student default constructor" << endl;
}

// Use constructor initialization list style
Student::Student(string myname) : Person(myname, -1)
{ 
  cout << "In student 1-arg constructor" << endl;
}

Student::Student(string myname, int myid) : Person(myname, myid)
{
  cout << "In student 2-arg constructor" << endl;
}

Student::~Student()
{
  cout << "IN Student destructor" << endl;
}
void Student::add_grade(int score)
{
  grades_.push_back(score);
}

int Student::get_grade(int index)
{
  return grades_[index];
}
