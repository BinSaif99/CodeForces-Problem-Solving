#include <iostream>
using namespace std;

int main() {
  int t; // number of test cases
  cin >> t; // read input
  while (t--) { // loop over test cases
    int a, b, c; // three digits
    cin >> a >> b >> c; // read input
    bool ans = false; // answer flag
    // check all possible pairs of digits
    if (a + b >= 10) ans = true;
    if (a + c >= 10) ans = true;
    if (b + c >= 10) ans = true;
    // output the answer
    if (ans) cout << "YES\n";
    else cout << "NO\n";
  }
  return 0;
}
