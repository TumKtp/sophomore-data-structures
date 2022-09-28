#include <bits/stdc++.h>
using namespace std;
map<int, int> counter;
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    int N, M, temp;
    cin >> N >> M;
    set<int> cards;
    for (int i = 0; i < N; i++)
    {
        cin >> temp;
        cards.insert(temp);
        counter[temp]++;
    }
    for (int i = 0; i < M; i++)
    {
        int C;
        cin >> C;
        for (int j = 0; j < C; j++)
        {
            cin >> temp;
            set<int>::iterator it = cards.upper_bound(temp);
            if (it == cards.end())
            {
                cout << (i + 1);
                return 0;
            }
            else
            {
                counter[*it]--;
                if (counter[*it] == 0)
                {
                    cards.erase(it);
                }
            }
        }
    }
    cout << M + 1;
}