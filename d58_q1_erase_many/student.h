#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::vector<T>::erase_many(const std::vector<int> &pos)
{
  // write your code here
  T *arr = new T[mSize - pos.size()]();
  int idx = 0, id = 0;
  for (int i = 0; i < mSize; i++)
  {
    // std::cout << i << pos[idx] << std::endl;
    if (i != pos[idx])
    {
      arr[id++] = mData[i];
    }
    else
    {
      idx++;
    }
  }
  mSize = mSize - pos.size();
  for (int i = 0; i < mSize; i++)
  {
    mData[i] = arr[i];
  }
}

#endif
