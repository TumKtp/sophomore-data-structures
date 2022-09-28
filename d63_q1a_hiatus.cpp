#include <bits/stdc++.h>
using namespace std;
int N, M, a, b;
map<int, bool> valid;
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    cin >> N >> M;
    vector<int> v;
    for (int i = 0; i < N; i++)
    {
        cin >> a >> b;
        int sum = a * 100 + b;
        valid[sum] = 1;
        v.push_back(sum);
    }
    sort(v.begin(), v.end());
    int firstDate = v[0];
    int lastDate = v[v.size() - 1];
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << endl;
    // }
    for (int i = 0; i < M; i++)
    {
        cin >> a >> b;
        int sum = a * 100 + b;
        if (valid[sum])
        {
            cout << "0 0 ";
            continue;
        }
        if (sum < firstDate)
        {
            cout << "-1 -1 ";
            continue;
        }
        if (sum > lastDate)
        {
            cout << (lastDate - (lastDate % 100)) / 100 << " " << lastDate % 100 << " ";
            continue;
        }
        auto it = upper_bound(v.begin(), v.end(), sum);
        it--;
        // cout << "test" << *it << endl;
        cout << (*it - (*it % 100)) / 100 << " " << *it % 100 << " ";
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