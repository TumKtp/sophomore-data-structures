#ifndef __STUDENT_H_
#define __STUDENT_H_
#include <bits/stdc++.h>
template <typename T>
void CP::vector<T>::insert_many(CP::vector<std::pair<int, T>> data)
{
  // write your code here
  mCap = data.size() + mSize;
  mSize = mCap;
  T *newV = new T[mCap]();
  sort(data.begin(), data.end());
  int idx = 0, oldIdx = 0, offSet = 0;
  for (int i = 0; i < mCap; i++)
  {
    if (i - offSet == data[idx].first)
    {
      newV[i] = data[idx].second;
      idx++;
      offSet++;
    }
    else
      newV[i] = mData[oldIdx++];
  }
  delete[] mData;
  mData = newV;
}

#endif