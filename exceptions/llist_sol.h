#ifndef LLIST_H
#define LLIST_H
#include <stdexcept>

template <typename T>
struct Item {
  T val;
  Item<T> *next;
};

template <typename T>
class LList {
 public:
  LList();
  ~LList();
  bool empty() const;
  int size() const;
  void insert(int loc, T val);
  void pop(int loc);
  T& get(int loc);
  T const & get(int loc) const;
 private:
  Item<T> *getNodeAt(int loc) const;

 private:
  Item<T> *head_;
  int size_;

 public:
  class iterator {
  private:
    Item<T>* curr_;
    iterator(Item<T>* init) : curr_(init) {   }
  public:
    friend class LList<T>;
    // pre-inc  ++a - b (returns itself)
    iterator& operator++() { curr_=curr_->next; return *this ;     }
    // post-inc  a++ - b
    iterator operator++(int) { iterator tmp(curr_);  curr_=curr_->next;
                               return tmp;   }
    // Add operator*
    T& operator*() { return curr_->val;  }
    // Add operator->
    T* operator->() { return &curr_->val; }
    bool operator!=(const iterator & other) { return curr_ != other.curr_; }
    bool operator==(const iterator & other) { return curr_ == other.curr_; }
  };
  iterator begin() { iterator it(head_); return it;    }
  iterator end() { iterator it(NULL); return it;    }
};

template <typename T>
LList<T>::LList()
{
  head_ = NULL;
  size_ = 0;
}

template <typename T>
LList<T>::~LList()
{
  while(head_ != NULL){
    Item<T> *temp = head_->next;
    delete head_;
    head_ = temp;
  }
}

template <typename T>
bool LList<T>::empty() const
{
  return head_ == NULL;
}

template <typename T>
int LList<T>::size() const
{
  return size_;
}


template <typename T>
void LList<T>::insert(int loc, T val)
{
  if(!head_ && loc != 0){
    throw std::invalid_argument("bad location");
  }
  else if(loc == 0){
    Item<T> *old_head = head_;
    head_ =  new Item<T>;
    head_->val = val;
    head_->next = old_head;
    size_++;
  }
  else {
    Item<T> *temp = getNodeAt(loc-1);
    Item<T> *newitem = new Item<T>;
    newitem->val = val;
    newitem->next = temp->next;
    temp->next = newitem;
    size_++;
  }
}


template <typename T>
void LList<T>::pop(int loc)
{
  if(!head_){
    throw std::invalid_argument("bad location");
  }
  Item<T> *temp = head_;
  if(loc == 0){
    // take the Item out of the list
    head_ = head_->next;
    delete temp;
  }
  else {
    temp = getNodeAt(loc-1);
    Item<T> *to_pop = temp->next;
    temp->next = to_pop->next;  
    delete to_pop;
  }
  size_--;
}


template <typename T>
T& LList<T>::get(int loc)
{
  Item<T> *temp = getNodeAt(loc);
  return temp->val;
}

template <typename T>
T const & LList<T>::get(int loc) const
{
  Item<T> *temp = getNodeAt(loc);
  return temp->val;
}

template <typename T>
Item<T>* LList<T>::getNodeAt(int loc) const
{
  Item<T> *temp = head_;
  while(temp && loc != 0){
    temp = temp->next;
    loc--;
  }
  if(loc != 0){
    throw std::invalid_argument("bad location");
  }
  return temp;
}

#endif
