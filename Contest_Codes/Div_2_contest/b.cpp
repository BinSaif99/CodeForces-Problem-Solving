//#include <iostream>
//#include <vector>
//using namespace std;
//
//// Function to calculate the number of fibonacci-like sequences of length k with n as the k-th element
//int countFibonacciLikeSequences(int n, int k) {
//    // For k = 3, there will always be one valid sequence [0, n, n]
//    if (k == 3) {
//        return 1;
//    }
//
//    vector<int> sequence(k, 0);
//    sequence[k - 1] = n;
//
//
//    int count = 0;
//    for (int i = 0; i <= n; ++i) {
//        sequence[0] = i;
//        for (int j = i; j <= n; ++j) {
//            sequence[1] = j;
//            bool valid = true;
//            for (int idx = 2; idx < k; ++idx) {
//                sequence[idx] = sequence[idx - 1] + sequence[idx - 2];
//                if (sequence[idx] > n) {
//                    valid = false;
//                    break;
//                }
//            }
//            if (valid && sequence[k - 1] == n) {
//                count++;
//            }
//        }
//    }
//
//    return count;
//}
//
//int main() {
//    int t;
//    cin >> t;
//
//    while (t--) {
//        int n, k;
//        cin >> n >> k;
//        int result = countFibonacciLikeSequences(n, k);
//        cout << result << endl;
//    }
//
//    return 0;
//}
//
#include <iostream>
#include <vector>
using namespace std;

// Function to calculate the number of fibonacci-like sequences of length k with n as the k-th element
int countFibonacciLikeSequences(int n, int k) {
    // Create a 2D dp array to store the counts of sequences for each value of n and k
    vector<vector<int>> dp(n + 1, vector<int>(k + 1, 0));

    // For k = 3, there will always be one valid sequence [0, n, n]
    if (k == 3) {
        return 1;
    }

    // For k = 4, there will be n valid sequences [0, 0, n, n], [0, 1, n, n], ..., [0, n, n, n]
    for (int i = 0; i <= n; ++i) {
        dp[i][4] = n - i + 1;
    }

    // Calculate the dp array for k > 4
    for (int i = 5; i <= k; ++i) {
        for (int j = 0; j <= n; ++j) {
            for (int x = 0; x <= j; ++x) {
                dp[j][i] += dp[x][i - 1];
            }
        }
    }

    return dp[n][k];
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;
        int result = countFibonacciLikeSequences(n, k);
        cout << result << endl;
    }

    return 0;
}

