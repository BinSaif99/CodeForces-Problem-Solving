//#include <iostream>
//#include <string>
//#include <vector>
//
//long long fun1(const std::string& message) {
//    int n = message.length();
//    std::vector<long long> dp(n + 1, 0);
//
//    dp[0] = 1;
//    dp[1] = 1;
//
//    for (int i = 2; i <= n; i++) {
//        if (message[i - 1] != '0') {
//            dp[i] = dp[i - 1];
//        }
//
//        int dig2 = std::stoi(message.substr(i - 2, 2));
//        if (dig2 >= 10 && dig2 <= 26) {
//            dp[i] += dp[i - 2];
//        }
//    }
//
//    return dp[n];
//}
//
//int main() {
//    std::string message;
//
//    while (std::cin >> message && message != "0") {
//        long long result = fun1(message);
//        std::cout << result << std::endl;
//    }
//
//    return 0;
//}
//
#include <iostream>
#include <vector>
using namespace std;

int fun1(const string& digits) {
    int n = digits.size();
    vector<long long> dp(n + 1, 0);
    dp[0] = 1;

    if (digits[0] != '0')
        dp[1] = 1;

    for (int i = 2; i <= n; i++) {
        int dig1 = stoi(digits.substr(i - 1, 1));
        int dig2 = stoi(digits.substr(i - 2, 2));

        if (dig1 >= 1)
            dp[i] += dp[i - 1];

        if (dig2 >= 10 && dig2 <= 26)
            dp[i] += dp[i - 2];
    }

    return dp[n];
}

int main() {
    string digits;

    while (cin >> digits && digits != "0") {
        int numDecodings = fun1(digits);
        cout << numDecodings << endl;
    }

    return 0;
}
