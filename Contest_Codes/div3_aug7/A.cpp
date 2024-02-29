#include <iostream>
using namespace std;


bool canColor(int a[], int n) {

  int odd = 0, even = 0;

  for (int i = 0; i < n; i++) {
    if (a[i] % 2 == 0) {
      even += a[i];
    } else {
      odd += a[i];
    }
  }

  if (odd % 2 == even % 2) {
    return true;
  }

  return false;
}

int main() {

  int t;
  cin >> t;

  while (t--) {

    int n;
    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }

    bool ans = canColor(a, n);

    if (ans) {
      cout << "YES\n";
    } else {
      cout << "NO\n";
    }
  }
  return 0;
}
