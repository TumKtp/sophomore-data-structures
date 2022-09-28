#ifndef __STACK_STUDENT_H__
#define __STACK_STUDENT_H__
#include "stack.h"

// DO NOT INCLUDE ANYTHING

template <typename T>
CP::stack<T>::stack(typename std::set<T>::iterator first, typename std::set<T>::iterator last)
{
  // write your code ONLY here
  if (first == last)
  {
  }
  int size = 0;

  for (auto it = first; it != last; it++)
  {
    size++;
  }
  mSize = size;
  mCap = size;

  T *arr = new T[size]();
  int idx = size - 1;
  auto it = first;
  while (it != last)
  {
    arr[idx--] = *it;
    it++;
  }
  mData = arr;
}

#endif
