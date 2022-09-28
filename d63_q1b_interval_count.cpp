#include <bits/stdc++.h>
using namespace std;
int N, M, K, t;
int main()
{
    std::ios_base::sync_with_stdio(false);
    scanf("%d%d%d", &N, &M, &K);

    vector<int> v;
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &t);

        v.push_back(t);
    }
    sort(v.begin(), v.end());
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << endl;
    // }
    vector<int>::iterator itLower, itUpper;
    int lower, upper;
    for (int i = 0; i < M; i++)
    {
        scanf("%d", &t);
        itLower = lower_bound(v.begin(), v.end(), t - K);
        itUpper = lower_bound(v.begin(), v.end(), t + K);
        if (itLower == v.end())
        {
            printf("0 ");
            continue;
        }
        if (itUpper == v.end())
            itUpper--;
        if (*itUpper > t + K)
            itUpper--;
        upper = itUpper - v.begin(), lower = itLower - v.begin();
        printf("%d ", (upper - lower) + 1);
    }
}

// 3 4
// 2019 10
// 2020 1
// 2020 8
// 2020 1
// 2019 12
// 2020 11
// 2018 1