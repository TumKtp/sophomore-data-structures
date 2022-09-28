#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::vector<T>::rotate(iterator first, iterator last, size_t k)
{
  // write your code here
  int diff = first - last;
  if (diff == 0)
    return;
  int newK = k % diff;
  T *arr = new T[mSize]();
  auto it = begin();
  for (; it != first; it++)
  {
    arr[it - begin()] = *it;
  }
  if (last != end())
  {
    it = last;
    for (; it != end(); it++)
    {
      arr[it - begin()] = *it;
    }
  }

  it = first + newK;
  int idx = 0;
  for (; it != last; it++)
  {
    arr[(first - begin()) + idx] = *it;
    idx++;
  }
  it = first;
  for (; it != first + newK; it++)
  {
    arr[(first - begin()) + idx] = *it;
    idx++;
  }
  delete[] mData;
  mData = arr;
}

#endif

// 8 0 8 1 0 1 2 3 4 5 6 7
// 6 2 5 2 0 1 2 3 4 5