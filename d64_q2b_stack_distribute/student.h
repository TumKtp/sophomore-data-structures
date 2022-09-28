#ifndef __STUDENT_H__
#define __STUDENT_H__

template <typename T>
std::vector<std::vector<T>> CP::stack<T>::distribute(size_t k) const
{
  // write your code here
  std::vector<std::vector<T>> v;
  if (mSize % k == 0)
  {
    int cnt = mSize / k;
    int idx = 1;
    for (int i = 0; i < k; i++)
    {
      std::vector<T> temp;

      for (int i = 0; i < cnt; i++)
      {
        if (idx <= mSize)
        {
          T t = mData[mSize - idx];
          temp.push_back(t);
          idx++;
        }
      }
      v.push_back(temp);
    }
    return v;
  }
  int cnt = (mSize / k) + 1;
  int idx = 1;
  int total = 0;
  for (int i = 0; i < k; i++)
  {
    std::vector<T> temp;
    for (int i = 0; i < cnt; i++)
    {
      if (idx <= mSize)
      {
        T t = mData[mSize - idx];
        temp.push_back(t);
        // printf("- cnt%d %d \n", cnt, t);
        idx++;
        total++;
      }
    }
    int left = mSize - total;
    // printf("------- %d %d\n", left, cnt - 1);
    if (left != cnt && cnt - 1 != 0 && left % (cnt - 1) == 0)
    {
      cnt--;
    }
    v.push_back(temp);
  }
  return v;
}
#endif
