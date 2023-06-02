#include <bits/stdc++.h>
using namespace std;

int reverseBinary(int n) {
    int rev = 0;
    while (n > 0) {
        rev <<= 1;
        if ((n & 1) == 1) {
            rev ^= 1;
        }
        n >>= 1;
    }
    return rev;
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        if (num % 2 == 0) {
            num = reverseBinary(num);
        }
        cout << num << endl;
    }
    return 0;
}
