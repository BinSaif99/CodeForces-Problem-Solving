#include <iostream>
using namespace std;

int main() {
  int t; // number of test cases
  cin >> t; // read input
  while (t--) { // loop over test cases
    int n; // number of responses
    cin >> n; // read input
    int ans = -1; // answer index
    int max_quality = -1; // maximum quality
    for (int i = 1; i <= n; i++) { // loop over responses
      int a, b; // number of words and quality
      cin >> a >> b; // read input
      if (a <= 10 && b > max_quality) { // check if response is valid and better than current answer
        ans = i; // update answer index
        max_quality = b; // update maximum quality
      }
    }
    cout << ans << "\n"; // output the answer
  }
  return 0;
}
