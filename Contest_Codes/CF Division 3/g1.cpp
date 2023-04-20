//#include <iostream>
//#include <vector>
//#include <cstring>
//using namespace std;
//
//const int MOD = 1e9 + 7;
//
//int n, k;
//vector<int> c;
//int f[110][110];
//
//int main() {
//    int t;
//    cin >> t;
//    while (t--) {
//        cin >> n >> k;
//        c.resize(n);
//        for (int i = 0; i < n; i++) {
//            cin >> c[i];
//        }
//        memset(f, 0, sizeof(f));
//        for (int i = 0; i < n; i++) {
//            f[1][c[i]]++;
//        }
//        for (int i = 2; i <= n / k; i++) {
//            for (int j = 0; j < n; j++) {
//                for (int p = 1; p <= k; p++) {
//                    if (j - p >= 0 && c[j - p + 1] == c[j]) {
//                        f[i][c[j]] = (f[i][c[j]] + f[i - 1][c[j - p + 1]]) % MOD;
//                    }
//                }
//            }
//        }
//        int ans = 0;
//        for (int i = k; i <= n; i++) {
//            for (int j = 1; j <= n; j++) {
//                ans = (ans + f[i][j]) % MOD;
//            }
//        }
//        cout << ans << endl;
//    }
//    return 0;
//}



#include <iostream>
#include <cstring>
using namespace std;

const int MOD = 1e9 + 7;
const int MAXN = 100;
const int MAXM = 100;

int dp[MAXM + 1][MAXN + 1][MAXN + 1];

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int c[n + 1];
        for (int i = 1; i <= n; i++)
        {
            cin >> c[i];
        }
        memset(dp, 0, sizeof(dp));
        for (int j = 1; j <= n; j++)
        {
            dp[1][j][c[j]] = 1;
        }
        for (int i = 2; i <= m; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                for (int s = 1; s <= n; s++)
                {
                    for (int k = 1; k <= i; k++)
                    {
                        int jj = j - k;
                        if (jj >= 1 && c[jj] == s)
                        {
                            dp[i][j][s] += dp[i - k][jj][s];
                            dp[i][j][s] %= MOD;
                        }
                    }
                }
            }
        }
        int ans = 0;
        for (int i = 1; i <= n; i++)
        {
            for (int s = 1; s <= n; s++)
            {
                ans += dp[m][i][s];
                ans %= MOD;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
