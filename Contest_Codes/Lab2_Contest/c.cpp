#include <bits/stdc++.h>

using namespace std;

bool fun1(const string& s) {
    int n = s.length();


    bool palindrom = true;
    for (int i = 0; i < n / 2; i++) {
        if (s[i] != s[n - 1 - i]) {
            palindrom = false;
            break;
        }
    }


    if (palindrom) {
        return false;
    }

    return true;
}

int main() {
    string s;
    cin >> s;

    int path = -1;


    for (int i = 0; i < s.length(); i++) {
        for (int j = i; j < s.length(); j++) {
            string part = s.substr(i, j - i + 1);
            if (fun1(part)) {
                int len = part.length();
                if (path == -1 || len < path) {
                    path = len;
                }
            }
        }
    }

    cout << path << endl;

    return 0;
}
