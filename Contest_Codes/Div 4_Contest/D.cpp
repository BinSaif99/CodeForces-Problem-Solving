#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int t; // number of test cases
  cin >> t; // read input
  while (t--) { // loop over test cases
    int n, k; // number of problems and maximum allowed difference
    cin >> n >> k; // read input
    int a[n]; // array of difficulties
    for (int i = 0; i < n; i++) { // loop over problems
      cin >> a[i]; // read input
    }
    sort(a, a + n); // sort the array in ascending order
    int ans = n - 1; // answer (minimum number of problems to remove)
    for (int i = 0; i < n; i++) { // loop over problems
      int j = i; // index of the next problem to consider
      int cnt = 0; // number of problems to remove in this segment
      while (j < n && a[j] - a[i] <= k) { // while the difference is not more than k
        j++; // move to the next problem
        cnt++; // increment the count
      }
      ans = min(ans, n - cnt); // update the answer with the minimum value
    }
    cout << ans << "\n"; // output the answer
  }
  return 0;
}
