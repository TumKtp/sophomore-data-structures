#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
bool CP::vector<T>::block_swap(iterator a, iterator b, size_t m)
{
  // printf("%d %d %d", b, begin(), b < b.begin());
  if (a == b || a < begin() || a > end() - 1 || b < begin() || b > end() - 1)
  {
    return false;
  }
  // write your code here
  if (a > b)
  {
    iterator temp = a;
    a = b;
    b = temp;
  }

  T temp;
  if (m != 0 && ((b - begin()) + m - 1 < mSize) && (((a - begin()) + m - 1 < (b - begin()))))
  {
    for (int i = 0; i < m; i++)
    {
      temp = *(a + i);
      *(a + i) = *(b + i);
      *(b + i) = temp;
    }
    return true;
  }
  return false;
}

#endif