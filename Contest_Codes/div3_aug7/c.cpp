#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> b(n - 1);
        for (int i = 0; i < n - 1; ++i) {
            cin >> b[i];
        }

        vector<int> a(n);
        a[0] = b[0];

        for (int i = 1; i < n; ++i) {
            a[i] = min(b[i - 1], a[i - 1]);
        }

        // Output the possible array a
        for (int i = 0; i < n; ++i) {
            cout << a[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
