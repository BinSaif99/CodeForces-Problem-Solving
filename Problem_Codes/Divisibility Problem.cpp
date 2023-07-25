#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b;
        cin >> a >> b;

        int remainder = a % b;
        int moves = 0;

        if (remainder != 0)
        {
            moves = b - remainder;
        }

        cout << moves << endl;
    }

    return 0;
}
