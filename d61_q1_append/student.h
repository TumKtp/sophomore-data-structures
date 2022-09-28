#include "stack.h"
#include "queue.h"

namespace CP
{
    template <typename T>
    void stack<T>::appendStack(stack<T> s)
    {
        T *arr = new T[s.size() + size()]();
        int idx = 0;
        for (size_t i = 0; i < s.size(); i++)
        {
            arr[idx++] = s.mData[i];
        }
        for (size_t i = 0; i < size(); i++)
        {
            arr[idx++] = mData[i];
        }
        delete[] mData;
        mData = arr;
        mCap = s.size() + size();
        mSize = s.size() + size();
    }

    template <typename T>
    void stack<T>::appendQueue(queue<T> q)
    {
        expand(mSize + q.size());
        int idx = 1, cnt1 = 0;
        for (size_t i = mSize + q.size() - 1; i >= q.size(); i--)
        {
            mData[mSize + q.size() - idx] = mData[mSize - cnt1 - 1];
            cnt1++;
            idx++;
        }
        int cnt = 0;
        for (size_t i = 0; i < q.size(); i++)
        {
            mData[mSize + q.size() - idx] = q.mData[(q.mFront + cnt) % q.mCap];
            cnt++;
            idx++;

        }
        mSize = mSize + q.size();
    }

    template <typename T>
    void queue<T>::appendStack(stack<T> s)
    {
        for (int i = s.mSize - 1; i >= 0; i--)
        {
            this->push(s.mData[i]);
        }
    }

    template <typename T>
    void queue<T>::appendQueue(queue<T> q)
    {
        for (int i = 0; i < q.mSize; i++)
        {
            this->push(q.mData[(q.mFront + i) % q.mCap]);
        }
    }
}
