#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
#define optimize                 \
    ios::sync_with_stdio(false); \
    cin.tie(0);

bool sbs(const pair<string, int> &a, const pair<string, int> &b)
{
    return (a.second > b.second);
}

void solve()
{
    int x;
    cin >> x;
    while (x--)
    {
        int t;
        cin >> t;
        auto gang = vector<pair<string, int>>(t);

        for (int j = 0; j < t; j++)
        {
            string name;
            int power;
            cin >> name >> power;
            pair<string, int> tt;
            tt.first = name;
            tt.second = power;
            gang.push_back(tt);
        }

        sort(gang.begin(), gang.end(), sbs);

        for (size_t i = 0; i < gang.size(); i++)
        {
            if (gang[i].first == "")
                continue;
            if (i != gang.size() - 1)
                cout << gang[i].first << endl;
            else
                cout << gang[i].first;
        }

        gang.clear();
    }
}

int main(void)
{
    optimize;
    solve();
    return 0;
}
