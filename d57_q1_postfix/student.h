#ifndef __STUDENT_H__
#define __STUDENT_H__
#include <vector>

using namespace std;

int eval_postfix(vector<pair<int, int>> v)
{
  // WRITE YOUR CODE HERE
  // DON"T FORGET TO RETURN THE RESULT
  stack<int> st;
  for (auto i : v)
  {
    if (i.first == 1)
      st.push(i.second);
    else
    {
      int f = st.top();
      st.pop();
      int s = st.top();
      st.pop();
      int temp = s;
      if (i.second == 0)
      {
        temp += f;
      }
      else if (i.second == 1)
      {
        temp -= f;
      }
      else if (i.second == 2)
      {
        temp *= f;
      }
      else
      {
        temp /= f;
      }
      st.push(temp);
    }
  }
  return st.top();
}

#endif
