#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
#define optimize                 \
    ios::sync_with_stdio(false); \
    cin.tie(0);

void solve()
{

    unsigned long int n, i, j;
    cin >> n;

    unsigned long int arr[n];

    for (i = 1, j = 0; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            if (n / i == i)
            {
                arr[j++] = i;
            }
            else
            {
                arr[j++] = i;
                arr[j++] = n / i;
            }
        }
    }

    sort(arr, arr + j);

    for (i = 0; i < j; i++)
    {
        if (i == j - 1)
            cout << arr[i];
        else
            cout << arr[i] << " ";
    }

    cout << endl;
}

int main(void)
{
    optimize;
    solve();
    return 0;
}
