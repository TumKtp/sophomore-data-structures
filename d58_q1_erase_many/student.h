#ifndef __STUDENT_H_
#define __STUDENT_H_
#include <bits/stdc++.h>
using namespace std;
template <typename T>
void CP::vector<T>::erase_many(const std::vector<int> &pos)
{
  // write your code here
  T *arr = new T[mSize - pos.size()]();
  int idx = 0, id = 0;
  std::set<int> temp;
  for (int i = 0; i < pos.size(); i++)
    temp.insert(pos[i]);

  for (int i = 0; i < mSize; i++)
  {
    bool chk = false;
    auto it = temp.find(i);

    if (it == temp.end() || *it != i)
    {
      arr[id++] = mData[i];
    }
  }
  delete[] mData;
  mSize = mSize - pos.size();
  mCap = mSize;
  mData = arr;
}

#endif