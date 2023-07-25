#include <iostream>
#include <vector>
using namespace std;

// A function to check if a path of length p is possible
bool check_path(vector<int>& c, int n, int k, int p) {
  // If p is not divisible by k, return false
  if (p % k != 0) return false;
  // If p is larger than n, return false
  if (p > n) return false;
  // Loop over the blocks of length k
  for (int i = n - p; i < n; i += k) {
    // Get the color of the first tile in the block
    int color = c[i];
    // Loop over the tiles in the block
    for (int j = i; j < i + k; j++) {
      // If the color is different, return false
      if (c[j] != color) return false;
    }
  }
  // If all blocks have the same color, return true
  return true;
}

int main() {
  // Read the number of test cases
  int t;
  cin >> t;
  // Loop over the test cases
  while (t--) {
    // Read n and k
    int n, k;
    cin >> n >> k;
    // Read the colors of the tiles
    vector<int> c(n);
    for (int i = 0; i < n; i++) {
      cin >> c[i];
    }
    // Initialize the answer to NO
    string ans = "NO";
    // Loop over the possible lengths of the path from 1 to n
    for (int p = 1; p <= n; p++) {
      // Check if a path of length p is possible
      if (check_path(c, n, k, p)) {
        // If yes, update the answer to YES and break the loop
        ans = "YES";
        break;
      }
    }
    // Output the answer
    cout << ans << endl;
  }
  return 0;
}
