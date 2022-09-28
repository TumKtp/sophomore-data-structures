#include <bits/stdc++.h>
using namespace std;
map<string, int> cnt;
set<string> member;

bool compareInterval(pair<int, string> i1, pair<int, string> i2)
{
    return (i1.first > i2.first);
}
int main()
{
    int N, K;
    string s;
    vector<pair<int, string>> v;
    cin >> N >> K;
    while (N--)
    {
        cin >> s;
        cnt[s]++;
        member.insert(s);
    }
    set<string>::iterator it = member.begin();
    for (; it != member.end(); it++)
    {
        v.push_back({cnt[*it], *it});
    }
    int count = 0;
    sort(v.begin(), v.end(), compareInterval);
    for (int i = 0; i < v.size(); i++)
    {
        count++;
        if (count == K)
        {
            cout << v[i].first;
            return 0;
        }
    }
    cout << v[v.size() - 1].first;
}