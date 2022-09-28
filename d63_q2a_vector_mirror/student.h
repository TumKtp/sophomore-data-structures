#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::vector<T>::mirror()
{
  // write your code here

  int lastSize = this->mSize;
  int newSize = this->mSize * 2;
  // std::cout << lastSize << newSize;
  expand(newSize);
  mSize = newSize;
  int idx = 1;
  for (int i = lastSize; i < newSize; i++)
  {
    this->mData[i] = this->mData[lastSize - idx];
    idx++;
  }
}

#endif
