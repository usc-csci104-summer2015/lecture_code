#include <iostream>

struct Item{
  int val;
  Item* next;
};

int findMax(Item* head);


int main()
{
  Item* head;
  int max = findMax(head);
  cout << max << endl;
  return 0;
}
