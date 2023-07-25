#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9 + 7; // a large value to represent infinity

// a function to find the minimum cost of a potion
int min_cost(int i, vector<int>& c, vector<vector<int>>& mix, vector<int>& dp) {
    // if the cost is already computed, return it
    if (dp[i] != -1) return dp[i];
    // if the potion can only be bought, return its price
    if (mix[i].empty()) return dp[i] = c[i];
    // otherwise, try all possible ways of mixing potions
    int ans = c[i]; // initialize the answer with the buying price
    for (int j : mix[i]) {
        // for each potion required for mixing, find its minimum cost recursively
        ans = min(ans, min_cost(j, c, mix, dp));
    }
    // add the cost of the current potion to the answer
    ans += c[i];
    // return the minimum cost
    return dp[i] = ans;
}

int main() {
    ios::sync_with_stdio(false); cin.tie(0); // for fast input/output
    int t; cin >> t; // read the number of test cases
    while (t--) {
        int n, k; cin >> n >> k; // read n and k
        vector<int> c(n); // a vector to store the costs of potions
        for (int i = 0; i < n; i++) cin >> c[i]; // read the costs
        vector<int> p(k); // a vector to store the potions Nastya has
        for (int i = 0; i < k; i++) cin >> p[i]; // read the potions
        vector<vector<int>> mix(n); // a vector of vectors to store the ways of mixing potions
        for (int i = 0; i < n; i++) {
            int m; cin >> m; // read the number of potions required for mixing
            mix[i].resize(m); // resize the vector accordingly
            for (int j = 0; j < m; j++) cin >> mix[i][j]; // read the potions required for mixing
        }
        vector<int> dp(n, -1); // a vector to store the minimum costs of potions, initialized with -1
        for (int i = 0; i < k; i++) {
            dp[p[i]] = 0; // set the cost of potions Nastya has to zero
        }
        for (int i = 0; i < n; i++) {
            cout << min_cost(i, c, mix, dp) << " "; // print the minimum cost of each potion
        }
        cout << "\n"; // print a new line after each test case
    }
    return 0;
}
