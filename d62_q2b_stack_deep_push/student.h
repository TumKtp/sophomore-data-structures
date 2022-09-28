#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::stack<T>::deep_push(size_t pos, const T &value)
{
  // write your code here
  ensureCapacity(mSize + 1);
  if (pos > mSize)
    pos = mSize;
  int diff = mSize - pos;
  int idx = 0;
  bool chk = false;
  for (int i = 0; i < diff; i++)
  {
    if (i == mSize - pos)
    {
      mData[idx++] = mData[i];
    }
  }
  for (int i = 0; i <= pos; i++)
  {
    // printf("- %d %d\n", mSize + 1 - i, mData[mSize + 1 - i]);
    mData[mSize + 1 - i] = mData[mSize - i];
  }
  mData[diff] = value;
  mSize = mSize + 1;
}

#endif
