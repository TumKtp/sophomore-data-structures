#include <bits/stdc++.h>
using namespace std;
map<long long, long long> tree;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    long long N, M, temp, a, b;
    cin >> N >> M;
    while (N--)
    {
        cin >> a >> b;
        tree[b] = a;
    }
    while (M--)
    {
        cin >> a >> b;
        if (tree[tree[a]] == tree[tree[b]] && tree[tree[b]] != 0 && a != b)
        {
            cout << "YES ";
        }
        else
            cout << "NO ";
    }
}