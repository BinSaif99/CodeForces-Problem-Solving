////#include <bits/stdc++.h>
////using namespace std;
////int main() {
////    int n;
////    cin >> n;
////    int gold = ceil(n / 12.0);
////    int silver = ceil(n / 4.0);
////    int bronze = ceil(n / 2.0);
////    while (gold + silver + bronze > n) {
////        if (gold >= 1) gold--;
////        else if (silver > 0) silver--;
////        else bronze--;
////    }
////    cout << gold << " " << silver - gold << " " << bronze - silver << endl;
////    return 0;
////}
////
//#include <iostream>
//
//int main() {
//    int n;
//    std::cin >> n;
//
//    int gold = n / 12;
//    int silver = n / 4;
//    int bronze = n / 2;
//
//    // Adjust medal counts if necessary
//    while (gold + silver + bronze < n) {
//        if (silver >= gold && silver >= bronze) {
//            silver++;
//        } else if (gold >= silver && gold >= bronze) {
//            gold++;
//        } else {
//            bronze++;
//        }
//    }
//
//    std::cout << gold << " " << silver - gold << " " << bronze - silver << std::endl;
//
//    return 0;
//}
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    while (cin >> s) {
        if (s == "0") break;
        int n = s.size();
        vector<long long> dp(n + 1);
        dp[0] = 1;
        for (int i = 1; i <= n; i++) {
            if (s[i - 1] != '0') dp[i] += dp[i - 1];
            if (i > 1 && s[i - 2] != '0' && stoi(s.substr(i - 2, 2)) <= 26) dp[i] += dp[i - 2];
        }
        cout << dp[n] << endl;
    }
    return 0;
}
