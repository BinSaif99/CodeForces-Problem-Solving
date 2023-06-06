#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

int main() {
    int t;
    std::cin >> t;

    while (t--) {
        int n;
        std::cin >> n;

        std::vector<int> patterns(n);
        for (int i = 0; i < n; i++) {
            std::cin >> patterns[i];
        }

        std::sort(patterns.begin(), patterns.end());

        int minWaitingTime = INT_MAX;
        for (int i = 0; i < 3; i++) {
            int currentWaitingTime = 0;
            for (int j = i, k = 0; k < n; j++, k++) {
                currentWaitingTime = std::max(currentWaitingTime, abs(patterns[j] - patterns[k]));
            }
            minWaitingTime = std::min(minWaitingTime, currentWaitingTime);
        }

        std::cout << minWaitingTime << std::endl;
    }

    return 0;
}
