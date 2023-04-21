#include <bits/stdc++.h>
using namespace std;


void getrow(int n)
{
   int prev = 1;
   printf("%d ", prev);

   for (int i = 1; i <= n; i++) {
     int curr = (prev * (n - i + 1)) / i;
     printf("%d ", curr);
     prev = curr;
   }
}


int main()
{

  int n;
  cin >> n;
  getrow(n);
  return 0;
}
