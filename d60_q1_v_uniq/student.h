#ifndef __STUDENT_H_
#define __STUDENT_H_

// you can include any other file here
// you are allow to use any data structure
#include <bits/stdc++.h>
using namespace std;

template <typename T>
void CP::vector<T>::uniq()
{
  // do someting here
  map<T, int> m;
  int cnt = 0, idx = 0;
  T *arr = new T[mSize]();
  for (int i = 0; i < mSize; i++)
  {
    if (m[mData[i]] == 0)
    {
      arr[idx++] = mData[i];
      m[mData[i]] = 1;
    }
    else
    {
      cnt++;
    }
  }
  mSize -= cnt;
  T *comArr = new T[mSize]();
  for (int i = 0; i < mSize; i++)
  {
    comArr[i] = arr[i];
  }
  delete[] mData;
  mData = comArr;
}

#endif
