#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::vector<T>::insert(iterator position, iterator first, iterator last)
{
  // write your code here
  T *arr = new T[size() + last - first];

  int idx = 0;
  for (int i = 0; i < size(); i++)
  {
    if (i == position - begin())
    {
      auto j = first;
      while (j != last)
      {
        arr[idx++] = *j;
        j += 1;
      }
    }
    arr[idx++] = mData[i];
  }
  if (position == end())
  {
    auto j = first;
    while (j != last)
    {
      arr[idx++] = *j;
      j += 1;
    }
  }
  delete[] mData;
  mData = arr;
  mSize = size() + last - first;
  mCap = size() + last - first;
}

#endif