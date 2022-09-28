#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    map<string, int> m;
    set<string> ans;
    cin >> N;
    string temp;
    while (N--)
    {
        cin >> temp;
        m[temp]++;
        if (m[temp] > 1)
            ans.insert(temp);
    }
    set<string>::iterator it = ans.begin();
    for (; it != ans.end(); it++)
    {
        cout << *it << " " << m[*it] << " ";
    }
}