#include <bits/stdc++.h>
using namespace std;

int main() {
    int testcase;
    cin >> testcase;
    while (testcase--) {
        int num;
        cin >> num;
        int ansr = 0, flag = 0;
        for (int i = 0; i < num; i++) {
            int x;
            cin >> x;
            if (x == 0) {
                flag++;
            } else {
                ansr = max(ansr, flag);
                flag = 0;
            }
        }
        ansr = max(ansr, flag);
        cout << ansr << endl;
    }
    return 0;
}
