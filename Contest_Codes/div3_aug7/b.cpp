#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string x;
        cin >> x;

        int n = x.size();
        int k = n - 1;

        while (k >= 0 && x[k] == '0')
            k--;

        for (int i = k - 1; i >= 0; i--) {
            if (x[i] >= '5') {
                x[i] = '0';
                if (i == 0) {
                    x = '1' + x;
                    k++;
                } else {
                    x[i - 1]++;
                }
            }
        }

        for (int i = 0; i <= k; i++) {
            cout << x[i];
        }
        cout << endl;
    }

    return 0;
}
