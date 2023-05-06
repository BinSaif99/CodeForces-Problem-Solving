#include <bits/stdc++.h>
using namespace std;

const int MAXN = 2e5 + 5;
int t, n;
pair<int, bitset<2>> a[MAXN];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> t;
    while (t--) {
        cin >> n;
        for (int i = 1; i <= n; i++) {
            cin >> a[i].first >> a[i].second;
        }
        sort(a + 1, a + n + 1);

        int cnt = 0, ans = INT_MAX;
        bitset<2> skills;
        for (int l = 1, r = 1; l <= n; l++) {
            while (r <= n && cnt < 2) {
                cnt += (a[r].second & ~skills).count();
                skills |= a[r].second;
                r++;
            }
            if (cnt < 2) break;
            ans = min(ans, a[r - 1].first - a[l].first);
            cnt -= (a[l].second & skills).count();
            skills &= ~a[l].second;
        }
        if (ans == INT_MAX) cout << "-1\n";
        else cout << ans << "\n";
    }

    return 0;
}
