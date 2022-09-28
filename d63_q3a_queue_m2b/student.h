#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <iostream>

template <typename T>
void CP::queue<T>::move_to_back(size_t pos)
{
  // write your code here
  int temp = mData[(mFront + pos) % mCap];

  for (int i = 0; i < (mSize - pos); i++)
  {
    mData[(mFront + pos + i) % mCap] = mData[(mFront + pos + i + 1) % mCap];
  }
  mData[(mFront + mSize - 1 + mCap) % mCap] = temp;
}

#endif
