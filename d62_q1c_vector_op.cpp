#include <bits/stdc++.h>
using namespace std;
struct myclass
{
    bool operator()(int i, int j) { return (i > j); }
} myobject;

int main()
{
    int n, temp;
    cin >> n;
    string s;
    vector<int> v;
    while (n--)
    {
        cin >> s;
        // cout << n << " " << s;
        if (s == "pb")
        {
            cin >> temp;
            v.push_back(temp);
        }
        if (s == "sa")
        {
            sort(v.begin(), v.end());
        }
        if (s == "sd")
        {
            sort(v.begin(), v.end(), myobject);
        }
        if (s == "r")
        {
            reverse(v.begin(), v.end());
        }
        if (s == "d")
        {
            cin >> temp;
            v.erase(v.begin() + temp);
        }
        // for (int i = 0; i < v.size(); i++)
        // {
        //     cout << v[i] << " ";
        // }
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}