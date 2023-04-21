#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
#define optimize                 \
    ios::sync_with_stdio(false); \
    cin.tie(0);

void solve()
{
    int n;
    string text = "", result = "";

    cin >> n;
    cin.ignore();
    getline(cin, text);

    for (size_t i = 0; i < text.length(); i++)
    {
        if (text[i] == ' ')
        {
            result += text[i];
        }
        else
        {
            result += char((int(text[i] - (n + 122)) % 26) + 122);
        }
    }

    cout << result;
}

int main(void)
{
    optimize;
    solve();
    return 0;
}
