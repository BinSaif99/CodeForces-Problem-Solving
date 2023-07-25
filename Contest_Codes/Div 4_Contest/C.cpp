#include <iostream>
using namespace std;

int main() {
  int t; // number of test cases
  cin >> t; // read input
  while (t--) { // loop over test cases
    char grid[8][8]; // grid of dots and letters
    for (int i = 0; i < 8; i++) { // loop over rows
      for (int j = 0; j < 8; j++) { // loop over columns
        cin >> grid[i][j]; // read input
      }
    }
    string ans = ""; // answer word
    for (int j = 0; j < 8; j++) { // loop over columns
      bool found = false; // flag to indicate if word is found in this column
      for (int i = 0; i < 8; i++) { // loop over rows
        if (grid[i][j] != '.') { // if letter is found
          ans += grid[i][j]; // append to answer word
          found = true; // set flag to true
        }
      }
      if (found) break; // if word is found, break the loop
    }
    cout << ans << "\n"; // output the answer word
  }
  return 0;
}
