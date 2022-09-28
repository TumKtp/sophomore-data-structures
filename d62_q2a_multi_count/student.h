#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <bits/stdc++.h>
using namespace std;

template <typename T>
std::vector<std::pair<T, size_t>> CP::queue<T>::count_multi(std::vector<T> &k) const
{
    // write your code here
    map<T, int> m;
    for (int i = 0; i < mSize; i++)
    {
        if (m[mData[(mFront + i) % mCap]] == 0)
        {
            m[mData[(mFront + i) % mCap]] = 0;
        }
        m[mData[(mFront + i) % mCap]]++;
    }
    vector<pair<T, size_t>> ans;
    for (int i = 0; i < k.size(); i++)
    {
        ans.push_back({k[i], m[k[i]]});
    }
    return ans;
}

#endif
