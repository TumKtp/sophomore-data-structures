#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::stack<T>::multi_pop(size_t K)
{
  // write your code here
  while (K-- && !empty())
  {
    pop();
  }
}

template <typename T>
std::stack<T> CP::stack<T>::remove_top(size_t K)
{
  // write your code here
  //
  // don't forget to return an std::stack
  std::vector<T> v;
  std::stack<T> st;
  while (K-- && !empty())
  {
    T top = this->top();
    v.push_back(top);
    pop();
  }
  for (int i = v.size() - 1; i >= 0; i--)
  {
    st.push(v[i]);
  }
  return st;
}

#endif
