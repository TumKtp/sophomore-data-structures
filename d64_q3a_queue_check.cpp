#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N, mFront, mSize, mCap, last, cor;

    cin >> N;
    while (N--)
    {
        cin >> mFront >> mSize >> mCap >> last >> cor;
        if (cor == 0)
        {
            if (mFront >= mCap || (last - mSize + mCap) % mCap != mFront || (mFront + mSize) % mCap != last || mSize > mCap)
            {
                printf("WRONG\n");
                continue;
            }
        }
        else if (cor == 1)
        {
            if (mFront >= mCap || (last - mSize + mCap) % mCap != mFront || (mFront + mSize) % mCap != last)
            {
                printf("WRONG %d\n", (last - mSize + mCap) % mCap);
                continue;
            }
        }
        else if (cor == 2)
        {

            if (mSize > mCap || (last - mSize + mCap) % mCap != mFront || (mFront + mSize) % mCap != last)
            {
                printf("WRONG %d\n", (last - mFront + mCap) % mCap);
                continue;
            }
        }
        else if (cor == 3)
        {
            if (mFront >= mCap || (last - mSize + mCap) % mCap != mFront || (mFront + mSize) % mCap != last || mSize > mCap)
            {
                if (mFront + mSize == last)
                {
                    printf("WRONG %d\n", last + 1);
                    continue;
                }
                int minn = mFront > last ? mFront - last : last - mFront;
                printf("WRONG %d\n", minn + mSize);
                continue;
            }
        }
        else
        {
            if ((mFront + mSize) % mCap != last || (last - mSize + mCap) % mCap != mFront)
            {
                printf("WRONG %d\n", (mFront + mSize) % mCap);
                continue;
            }
        }
        printf("OK\n");
        continue;
    }
}
