#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


bool can_sort(vector<int>& a) {

  int even = 0, odd = 0;
  for (int x : a) {
    if (x % 2 == 0) even++;
    else odd++;
  }

  if (even % 2 == 1 && odd % 2 == 1) return false;

  vector<int> b = a;
  sort(b.begin(), b.end());
  for (int i = 0; i < a.size(); i++) {

    if (a[i] != b[i] && a[i] % 2 != b[i] % 2) return false;
  }

  return true;
}

int main() {

  int t;
  cin >> t;
  while (t--) {

    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }

    if (can_sort(a)) cout << "YES\n";
    else cout << "NO\n";
  }
}
