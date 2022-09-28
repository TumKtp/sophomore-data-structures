#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, temp;
    cin >> m >> n;
    set<int> s;
    while (m--)
    {
        cin >> temp;
        s.insert(temp);
    }
    set<int> ans;
    while (n--)
    {
        cin >> temp;
        set<int>::iterator it = s.find(temp);
        if (it != s.end())
        {
            ans.insert(*it);
        }
    }
    set<int>::iterator it = ans.begin();
    for (; it != ans.end(); it++)
    {
        cout << *it << " ";
    }
}