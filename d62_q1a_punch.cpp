#include <iostream>
#include <vector>
using namespace std;
vector<string> punch(vector<string> &v, vector<string>::iterator it, int k)
{
    // write some code here
    // don’t forget to return something;
    if ((it - v.begin()) + k >= v.size())
    {
        v.erase(it, v.end());
    }
    else
    {
        v.erase(it, it + k + 1);
    }
    if (it - v.begin() < k)
    {
        v.erase(v.begin(), it);
    }
    else
    {
        v.erase(it - k, it);
    }

    return v;
}
int main()
{
    int n, j, k;
    cin >> n >> j >> k;
    vector<string> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    cout << "Result after punch" << endl;
    vector<string> result = punch(v, v.begin() + j, k);
    for (auto &x : result)
    {
        cout << x << endl;
    }
}