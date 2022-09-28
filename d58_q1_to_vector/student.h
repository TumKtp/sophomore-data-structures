#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
std::vector<T> CP::queue<T>::to_vector(int k) const
{
  std::vector<T> res;
  // write your code only here
  //
  for (int i = 0; i < (k > mSize ? mSize : k); i++)
  {
    res.push_back(mData[(mFront + i) % mCap]);
  }
  return res;
}

template <typename T>
CP::queue<T>::queue(iterator from, iterator to)
{
  // write your code only here
  if (to > from)
  {
    queue();
  }
  auto it = from;
  // int capacity = 0;

  // for (; it != to; it++)
  // {
  //   capacity++;
  // }

  int capacity = to - from;
  T *arr = new T[capacity]();
  for (int i = 0; i < capacity; i++)
  {
    arr[i] = *(it + i);
  }
  mData = arr;
  mCap = capacity;
  mSize = capacity;
  mFront = 0;
}

#endif
