
#include <iostream>
using namespace std;

// A function to find the minimum number of operations to make the array not sorted
int min_operations(int a[], int n) {
  // If the array has only two elements, return 1
  if (n == 2) {
    return 1;
  }
  // Otherwise, check if the array is strictly increasing or decreasing
  bool increasing = true;
  bool decreasing = true;
  for (int i = 0; i < n - 1; i++) {
    if (a[i] >= a[i + 1]) {
      increasing = false;
    }
    if (a[i] <= a[i + 1]) {
      decreasing = false;
    }
  }
  // If the array is strictly increasing or decreasing, return 2
  if (increasing || decreasing) {
    return 2;
  }
  // Otherwise, return 0
  return 0;
}

int main() {
  // Read the number of test cases
  int t;
  cin >> t;
  while (t--) {
    // Read the length and values of the array
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    // Output the minimum number of operations
    cout << min_operations(a, n) << endl;
  }
}

