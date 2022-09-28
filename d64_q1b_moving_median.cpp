#include <bits/stdc++.h>
using namespace std;
int n, w, temp, i, j, cnt, MID;
int ma[1000005];
set<int> s;
vector<int> v;
set<int>::iterator it;
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    scanf("%d%d", &n, &w);
    w++;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &temp);
        v.push_back(temp);
    }
    for (i = 0; i < w; i++)
    {
        s.insert(v[i]);
        ma[v[i]]++;
    }

    MID = (w / 2);
    it = s.begin();
    cnt = 0;
    for (i = 0; i < MID; i++)
    {
        ++cnt;
        if (cnt == ma[*it])
        {
            it++;
            cnt = 0;
        }
    }
    printf("%d ", *it);
    for (i = w; i < v.size(); i++)
    {
        ma[v[i - w]]--;
        if (ma[v[i - w]] == 0)
            s.erase(v[i - w]);
        s.insert(v[i]);
        ma[v[i]]++;
        it = s.begin();
        cnt = 0;
        for (j = 0; j < MID; j++)
        {
            // cout << " - " << endl;
            ++cnt;
            if (cnt == ma[*it])
            {
                it++;
                cnt = 0;
            }
        }
        printf("%d ", *it);
    }
}