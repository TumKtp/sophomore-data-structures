#include <bits/stdc++.h>
using namespace std;
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    int N, M, L, temp;
    cin >> N >> M >> L;
    vector<int> v;
    set<string> lookUp;
    while (L--)
    {
        cin >> temp;
        v.push_back(temp);
    }
    string s;
    while (N--)
    {
        cin >> s;
        string x = "";
        for (int i = 0; i < s.length(); i++)
        {
            int num = ((((s[i] - 'a') - v[i]) % 26) + 26) % 26;
            x += ('a' + (num));
        }
        lookUp.insert(x);
    }
    while (M--)
    {
        cin >> s;
        auto it = lookUp.find(s);
        if (it != lookUp.end())
        {
            cout << "Match ";
        }
        else
            cout << "Unknown ";
    }
}