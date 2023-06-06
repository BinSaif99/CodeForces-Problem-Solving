#include<bits/stdc++.h>
using namespace std;

int fun1(const vector<int>& temp, int k, int q) {
    int n = temp.size();
    int count = 0;
    int days = 0;

    for (int i = 0; i < n; i++) {
        if (temp[i] <= q) {
            days++;
        } else {
            days = 0;
        }

        if (days >= k) {
            count += (days - k + 1);
        }
    }

    return count;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k, q;
        cin >> n >> k >> q;

        vector<int> temp(n);
        for (int i = 0; i < n; i++) {
            cin >> temp[i];
        }

        int count = fun1(temp, k, q);
        cout << count << endl;
    }

    return 0;
}
