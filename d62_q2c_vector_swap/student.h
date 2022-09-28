#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>

template <typename T>
void CP::vector<T>::swap(CP::vector<T> &other)
{
  // your code here
  T tempSize = other.mSize;
  T tempCap = other.mCap;
  T *tempData = (other.mData);
  other.mSize = mSize;
  other.mCap = mCap;
  other.mData = mData;
  mSize = tempSize;
  mCap = tempCap;
  mData = tempData;
}

#endif
