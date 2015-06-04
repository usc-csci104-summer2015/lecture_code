#include <iostream>
using namespace std;

class MyArray
{
 public:
  MyArray() { dat = NULL; len = 0; }
  MyArray(int d[], int num); //normal
  ~MyArray();
  int get(int loc) const     { return dat[loc]; }
  void set(int loc, int val) { dat[loc] = val;  }
  int getLen() const         { return len;      }
 private:
  int len; int *dat;

};
// Normal constructor
MyArray::MyArray(int d[], int num)
{
  dat = new int[num]; len = num;
  for(int i=0; i < len; i++){
    dat[i] = d[i];
  }
}


MyArray::~MyArray()
{
  // Add me back in
  //cout << "In destructor" << endl;
  //delete [] dat;
}
void printVals(MyArray arr)
{
  for(int i=0; i < arr.getLen(); i++){
    cout << arr.get(i) << " ";
  }
  cout << endl;
}

int main()
{
  int vals[] = {9,3,7,5};
  MyArray a1(vals,4);
  MyArray a2(a1); // calls default copy
  MyArray a3 = a1; // calls default copy
  MyArray a4; 
  a4 = a1; // calls default assignment
  // how are the contents of a2, a3, a4
  // related to a1

  return 0;
}
