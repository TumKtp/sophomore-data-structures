#ifndef __STUDENT_H__
#define __STUDENT_H__

template <typename T>
void CP::stack<T>::moveInsert(int k, CP::stack<T> &s2, int m)
{
  // your code here
  if (m > s2.size())
    m = s2.size();
  if (mSize + m > mCap)
  {
    if (mSize + m > mCap * 2)
    {
      expand(mSize + m + 1);
    }
    else
      expand(mCap * 2);
  }
  int pos = k;
  if (k > mSize)
  {
    pos = mSize;
  }
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
    mData[mSize + 1 - i + m - 1] = mData[mSize - i];
  }
  for (int i = diff + m - 1; i >= diff; i--)
  {
    int a = s2.top();
    mData[i] = a;
    s2.pop();
  }
  mSize = mSize + m;
}
#endif
