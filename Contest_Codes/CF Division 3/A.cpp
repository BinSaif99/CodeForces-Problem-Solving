#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, d;
        cin >> n >> d;
        string s;
        cin >> s;


        int pos = n;
        for (int i = 0; i < n; i++) {
            if (s[i] < d + '0') {
                pos = i;
                break;
            }
        }


        s.insert(pos, to_string(d));


        cout << s << endl;
    }
    return 0;
}
