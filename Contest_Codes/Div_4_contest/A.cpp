#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m, k, H;
        cin >> n >> m >> k >> H;

        vector<int> h(n);
        for (int i = 0; i < n; ++i) {
            cin >> h[i];
        }

        int conversations = 0;

        for (int i = 0; i < n; ++i) {
            for (int j = 1; j <= m; ++j) {
                if (h[i] != H && h[i] + (j * k) != H && h[i] - (j * k) != H) {
                    conversations++;
                }
            }
        }

        cout << conversations << endl;
    }

    return 0;
}
