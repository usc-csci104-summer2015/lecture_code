#include <iostream>
#include "llist.h"

using namespace std;

void print_all(const LList<int>& lst)
{
 for(LList<int>::iterator it = lst.begin();
      it != lst.end();
      ++it
      )
   { 
      cout << *it << endl;
   }
 
}

int main()
{
  LList<int> lst;
  for(int i=0; i < 5; i++){
    lst.insert(i, i);
  }
  for(int i=0; i < 5; i++){
    lst.insert(0, i+10);
  }
  for(LList<int>::iterator it = lst.begin(); it != lst.end(); ++it){
    cout << *it << endl;
  }

  print_all(lst);

  for(int i=0; i < 10; i++){
    lst.pop(0);
  }
  return 0;
}
