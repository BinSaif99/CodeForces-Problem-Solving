#include<bits/stdc++.h>

using namespace std;

int fun1(int n, int k) {

    if (n < pow(2, k))
        return n+1;


    return pow(2, k);
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        int ways = fun1(n, k);
        cout << ways << endl;
    }

    return 0;
}
