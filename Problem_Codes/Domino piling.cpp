#include<bits/stdc++.h>
using namespace std;

int main()
{

    int m, n;
    cin >> m >> n;

    int sqr = m * n;

    if (sqr % 2 == 1) {
        int maxval = (sqr - 1) / 2 ;
        cout << maxval << endl;
    } else {
        int maxval = sqr / 2;
      cout << maxval <<endl;
    }

    return 0;
}
