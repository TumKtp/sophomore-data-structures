#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
bool CP::vector<T>::operator<(const CP::vector<T> &other) const
{
  // write your code here
  //  if you use std::vector, your score will be half (grader will report score BEFORE halving)
  int idxA = 0, idxB = 0;
  int maxSize = 0;
  if (other.mSize > mSize)
  {
    maxSize = other.mSize;
  }
  else
  {
    maxSize = mSize;
  }

  for (int i = 0; i < maxSize; i++)
  {
    if (idxA == mSize && idxB == other.mSize)
      return false;
    else if (idxA == mSize)
    {
      return true;
    }
    else if (idxB == other.mSize)
    {
      return false;
    }

    if (mData[idxA] < other.mData[idxB])
    {
      return true;
    }
    if (mData[idxA] > other.mData[idxB])
    {
      return false;
    }
    idxA++;
    idxB++;
  }
  return false;
}

#endif
